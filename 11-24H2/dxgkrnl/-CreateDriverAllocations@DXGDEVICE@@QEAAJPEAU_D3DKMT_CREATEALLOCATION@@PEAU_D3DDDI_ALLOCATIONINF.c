/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1403231E0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?IsOverlayEnabled@ADAPTER_RENDER@@QEBAEXZ @ 0x14006B718 (-IsOverlayEnabled@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        struct DXGRESOURCE *a6,
        void **a7,
        void **a8,
        void *Src,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a10,
        int a11,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a12)
{
  unsigned int v12; // ebx
  DXGDEVICE *v13; // r13
  struct _D3DKMT_CREATEALLOCATION *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 NumAllocations; // rcx
  struct _D3DKMT_CREATEALLOCATION *v19; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v20; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v22; // r8
  void *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  UINT v26; // eax
  void *v27; // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v28; // r12
  UINT i; // edx
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v35; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v37; // rbx
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct _KTHREAD **v40; // rsi
  KIRQL CurrentIrql; // al
  __int64 v42; // r13
  struct DXGTHREAD *v43; // rbx
  int v44; // r12d
  __int64 v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  KIRQL v50; // al
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // ebx
  struct DXGALLOCATION *v55; // r10
  __int64 v56; // r15
  struct _DXGK_ALLOCATIONINFO *v57; // rdx
  unsigned int *pPrivateDriverData; // rcx
  struct _DXGK_ALLOCATIONINFO *v59; // r8
  int Value; // r9d
  int v61; // edx
  __int64 v62; // rcx
  int v63; // r8d
  UINT v64; // edx
  UINT v65; // edx
  __int64 v66; // rax
  SIZE_T v67; // rdx
  __int64 v68; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  __int64 v70; // rsi
  SIZE_T v71; // r8
  __int64 v72; // rcx
  __int64 v73; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v74; // r9
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v80; // eax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v81; // eax
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v85; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // r9d
  __int64 v87; // r8
  unsigned int v88; // eax
  int v89; // ecx
  UINT v90; // edx
  UINT v91; // ecx
  int v92; // ecx
  __int64 v93; // rax
  int v94; // edx
  unsigned int v95; // edx
  UINT v96; // edx
  int v97; // ecx
  __int64 v98; // rax
  UINT v99; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v100; // eax
  struct DXGRESOURCE *v101; // rsi
  const wchar_t *v102; // r9
  __int64 v103; // rcx
  __int64 v104; // rcx
  unsigned int v106; // [rsp+50h] [rbp-B0h]
  struct _D3DDDI_ALLOCATIONINFO2 *v107; // [rsp+58h] [rbp-A8h]
  int v108; // [rsp+60h] [rbp-A0h]
  void *v109; // [rsp+68h] [rbp-98h] BYREF
  UINT Size; // [rsp+70h] [rbp-90h]
  int Size_4; // [rsp+74h] [rbp-8Ch]
  struct _DXGK_ALLOCATIONINFO *v112; // [rsp+78h] [rbp-88h]
  __int64 v113; // [rsp+80h] [rbp-80h]
  int v114; // [rsp+88h] [rbp-78h]
  int v115; // [rsp+8Ch] [rbp-74h]
  struct DXGTHREAD *DxgThread; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_CREATEALLOCATION *v117; // [rsp+98h] [rbp-68h]
  struct DXGRESOURCE *v118; // [rsp+A0h] [rbp-60h]
  DXGDEVICE *v119; // [rsp+A8h] [rbp-58h]
  struct DXGALLOCATION *v120; // [rsp+B0h] [rbp-50h]
  struct _D3DKMT_CREATESTANDARDALLOCATION *v121; // [rsp+B8h] [rbp-48h]
  int v122; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v123; // [rsp+C8h] [rbp-38h]
  char v124; // [rsp+D0h] [rbp-30h]
  char v125[8]; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 0;
  v13 = this;
  v120 = a5;
  v15 = a2;
  v118 = a6;
  v115 = 0;
  v121 = a12;
  v16 = *((_QWORD *)this + 2);
  v119 = this;
  v107 = a3;
  v117 = a2;
  v17 = *(_QWORD *)(v16 + 16);
  v106 = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3094;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"GetRenderCore()->IsCoreResourceSharedOwner()",
        3094LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    a3 = v107;
  }
  NumAllocations = v15->NumAllocations;
  if ( (_DWORD)NumAllocations )
  {
    v19 = v117;
    do
    {
      v20 = &a3[v12];
      if ( v20->pPrivateDriverData )
      {
        PrivateDriverDataSize = v20->PrivateDriverDataSize;
        v22 = v12;
        a4[v22].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&v19->Flags & 0x10000) != 0 )
        {
          a4[v22].pPrivateDriverData = v20->pPrivateDriverData;
        }
        else
        {
          v23 = a7[v12];
          a4[v22].pPrivateDriverData = v23;
          memmove(v23, a8[v12], PrivateDriverDataSize);
        }
        a3 = v107;
      }
      NumAllocations = v19->NumAllocations;
      ++v12;
    }
    while ( v12 < (unsigned int)NumAllocations );
    v13 = v119;
    v15 = v117;
  }
  v114 = 0;
  if ( v118 )
  {
    v24 = *((_QWORD *)v118 + 7);
    v25 = *((_DWORD *)v118 + 1);
    v114 = 1;
    if ( (v25 & 1) != 0 )
      v113 = *(_QWORD *)(v24 + 16);
    else
      v113 = v24;
  }
  else
  {
    v113 = 0LL;
  }
  v26 = v15->PrivateDriverDataSize;
  Size_4 = NumAllocations;
  v112 = a4;
  if ( v26 && v15->pStandardAllocation )
  {
    Size = v26;
    v27 = (void *)operator new[](v26, 0x4B677844u, 258LL);
    v109 = v27;
    if ( !v27 )
    {
      v106 = -1073741801;
      WdLogSingleEntry3(3LL, v13, Size, -1073741801LL);
      WdLogGlobalForLineNumber = 3165;
      goto LABEL_219;
    }
    if ( a11 )
      memmove(v27, Src, Size);
    else
      memmove(v27, v15->pStandardAllocation, Size);
  }
  else
  {
    Size = 0;
    v109 = 0LL;
  }
  v28 = a10;
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) )
    {
      for ( i = 0; i < v15->NumAllocations; v112[v30].Flags.Value |= 0x400u )
      {
        v30 = i++;
        NumAllocations = 88 * v30;
      }
    }
  }
  if ( (*(_DWORD *)&v15->Flags & 0x100000) != 0 )
    goto LABEL_77;
  v31 = *((_QWORD *)v13 + 2);
  v122 = -1;
  v123 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v124 = 1;
    v122 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(NumAllocations, (__int64)&EventProfilerEnter, (__int64)a3, 5002);
  }
  else
  {
    v124 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v122, 5002);
  CurrentProcess = PsGetCurrentProcess(v32);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v35 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_45;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v37 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v37 )
      goto LABEL_46;
    goto LABEL_45;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v37 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v37 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2926;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_45:
    v37 = v35;
  }
