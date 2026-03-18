/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1403313C0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsOverlayEnabled@ADAPTER_RENDER@@QEBAEXZ @ 0x14006BA50 (-IsOverlayEnabled@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *PrivateDriverDataSize,
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
  struct _DXGK_ALLOCATIONINFO *v14; // rdi
  struct _D3DKMT_CREATEALLOCATION *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 NumAllocations; // rcx
  struct _D3DKMT_CREATEALLOCATION *v19; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v20; // rcx
  __int64 v21; // r8
  void *v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  UINT v25; // eax
  void *v26; // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v27; // r12
  UINT i; // edx
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v34; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v36; // rbx
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct _KTHREAD **v39; // rsi
  KIRQL CurrentIrql; // al
  __int64 v41; // r13
  struct DXGTHREAD *v42; // rbx
  int v43; // r12d
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  KIRQL v49; // al
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // ebx
  struct DXGALLOCATION *v54; // r10
  __int64 v55; // r15
  struct _DXGK_ALLOCATIONINFO *v56; // rdx
  unsigned int *pPrivateDriverData; // rcx
  struct _DXGK_ALLOCATIONINFO *v58; // r8
  int Value; // r9d
  int v60; // edx
  __int64 v61; // rcx
  int v62; // r8d
  UINT v63; // edx
  UINT v64; // edx
  __int64 v65; // rax
  SIZE_T v66; // rdx
  __int64 v67; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  __int64 v69; // rsi
  SIZE_T v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v73; // r9
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v79; // eax
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v80; // eax
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v84; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // r9d
  __int64 v86; // r8
  unsigned int v87; // eax
  int v88; // ecx
  int v89; // edx
  unsigned int v90; // ecx
  int v91; // ecx
  __int64 v92; // rax
  int v93; // edx
  unsigned int v94; // edx
  int v95; // edx
  int v96; // ecx
  __int64 v97; // rax
  int v98; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v99; // eax
  struct DXGRESOURCE *v100; // rsi
  const wchar_t *v101; // r9
  __int64 v102; // rcx
  __int64 v103; // rcx
  unsigned int v105; // [rsp+50h] [rbp-B0h]
  struct _D3DDDI_ALLOCATIONINFO2 *v106; // [rsp+58h] [rbp-A8h]
  int v107; // [rsp+60h] [rbp-A0h]
  void *v108; // [rsp+68h] [rbp-98h] BYREF
  UINT Size; // [rsp+70h] [rbp-90h]
  int Size_4; // [rsp+74h] [rbp-8Ch]
  struct _DXGK_ALLOCATIONINFO *v111; // [rsp+78h] [rbp-88h]
  __int64 v112; // [rsp+80h] [rbp-80h]
  int v113; // [rsp+88h] [rbp-78h]
  int v114; // [rsp+8Ch] [rbp-74h]
  struct DXGTHREAD *DxgThread; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_CREATEALLOCATION *v116; // [rsp+98h] [rbp-68h]
  struct DXGRESOURCE *v117; // [rsp+A0h] [rbp-60h]
  DXGDEVICE *v118; // [rsp+A8h] [rbp-58h]
  struct DXGALLOCATION *v119; // [rsp+B0h] [rbp-50h]
  struct _D3DKMT_CREATESTANDARDALLOCATION *v120; // [rsp+B8h] [rbp-48h]
  int v121; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-38h]
  char v123; // [rsp+D0h] [rbp-30h]
  char v124[8]; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF

  v12 = 0;
  v13 = this;
  v14 = PrivateDriverDataSize;
  v119 = a5;
  v15 = a2;
  v117 = a6;
  v114 = 0;
  v120 = a12;
  v16 = *((_QWORD *)this + 2);
  v118 = this;
  v106 = a3;
  v116 = a2;
  v17 = *(_QWORD *)(v16 + 16);
  v105 = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3059;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetRenderCore()->IsCoreResourceSharedOwner()",
        3059LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    a3 = v106;
  }
  NumAllocations = v15->NumAllocations;
  if ( (_DWORD)NumAllocations )
  {
    v19 = v116;
    do
    {
      v20 = &a3[v12];
      if ( v20->pPrivateDriverData )
      {
        PrivateDriverDataSize = (struct _DXGK_ALLOCATIONINFO *)v20->PrivateDriverDataSize;
        v21 = v12;
        v14[v21].PrivateDriverDataSize = (unsigned int)PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&v19->Flags & 0x10000) != 0 )
        {
          v14[v21].pPrivateDriverData = v20->pPrivateDriverData;
        }
        else
        {
          v22 = a7[v12];
          v14[v21].pPrivateDriverData = v22;
          memmove(v22, a8[v12], (unsigned int)PrivateDriverDataSize);
        }
        a3 = v106;
      }
      NumAllocations = v19->NumAllocations;
      ++v12;
    }
    while ( v12 < (unsigned int)NumAllocations );
    v13 = v118;
    v15 = v116;
  }
  v113 = 0;
  if ( v117 )
  {
    v23 = *((_QWORD *)v117 + 7);
    v24 = *((_DWORD *)v117 + 1);
    v113 = 1;
    if ( (v24 & 1) != 0 )
      v112 = *(_QWORD *)(v23 + 16);
    else
      v112 = v23;
  }
  else
  {
    v112 = 0LL;
  }
  v25 = v15->PrivateDriverDataSize;
  Size_4 = NumAllocations;
  v111 = v14;
  if ( v25 && v15->pStandardAllocation )
  {
    Size = v25;
    v26 = (void *)operator new[](v25, 0x4B677844u, 258LL, (__int64)PrivateDriverDataSize);
    v108 = v26;
    if ( !v26 )
    {
      v105 = -1073741801;
      WdLogSingleEntry3(3LL, v13, Size, -1073741801LL);
      WdLogGlobalForLineNumber = 3130;
      goto LABEL_219;
    }
    if ( a11 )
      memmove(v26, Src, Size);
    else
      memmove(v26, v15->pStandardAllocation, Size);
  }
  else
  {
    Size = 0;
    v108 = 0LL;
  }
  v27 = a10;
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v13 + 2) + 16LL)) )
    {
      for ( i = 0; i < v15->NumAllocations; v111[v29].Flags.Value |= 0x400u )
      {
        v29 = i++;
        NumAllocations = 88 * v29;
      }
    }
  }
  if ( (*(_DWORD *)&v15->Flags & 0x100000) != 0 )
    goto LABEL_77;
  v30 = *((_QWORD *)v13 + 2);
  v121 = -1;
  v122 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v123 = 1;
    v121 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(NumAllocations, (__int64)&EventProfilerEnter, (__int64)a3, 5002);
  }
  else
  {
    v123 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v121, 5002);
  CurrentProcess = PsGetCurrentProcess(v31);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v34 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_45;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v36 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v36 )
      goto LABEL_46;
    goto LABEL_45;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v36 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v36 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2925;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_45:
    v36 = v34;
  }