LABEL_46:
  v108 = 0;
  v40 = (struct _KTHREAD **)((char *)v37 + 152);
  if ( !v37 )
    v40 = 0LL;
  if ( v40 && v40[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v37 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v40);
    v108 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v31 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v31 + 16) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  v43 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v43 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v43 = DxgThread) != 0LL)) )
  {
    v44 = *((_DWORD *)v43 + 12);
  }
  else
  {
    v44 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v125,
    *(struct DXGADAPTER **)(v31 + 16));
  v45 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v31 + 16) + 472LL))(
          *(_QWORD *)(*(_QWORD *)(v31 + 16) + 288LL),
          &v109);
  if ( v125[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v42 != KeGetCurrentIrql() )
  {
    v50 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, v31, v42, v50);
    WdLogGlobalForLineNumber = 295;
  }
  if ( v43 )
  {
    v47 = *((int *)v43 + 12);
    if ( (_DWORD)v47 != v44 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v43 + 12), v44, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v31 + 16) + 4804LL));
  v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
  v51[3] = v45;
  v51[4] = v113;
  v51[5] = v112->hAllocation;
  v51[6] = v112->Flags.Value;
  v51[7] = v112->PreferredSegment.Value;
  WdLogGlobalForLineNumber = 302;
  if ( (_DWORD)v45 && (_DWORD)v45 != -1073741811 && (_DWORD)v45 != -1073741801 )
  {
    WdLogSingleEntry1(2LL, v45);
    WdLogGlobalForLineNumber = 304;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v45,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v31 + 16));
  if ( v108 == 2 )
  {
    v40[1] = 0LL;
    ExReleasePushLockExclusiveEx(v40, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v122);
  if ( v124 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventProfilerExit, v53, v122);
  v106 = v45;
  if ( (int)v45 < 0 )
    goto LABEL_219;
  v13 = v119;
  v15 = v117;
  v28 = a10;
LABEL_77:
  v54 = 0;
  v55 = v120;
  v56 = (__int64)v120;
  if ( !v15->NumAllocations )
  {
    v101 = v118;
LABEL_207:
    if ( v101 )
    {
      if ( (*(_DWORD *)&v15->Flags & 2) != 0 )
      {
        v103 = *(_QWORD *)(*((_QWORD *)v101 + 7) + 16LL);
        if ( v103 && v113 && v113 != v103 )
        {
          WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 3619;
        }
        *(_QWORD *)(*((_QWORD *)v101 + 7) + 16LL) = v113;
      }
      else
      {
        v104 = *((_QWORD *)v101 + 7);
        if ( v104 && v113 && v104 != v113 )
        {
          WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 3634;
        }
        *((_QWORD *)v101 + 7) = v113;
      }
    }
    goto LABEL_219;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)&v15->Flags & 0x100000) != 0 )
    {
      v57 = &a4[v54];
      if ( v57->PrivateDriverDataSize < 0x40 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3222;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid private driver data size for NoKmdAccess",
          3222LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_199;
      }
      if ( (v107[v54].Flags.Value & 1) != 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3228;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Primary cannot be used with NoKmdAccess",
          3228LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_199;
      }
      *(_DWORD *)(v56 + 72) |= 0x200000u;
      *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 0x10000000u;
      pPrivateDriverData = (unsigned int *)v57->pPrivateDriverData;
      v57->Alignment = *(_DWORD *)v57->pPrivateDriverData;
      v57->Size = pPrivateDriverData[2];
      v57->PitchAlignedSize = pPrivateDriverData[4];
      v57->HintedBank.Value = pPrivateDriverData[6];
      v57->PreferredSegment.Value = pPrivateDriverData[7];
      v57->SupportedReadSegmentSet = pPrivateDriverData[8];
      v57->SupportedWriteSegmentSet = pPrivateDriverData[9];
      v57->EvictionSegmentSet = pPrivateDriverData[10];
      v57->MaximumRenamingListLength = pPrivateDriverData[11];
      v57->Flags.Value = pPrivateDriverData[12];
      v57->AllocationPriority = pPrivateDriverData[13];
      *(&v57->AllocationPriority + 1) = pPrivateDriverData[14];
    }
    v59 = &a4[v54];
    *(_QWORD *)(*(_QWORD *)(v56 + 48) + 16LL) = v59->hAllocation;
    *(_QWORD *)(*(_QWORD *)(v56 + 48) + 24LL) = v59->pAllocationUsageHint;
    *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) = *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) & 0xFFFFF7FF | ((v59->Flags.Value & 0x30) != 0 ? 0x800 : 0);
    *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) ^= (*(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) ^ (v59->Flags.Value << 17)) & 0x80000;
    v59->Flags.Value &= 0x807FFFFu;
    Value = v59->Flags.Value;
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2736LL) < 12288 )
    {
      if ( (*(_DWORD *)&v15->Flags & 0x100000) == 0 )
        *(&v59->AllocationPriority + 1) = 0;
    }
    else if ( *(&v59->AllocationPriority + 1) >= 0x40 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3283;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Flags2.Reserved is not zero",
        3283LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_199:
      v106 = -1073741811;
      goto LABEL_219;
    }
    v61 = Value;
    v62 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    if ( (*(_DWORD *)(v62 + 2468) & 0x40) != 0 && *(_BYTE *)(v62 + 3037) )
    {
      v61 = Value | 0x8000;
      v59->Flags.Value = Value | 0x8000;
    }
    v63 = v61;
    if ( (v61 & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 3038LL) )
    {
      v63 = v61 | 0x10000;
      a4[v54].Flags.Value = v61 | 0x10000;
    }
    if ( v28 )
    {
      if ( (*(_DWORD *)v28 & 0x1000) != 0 )
        a4[v54].Flags.Value = v63 | 0x20000;
      v64 = *((_DWORD *)v28 + 96);
      if ( v64 )
      {
        a4[v54].SupportedWriteSegmentSet = v64;
        a4[v54].PreferredSegment.Value = *((_DWORD *)v28 + 97);
      }
      v65 = *((_DWORD *)v28 + 98);
      if ( v65 )
        a4[v54].Alignment = v65;
      if ( (*(_DWORD *)v28 & 0x2000) != 0 )
      {
        v66 = *((_QWORD *)v55 + 12 * v54 + 6);
        *(_DWORD *)(v66 + 4) |= 0x8000u;
      }
      v67 = *((_QWORD *)v28 + 50);
      if ( v67 )
        a4[v54].Size = v67;
      if ( (*(_DWORD *)v28 & 0x8000) != 0 )
        a4[v54].Flags.Value |= 0x8000u;
      if ( *((_DWORD *)v28 + 4) == 5 )
      {
        v68 = *((_QWORD *)v55 + 12 * v54 + 6);
        *(_DWORD *)(v68 + 4) |= 0x10000u;
        a4[v54].Flags.Value |= 0x8000u;
      }
    }
    Flags = v15->Flags;
    if ( (*(_DWORD *)&Flags & 0x10000) != 0 )
    {
      v70 = v54;
      v71 = v121->ExistingHeapData.Size;
      if ( a4[v70].Size != v71 )
      {
        WdLogSingleEntry3(2LL, a4[v70].Size, v71, -1073741811LL);
        WdLogGlobalForLineNumber = 3348;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Mismatch between Driver returned allocation size:0x%I64x and ExistingSysMem                     buffer size:0x"
           "I64x, returning 0x%I64x",
          a4[v70].Size,
          v121->ExistingHeapData.Size,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_199;
      }
      if ( (*(_DWORD *)&Flags & 0x20020) != 0 )
        goto LABEL_114;
    }
    if ( v28 && (*((_QWORD *)v28 + 42) || *((_QWORD *)v28 + 41)) )
LABEL_114:
      a4[v54].Flags.Value |= 1u;
    if ( *((_DWORD *)v13 + 116) != 2
      || (v72 = *((_QWORD *)v13 + 2), v73 = *(_QWORD *)(v72 + 16), *(int *)(v73 + 2736) < 0x2000)
      || *(_DWORD *)(v73 + 296) <= 1u )
    {
LABEL_123:
      v74 = v107;
      goto LABEL_124;
    }
    if ( *(_BYTE *)(v73 + 3022) )
    {
      if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v72) + 102) & 0x180) == 0 )
        goto LABEL_123;
      v72 = *((_QWORD *)v13 + 2);
    }
    v74 = v107;
    if ( (v107[v54].Flags.Value & 1) == 0 )
      a4[v54].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(v72 + 16) + 3148LL);
LABEL_124:
    v75 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    if ( *(int *)(v75 + 2736) >= 0x2000 || *(_BYTE *)(v75 + 3036) )
    {
      v76 = *(_QWORD *)(v56 + 48);
      v77 = v54;
      *(_DWORD *)(v56 + 72) ^= (*(_DWORD *)(v56 + 72) ^ (a4[v77].MaximumRenamingListLength << 12)) & 0x3F000;
      *(_DWORD *)(v76 + 4) ^= (*(_DWORD *)(v76 + 4) ^ (a4[v77].MaximumRenamingListLength << 21)) & 0x7E00000;
    }
    else
    {
      *(_DWORD *)(v56 + 72) &= 0xFFFC0FFF;
    }
    v78 = *((_QWORD *)v13 + 2);
    v79 = *(_QWORD *)(v78 + 16);
    if ( *(int *)(v79 + 2736) >= 0x2000 || *(_BYTE *)(v79 + 3036) )
    {
      v80 = v15->Flags;
      if ( (*(_DWORD *)&v80 & 0x80000) != 0 && (*(_WORD *)&v80 & 0x800) == 0 )
      {
        WdLogSingleEntry3(2LL, v13, v79, -1073741637LL);
        v102 = L"Device 0x%I64x: Driver tried to create non-cross adapter physically contiguous buffer, adapter 0x%I64x, r"
                "eturning 0x%I64x";
        WdLogGlobalForLineNumber = 3404;
        goto LABEL_202;
      }
    }
    v81 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)a4[v54].Flags.Value;
    if ( (*(_WORD *)&v81 & 0x200) != 0
      && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_STOPCAPTURE *))(v79 + 688) == ADAPTER_RENDER::DefaultDdiStopCapture )
    {
      WdLogSingleEntry3(2LL, v13, v79, -1073741637LL);
      v102 = L"Device 0x%I64x: Driver tried to create capture buffer but didn't supply StopCapture, adapter 0x%I64x, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3420;
      goto LABEL_202;
    }
    if ( (*(_WORD *)&v81 & 0x100) != 0 && !ADAPTER_RENDER::IsOverlayEnabled((DXGADAPTER **)v78) )
      break;
    v83 = *(_QWORD *)(v56 + 48);
    if ( !*(_QWORD *)(v83 + 16) && (*(_DWORD *)&v15->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry3(2LL, v13, v56, -1073741811LL);
      WdLogGlobalForLineNumber = 3446;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Driver did not return an allocation handle for 0x%I64x, returning 0x%I64x",
        (__int64)v13,
        v56,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_199;
    }
    v84 = v54;
    if ( (v74[v84].Flags.Value & 2) != 0 )
      *(_DWORD *)(v83 + 4) |= 0x1000u;
    if ( (v74[v84].Flags.Value & 1) != 0 && (a4[v54].Flags.Value & 0x100) == 0 )
    {
      v85 = v15->Flags;
      VidPnSourceId = v74[v84].VidPnSourceId;
      if ( (*(_BYTE *)&v85 & 2) == 0 )
      {
        v87 = v54;
        *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 1u;
        v88 = 0;
        if ( *((_DWORD *)v13 + 116) == 1 )
          v88 = 0x80000000;
        v89 = 0;
        v90 = v88 | a4[v54].Flags.Value & 0x7FFFFFFF;
        a4[v54].Flags.Value = v90;
        if ( !*((_DWORD *)v13 + 116) )
          v89 = 0x40000000;
        v91 = v90 & 0xBFFFFFFF | v89;
        goto LABEL_168;
      }
      v92 = *((_DWORD *)v13 + 116);
      if ( v92 == 2 )
      {
        *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 2u;
        v91 = a4[v54].Flags.Value | 0x40000000;
        v93 = v54;
      }
      else
      {
        if ( (*(_WORD *)&v85 & 0x800) != 0 )
        {
          if ( (*(_WORD *)&v85 & 0x400) != 0 )
          {
            if ( v92 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2939LL) )
              v94 = 0x2000;
            else
              v94 = 0;
            *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) = v94 | *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) & 0xFFFFDFFF;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 1u;
            a4[v54].Flags.Value |= 0x80000u;
          }
        }
        else if ( v92 == 1 )
        {
          if ( (*(_WORD *)&v85 & 0x400) != 0 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2939LL) )
              *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 0x2000u;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 1u;
          }
        }
        v95 = 0;
        v87 = v54;
        if ( *((_DWORD *)v13 + 116) == 1 )
          v95 = 0x80000000;
        v96 = a4[v54].Flags.Value & 0x7FFFFFFF | v95;
        v97 = 0;
        a4[v54].Flags.Value = v96;
        if ( !*((_DWORD *)v13 + 116) )
          v97 = 0x40000000;
        v91 = v96 & 0xBFFFFFFF | v97 | 0x20000000;