LABEL_46:
  v107 = 0;
  v39 = (struct _KTHREAD **)((char *)v36 + 152);
  if ( !v36 )
    v39 = 0LL;
  if ( v39 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( v39[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( v36 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v39);
    v107 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v30 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v30 + 16) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v41 = CurrentIrql;
  v42 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v42 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v42 = DxgThread) != 0LL)) )
  {
    v43 = *((_DWORD *)v42 + 12);
  }
  else
  {
    v43 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v124,
    *(struct DXGADAPTER **)(v30 + 16));
  v44 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v30 + 16) + 472LL))(
          *(_QWORD *)(*(_QWORD *)(v30 + 16) + 288LL),
          &v108);
  if ( v124[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v41 != KeGetCurrentIrql() )
  {
    v49 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, v30, v41, v49);
    WdLogGlobalForLineNumber = 295;
  }
  if ( v42 )
  {
    v46 = *((int *)v42 + 12);
    if ( (_DWORD)v46 != v43 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v42 + 12), v43, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v30 + 16) + 4804LL));
  v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
  v50[3] = v44;
  v50[4] = v112;
  v50[5] = v111->hAllocation;
  v50[6] = v111->Flags.Value;
  v50[7] = v111->PreferredSegment.Value;
  WdLogGlobalForLineNumber = 302;
  if ( (_DWORD)v44 && (_DWORD)v44 != -1073741811 && (_DWORD)v44 != -1073741801 )
  {
    WdLogSingleEntry1(2LL, v44);
    WdLogGlobalForLineNumber = 304;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v44,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v30 + 16));
  if ( v107 == 2 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v39[1] = 0LL;
    ExReleasePushLockExclusiveEx(v39, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121);
  if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit, v52, v121);
  v105 = v44;
  if ( (int)v44 < 0 )
    goto LABEL_219;
  v13 = v118;
  v15 = v116;
  v27 = a10;