LABEL_168:
        v93 = v87;
      }
      a4[v93].Flags.Value = v91;
      if ( (*(_DWORD *)(*((_QWORD *)v13 + 5) + 408LL) & 0x100) == 0
        && *((_QWORD *)v13 + 237) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
      {
        *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 4u;
        v98 = v54;
        v99 = a4[v98].Flags.Value & 0x3DFFFFFF | 0x2000000;
        a4[v98].Flags.Value = v99;
        if ( (*(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) & 2) != 0 )
          a4[v54].Flags.Value = v99 | 0x20400000;
      }
      *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) ^= ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) ^ (unsigned __int16)((_WORD)VidPnSourceId << 6)) & 0x3C0;
      goto LABEL_186;
    }
    if ( (*(_DWORD *)&v15->Flags & 2) != 0 )
      a4[v54].Flags.Value |= 0x20000000u;
    if ( *((_DWORD *)v13 + 116) == 2
      && *((_QWORD *)v13 + 237) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL)
      && (*(_DWORD *)(*((_QWORD *)v13 + 5) + 408LL) & 0x100) == 0 )
    {
      if ( v28 )
      {
        if ( *((_QWORD *)v28 + 4) )
        {
          if ( *((_QWORD *)v28 + 5) )
          {
            if ( *((_DWORD *)v28 + 4) == 2 )
            {
              v100 = v15->Flags;
              if ( (*(_BYTE *)&v100 & 0x20) == 0 && (*(_BYTE *)&v100 & 2) != 0 )
              {
                *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 2u;
                *(_DWORD *)(*(_QWORD *)(v56 + 48) + 4LL) |= 4u;
                a4[v54].Flags.Value = a4[v54].Flags.Value & 0x3DBFFFFF | 0x2400000;
              }
            }
          }
        }
      }
    }
LABEL_186:
    v101 = v118;
    if ( v118 && (*((_DWORD *)v118 + 1) & 8) != 0 )
      a4[v54].Flags.Value |= 0x88000u;
    if ( (*(_DWORD *)&v15->Flags & 0x1800) != 0 )
      a4[v54].Flags.Value |= 0x20100000u;
    if ( (*(_DWORD *)&v15->Flags & 0x400) != 0 )
      a4[v54].Flags.Value |= 0x200000u;
    if ( (*(_DWORD *)&v15->Flags & 0x400000) != 0 )
      *(&a4[v54].AllocationPriority + 1) |= 2u;
    v56 = *(_QWORD *)(v56 + 64);
    if ( ++v54 >= v15->NumAllocations )
      goto LABEL_207;
    v55 = v120;
  }
  WdLogSingleEntry3(2LL, v13, v82, -1073741637LL);
  v102 = L"Device 0x%I64x: Driver tried to create overlay but didn't supply Overlay DDI, adapter 0x%I64x, returning 0x%I64x";
  WdLogGlobalForLineNumber = 3435;
LABEL_202:
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    v102,
    (__int64)v13,
    *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL),
    -1073741637LL,
    0LL,
    0LL);
  v106 = -1073741637;
LABEL_219:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v109);
  return v106;
}