LABEL_77:
  v53 = 0;
  v54 = v119;
  v55 = (__int64)v119;
  if ( !v15->NumAllocations )
  {
    v100 = v117;
LABEL_207:
    if ( v100 )
    {
      if ( (*(_DWORD *)&v15->Flags & 2) != 0 )
      {
        v102 = *(_QWORD *)(*((_QWORD *)v100 + 7) + 16LL);
        if ( v102 && v112 && v112 != v102 )
        {
          WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 3584;
        }
        *(_QWORD *)(*((_QWORD *)v100 + 7) + 16LL) = v112;
      }
      else
      {
        v103 = *((_QWORD *)v100 + 7);
        if ( v103 && v112 && v103 != v112 )
        {
          WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 3599;
        }
        *((_QWORD *)v100 + 7) = v112;
      }
    }
    goto LABEL_219;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)&v15->Flags & 0x100000) != 0 )
    {
      v56 = &v14[v53];
      if ( v56->PrivateDriverDataSize < 0x40 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3187;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid private driver data size for NoKmdAccess",
          3187LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_199;
      }
      if ( (v106[v53].Flags.Value & 1) != 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 3193;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Primary cannot be used with NoKmdAccess",
          3193LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_199;
      }
      *(_DWORD *)(v55 + 72) |= 0x200000u;
      *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 0x10000000u;
      pPrivateDriverData = (unsigned int *)v56->pPrivateDriverData;
      v56->Alignment = *(_DWORD *)v56->pPrivateDriverData;
      v56->Size = pPrivateDriverData[2];
      v56->PitchAlignedSize = pPrivateDriverData[4];
      v56->HintedBank.Value = pPrivateDriverData[6];
      v56->PreferredSegment.Value = pPrivateDriverData[7];
      v56->SupportedReadSegmentSet = pPrivateDriverData[8];
      v56->SupportedWriteSegmentSet = pPrivateDriverData[9];
      v56->EvictionSegmentSet = pPrivateDriverData[10];
      v56->MaximumRenamingListLength = pPrivateDriverData[11];
      v56->Flags.Value = pPrivateDriverData[12];
      v56->AllocationPriority = pPrivateDriverData[13];
      *(&v56->AllocationPriority + 1) = pPrivateDriverData[14];
    }
    v58 = &v14[v53];
    *(_QWORD *)(*(_QWORD *)(v55 + 48) + 16LL) = v58->hAllocation;
    *(_QWORD *)(*(_QWORD *)(v55 + 48) + 24LL) = v58->pAllocationUsageHint;
    *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) = *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) & 0xFFFFF7FF | ((v58->Flags.Value & 0x30) != 0 ? 0x800 : 0);
    *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) ^= (*(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) ^ (v58->Flags.Value << 17)) & 0x80000;
    v58->Flags.Value &= 0x807FFFFu;
    Value = v58->Flags.Value;
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2736LL) < 12288 )
    {
      if ( (*(_DWORD *)&v15->Flags & 0x100000) == 0 )
        *(&v58->AllocationPriority + 1) = 0;
    }
    else if ( *(&v58->AllocationPriority + 1) >= 0x40 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3248;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Flags2.Reserved is not zero", 3248LL, 0LL, 0LL, 0LL, 0LL);
LABEL_199:
      v105 = -1073741811;
      goto LABEL_219;
    }
    v60 = Value;
    v61 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    if ( (*(_DWORD *)(v61 + 2468) & 0x40) != 0 && *(_BYTE *)(v61 + 3037) )
    {
      v60 = Value | 0x8000;
      v58->Flags.Value = Value | 0x8000;
    }
    v62 = v60;
    if ( (v60 & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 3038LL) )
    {
      v62 = v60 | 0x10000;
      v14[v53].Flags.Value = v60 | 0x10000;
    }
    if ( v27 )
    {
      if ( (*(_DWORD *)v27 & 0x1000) != 0 )
        v14[v53].Flags.Value = v62 | 0x20000;
      v63 = *((_DWORD *)v27 + 96);
      if ( v63 )
      {
        v14[v53].SupportedWriteSegmentSet = v63;
        v14[v53].PreferredSegment.Value = *((_DWORD *)v27 + 97);
      }
      v64 = *((_DWORD *)v27 + 98);
      if ( v64 )
        v14[v53].Alignment = v64;
      if ( (*(_DWORD *)v27 & 0x2000) != 0 )
      {
        v65 = *((_QWORD *)v54 + 12 * v53 + 6);
        *(_DWORD *)(v65 + 4) |= 0x8000u;
      }
      v66 = *((_QWORD *)v27 + 50);
      if ( v66 )
        v14[v53].Size = v66;
      if ( (*(_DWORD *)v27 & 0x8000) != 0 )
        v14[v53].Flags.Value |= 0x8000u;
      if ( *((_DWORD *)v27 + 4) == 5 )
      {
        v67 = *((_QWORD *)v54 + 12 * v53 + 6);
        *(_DWORD *)(v67 + 4) |= 0x10000u;
        v14[v53].Flags.Value |= 0x8000u;
      }
    }
    Flags = v15->Flags;
    if ( (*(_DWORD *)&Flags & 0x10000) != 0 )
    {
      v69 = v53;
      v70 = v120->ExistingHeapData.Size;
      if ( v14[v69].Size != v70 )
      {
        WdLogSingleEntry3(2LL, v14[v69].Size, v70, -1073741811LL);
        WdLogGlobalForLineNumber = 3313;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Mismatch between Driver returned allocation size:0x%I64x and ExistingSysMem                     buffer size:0x"
           "I64x, returning 0x%I64x",
          v14[v69].Size,
          v120->ExistingHeapData.Size,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_199;
      }
      if ( (*(_DWORD *)&Flags & 0x20020) != 0 )
        goto LABEL_114;
    }
    if ( v27 && (*((_QWORD *)v27 + 42) || *((_QWORD *)v27 + 41)) )
LABEL_114:
      v14[v53].Flags.Value |= 1u;
    if ( *((_DWORD *)v13 + 116) != 2
      || (v71 = *((_QWORD *)v13 + 2), v72 = *(_QWORD *)(v71 + 16), *(int *)(v72 + 2736) < 0x2000)
      || *(_DWORD *)(v72 + 296) <= 1u )
    {
LABEL_123:
      v73 = v106;
      goto LABEL_124;
    }
    if ( *(_BYTE *)(v72 + 3022) )
    {
      if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v71) + 102) & 0x180) == 0 )
        goto LABEL_123;
      v71 = *((_QWORD *)v13 + 2);
    }
    v73 = v106;
    if ( (v106[v53].Flags.Value & 1) == 0 )
      v14[v53].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(v71 + 16) + 3148LL);
LABEL_124:
    v74 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    if ( *(int *)(v74 + 2736) >= 0x2000 || *(_BYTE *)(v74 + 3036) )
    {
      v75 = *(_QWORD *)(v55 + 48);
      v76 = v53;
      *(_DWORD *)(v55 + 72) ^= (*(_DWORD *)(v55 + 72) ^ (v14[v76].MaximumRenamingListLength << 12)) & 0x3F000;
      *(_DWORD *)(v75 + 4) ^= (*(_DWORD *)(v75 + 4) ^ (v14[v76].MaximumRenamingListLength << 21)) & 0x7E00000;
    }
    else
    {
      *(_DWORD *)(v55 + 72) &= 0xFFFC0FFF;
    }
    v77 = *((_QWORD *)v13 + 2);
    v78 = *(_QWORD *)(v77 + 16);
    if ( *(int *)(v78 + 2736) >= 0x2000 || *(_BYTE *)(v78 + 3036) )
    {
      v79 = v15->Flags;
      if ( (*(_DWORD *)&v79 & 0x80000) != 0 && (*(_WORD *)&v79 & 0x800) == 0 )
      {
        WdLogSingleEntry3(2LL, v13, v78, -1073741637LL);
        v101 = L"Device 0x%I64x: Driver tried to create non-cross adapter physically contiguous buffer, adapter 0x%I64x, r"
                "eturning 0x%I64x";
        WdLogGlobalForLineNumber = 3369;
        goto LABEL_202;
      }
    }
    v80 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v14[v53].Flags.Value;
    if ( (*(_WORD *)&v80 & 0x200) != 0
      && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_STOPCAPTURE *))(v78 + 688) == ADAPTER_RENDER::DefaultDdiStopCapture )
    {
      WdLogSingleEntry3(2LL, v13, v78, -1073741637LL);
      v101 = L"Device 0x%I64x: Driver tried to create capture buffer but didn't supply StopCapture, adapter 0x%I64x, returning 0x%I64x";
      WdLogGlobalForLineNumber = 3385;
      goto LABEL_202;
    }
    if ( (*(_WORD *)&v80 & 0x100) != 0 && !ADAPTER_RENDER::IsOverlayEnabled((DXGADAPTER **)v77) )
      break;
    v82 = *(_QWORD *)(v55 + 48);
    if ( !*(_QWORD *)(v82 + 16) && (*(_DWORD *)&v15->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry3(2LL, v13, v55, -1073741811LL);
      WdLogGlobalForLineNumber = 3411;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Driver did not return an allocation handle for 0x%I64x, returning 0x%I64x",
        (__int64)v13,
        v55,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_199;
    }
    v83 = v53;
    if ( (v73[v83].Flags.Value & 2) != 0 )
      *(_DWORD *)(v82 + 4) |= 0x1000u;
    if ( (v73[v83].Flags.Value & 1) != 0 && (v14[v53].Flags.Value & 0x100) == 0 )
    {
      v84 = v15->Flags;
      VidPnSourceId = v73[v83].VidPnSourceId;
      if ( (*(_BYTE *)&v84 & 2) == 0 )
      {
        v86 = v53;
        *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 1u;
        v87 = 0;
        if ( *((_DWORD *)v13 + 116) == 1 )
          v87 = 0x80000000;
        v88 = 0;
        v89 = v87 | v14[v53].Flags.Value & 0x7FFFFFFF;
        v14[v53].Flags.Value = v89;
        if ( !*((_DWORD *)v13 + 116) )
          v88 = 0x40000000;
        v90 = v89 & 0xBFFFFFFF | v88;
        goto LABEL_168;
      }
      v91 = *((_DWORD *)v13 + 116);
      if ( v91 == 2 )
      {
        *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 2u;
        v90 = v14[v53].Flags.Value | 0x40000000;
        v92 = v53;
      }
      else
      {
        if ( (*(_WORD *)&v84 & 0x800) != 0 )
        {
          if ( (*(_WORD *)&v84 & 0x400) != 0 )
          {
            if ( v91 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2939LL) )
              v93 = 0x2000;
            else
              v93 = 0;
            *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) = v93 | *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) & 0xFFFFDFFF;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 1u;
            v14[v53].Flags.Value |= 0x80000u;
          }
        }
        else if ( v91 == 1 )
        {
          if ( (*(_WORD *)&v84 & 0x400) != 0 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 2939LL) )
              *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 0x2000u;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 1u;
          }
        }
        v94 = 0;
        v86 = v53;
        if ( *((_DWORD *)v13 + 116) == 1 )
          v94 = 0x80000000;
        v95 = v14[v53].Flags.Value & 0x7FFFFFFF | v94;
        v96 = 0;
        v14[v53].Flags.Value = v95;
        if ( !*((_DWORD *)v13 + 116) )
          v96 = 0x40000000;
        v90 = v95 & 0xBFFFFFFF | v96 | 0x20000000;
LABEL_168:
        v92 = v86;
      }
      v14[v92].Flags.Value = v90;
      if ( (*(_DWORD *)(*((_QWORD *)v13 + 5) + 408LL) & 0x100) == 0
        && *((_QWORD *)v13 + 235) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
      {
        *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 4u;
        v97 = v53;
        v98 = v14[v97].Flags.Value & 0x3DFFFFFF | 0x2000000;
        v14[v97].Flags.Value = v98;
        if ( (*(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) & 2) != 0 )
          v14[v53].Flags.Value = v98 | 0x20400000;
      }
      *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) ^= ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) ^ (unsigned __int16)((_WORD)VidPnSourceId << 6)) & 0x3C0;
      goto LABEL_186;
    }
    if ( (*(_DWORD *)&v15->Flags & 2) != 0 )
      v14[v53].Flags.Value |= 0x20000000u;
    if ( *((_DWORD *)v13 + 116) == 2
      && *((_QWORD *)v13 + 235) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL)
      && (*(_DWORD *)(*((_QWORD *)v13 + 5) + 408LL) & 0x100) == 0 )
    {
      if ( v27 )
      {
        if ( *((_QWORD *)v27 + 4) )
        {
          if ( *((_QWORD *)v27 + 5) )
          {
            if ( *((_DWORD *)v27 + 4) == 2 )
            {
              v99 = v15->Flags;
              if ( (*(_BYTE *)&v99 & 0x20) == 0 && (*(_BYTE *)&v99 & 2) != 0 )
              {
                *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 2u;
                *(_DWORD *)(*(_QWORD *)(v55 + 48) + 4LL) |= 4u;
                v14[v53].Flags.Value = v14[v53].Flags.Value & 0x3DBFFFFF | 0x2400000;
              }
            }
          }
        }
      }
    }
LABEL_186:
    v100 = v117;
    if ( v117 && (*((_DWORD *)v117 + 1) & 8) != 0 )
      v14[v53].Flags.Value |= 0x88000u;
    if ( (*(_DWORD *)&v15->Flags & 0x1800) != 0 )
      v14[v53].Flags.Value |= 0x20100000u;
    if ( (*(_DWORD *)&v15->Flags & 0x400) != 0 )
      v14[v53].Flags.Value |= 0x200000u;
    if ( (*(_DWORD *)&v15->Flags & 0x400000) != 0 )
      *(&v14[v53].AllocationPriority + 1) |= 2u;
    v55 = *(_QWORD *)(v55 + 64);
    if ( ++v53 >= v15->NumAllocations )
      goto LABEL_207;
    v54 = v119;
  }
  WdLogSingleEntry3(2LL, v13, v81, -1073741637LL);
  v101 = L"Device 0x%I64x: Driver tried to create overlay but didn't supply Overlay DDI, adapter 0x%I64x, returning 0x%I64x";
  WdLogGlobalForLineNumber = 3400;
LABEL_202:
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    v101,
    (__int64)v13,
    *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL),
    -1073741637LL,
    0LL,
    0LL);
  v105 = -1073741637;
LABEL_219:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v108);
  return v105;
}
