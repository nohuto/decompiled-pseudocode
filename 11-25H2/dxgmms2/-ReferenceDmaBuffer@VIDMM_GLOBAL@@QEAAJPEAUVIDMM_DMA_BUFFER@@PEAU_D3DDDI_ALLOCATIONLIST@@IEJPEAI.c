/*
 * XREFs of ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x140112C20
 * Callers:
 *     VidMmReferenceDmaBuffer @ 0x14003ADB0 (VidMmReferenceDmaBuffer.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038E04 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 *     McTemplateK0ppqPR2TR2_EtwWriteTransfer @ 0x14003BB7C (McTemplateK0ppqPR2TR2_EtwWriteTransfer.c)
 *     RemoveDMAReferences @ 0x14003BE2C (RemoveDMAReferences.c)
 *     AddDMAReferences @ 0x14003C300 (AddDMAReferences.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BFF5C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmiAddProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C28FC (-VidMmiAddProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C2F6C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400C33E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_.c)
 *     ?GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400F8FD4 (-GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIPEAT_L.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400FE430 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceDmaBuffer(
        VIDMM_GLOBAL *this,
        union _LARGE_INTEGER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        union _LARGE_INTEGER *a9,
        struct VIDMM_ALLOC **a10,
        struct VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int *v15; // r8
  unsigned int v16; // edx
  unsigned int v17; // eax
  union _LARGE_INTEGER v18; // rax
  unsigned int v19; // ebx
  struct VIDMM_ALLOC *v20; // r10
  unsigned int v21; // esi
  __int64 *v22; // r14
  union _LARGE_INTEGER *v23; // r12
  struct _D3DDDI_ALLOCATIONLIST *v24; // r13
  struct DXGALLOCATION *v25; // rbx
  struct VIDMM_ALLOC *v26; // rbx
  __int64 v27; // rdx
  _DWORD *v28; // rax
  __int64 v29; // rcx
  struct VIDMM_SEGMENT *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // ebx
  unsigned __int64 *v33; // r13
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int Value; // r8d
  union _LARGE_INTEGER *v38; // rsi
  VIDMM_PHYSICAL_ADAPTER *v39; // rcx
  DWORD LowPart; // eax
  struct VIDMM_GLOBAL_ALLOC *v41; // r14
  struct VIDMM_PRIMARIES_REFERENCES *v42; // rsi
  unsigned int v43; // ecx
  int v44; // eax
  unsigned __int64 *v45; // rsi
  struct VIDMM_PHYSICAL_ALLOC *v46; // r13
  unsigned __int64 *v47; // rsi
  __int64 v48; // rcx
  unsigned int v49; // eax
  struct VIDMM_ALLOC *v50; // rbx
  __int64 v51; // rcx
  union _LARGE_INTEGER v52; // rdx
  __int64 AllocGpuVirtualAddress; // rax
  int v54; // esi
  __int64 v55; // rcx
  union _LARGE_INTEGER v56; // rax
  unsigned int *v57; // r9
  LONGLONG *v58; // r10
  _DWORD **v59; // rdx
  __int64 v60; // r8
  unsigned __int16 v61; // ax
  signed int v62; // r12d
  unsigned int v63; // esi
  __int64 v64; // rax
  union _LARGE_INTEGER v65; // rdi
  union _LARGE_INTEGER v66; // r14
  __int64 v67; // r12
  unsigned int v68; // r9d
  __int64 v69; // rdx
  signed __int32 v71[8]; // [rsp+0h] [rbp-388h] BYREF
  unsigned __int64 *v72; // [rsp+20h] [rbp-368h]
  struct VIDMM_ALLOC *v73; // [rsp+28h] [rbp-360h]
  struct VIDMM_SEGMENT *v74; // [rsp+30h] [rbp-358h]
  unsigned __int8 v75[8]; // [rsp+38h] [rbp-350h]
  unsigned int v76; // [rsp+50h] [rbp-338h]
  char v77; // [rsp+54h] [rbp-334h]
  int v78; // [rsp+58h] [rbp-330h]
  unsigned __int64 *p_QuadPart; // [rsp+60h] [rbp-328h]
  union _LARGE_INTEGER *v80; // [rsp+68h] [rbp-320h]
  unsigned int v81; // [rsp+70h] [rbp-318h]
  struct VIDMM_ALLOC *v82; // [rsp+78h] [rbp-310h]
  struct VIDMM_PHYSICAL_ALLOC *v83; // [rsp+80h] [rbp-308h]
  __int64 *QuadPart; // [rsp+88h] [rbp-300h]
  unsigned int v85; // [rsp+90h] [rbp-2F8h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v86; // [rsp+98h] [rbp-2F0h]
  struct VIDMM_PRIMARIES_REFERENCES *v87; // [rsp+A0h] [rbp-2E8h]
  union _LARGE_INTEGER v88; // [rsp+A8h] [rbp-2E0h] BYREF
  struct VIDMM_ALLOC *v89; // [rsp+B0h] [rbp-2D8h]
  struct VIDMM_GLOBAL_ALLOC *v90; // [rsp+B8h] [rbp-2D0h]
  struct VIDMM_GLOBAL_ALLOC *v91; // [rsp+C0h] [rbp-2C8h]
  union _LARGE_INTEGER *v92; // [rsp+C8h] [rbp-2C0h]
  struct DXGALLOCATION **v93; // [rsp+D0h] [rbp-2B8h]
  __int64 v94; // [rsp+D8h] [rbp-2B0h]
  struct DXGPROCESS *Current; // [rsp+E0h] [rbp-2A8h]
  struct VIDMM_ALLOC **v96; // [rsp+E8h] [rbp-2A0h]
  unsigned int *v97; // [rsp+F0h] [rbp-298h]
  unsigned __int64 *v98; // [rsp+F8h] [rbp-290h]
  char *v99; // [rsp+100h] [rbp-288h]
  PRKPROCESS *v100; // [rsp+108h] [rbp-280h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-278h] BYREF
  _BYTE v102[512]; // [rsp+140h] [rbp-248h] BYREF

  v81 = a4;
  v86 = a3;
  v97 = a7;
  v92 = a8;
  p_QuadPart = (unsigned __int64 *)&a9->QuadPart;
  v98 = (unsigned __int64 *)&a9->QuadPart;
  v96 = a10;
  v87 = a11;
  v93 = a12;
  v76 = 0;
  QuadPart = (__int64 *)a2[12].QuadPart;
  v80 = (union _LARGE_INTEGER *)a2[13].QuadPart;
  Current = DXGPROCESS::GetCurrent();
  v94 = *(_QWORD *)(a2[16].QuadPart + 8);
  if ( a9 )
    *a9 = a2[11];
  *a10 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  v16 = v81;
  if ( IsEnabledDeviceUsageNoInline )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1780);
    _InterlockedAdd((volatile signed __int32 *)this + 1781, v81);
    if ( v81 > *((_DWORD *)this + 1782) )
      _InterlockedExchange((volatile __int32 *)this + 1782, v81);
  }
  else
  {
    ++*((_DWORD *)this + 1780);
    *((_DWORD *)this + 1781) += v16;
    v17 = *((_DWORD *)this + 1782);
    if ( v16 > v17 )
      v17 = v16;
    *((_DWORD *)this + 1782) = v17;
  }
  a2[3].HighPart |= 4u;
  v18 = *(union _LARGE_INTEGER *)(*(_QWORD *)a2[16].QuadPart + 40LL);
  _InterlockedOr(v71, 0);
  a2[18] = v18;
  *(_DWORD *)a11 = 0;
  v19 = 0;
  v90 = 0LL;
  v20 = 0LL;
  v89 = 0LL;
  v21 = 0;
  v76 = 0;
  v22 = QuadPart;
  v23 = v80;
  v24 = v86;
  while ( v21 < v16 )
  {
    if ( v24->hAllocation )
    {
      v25 = v93[v21];
      if ( !v25 )
      {
        WdLogSingleEntry2(2LL, v24->hAllocation, v21);
        WdLogGlobalForLineNumber = 8146;
        v32 = -1071775468;
        v78 = -1071775468;
        v33 = p_QuadPart;
LABEL_141:
        if ( !v33 && v21 )
        {
          do
          {
            if ( *--v22 )
              RemoveDMAReferences(*v22, a6);
            --v21;
          }
          while ( v21 );
        }
        return v32;
      }
      v26 = (struct VIDMM_ALLOC *)*((_QWORD *)v25 + 3);
      v82 = v26;
      v27 = **(_QWORD **)v26;
      v91 = (struct VIDMM_GLOBAL_ALLOC *)v27;
      v83 = *(struct VIDMM_PHYSICAL_ALLOC **)v27;
      v28 = *(_DWORD **)(v27 + 376);
      v29 = *v28 >> 14;
      if ( (*v28 & 0x4000) != 0 )
      {
        if ( v20 || (v24->Value & 1) == 0 )
        {
          WdLogSingleEntry3(1LL, v26, v20, v24->Value & 1);
          WdLogGlobalForLineNumber = 8189;
          v30 = (struct VIDMM_SEGMENT *)(v24->Value & 1);
          *(_QWORD *)v75 = 0LL;
          v74 = v30;
          v73 = v89;
          v72 = (unsigned __int64 *)v26;
          DxgkLogInternalTriageEvent(v31, 0x40000LL);
          v32 = -1071775482;
          v78 = -1071775482;
          v33 = p_QuadPart;
          goto LABEL_141;
        }
        v89 = v26;
      }
      if ( *(_BYTE *)(v27 + 41) )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v29);
          WdLogGlobalForLineNumber = 8204;
          v35 = WdLogNewEntry5_WdTrace(v34);
          *(_QWORD *)(v35 + 24) = a2;
          *(_QWORD *)(v35 + 32) = v26;
          WdLogGlobalForLineNumber = 8205;
        }
        v32 = -1071775482;
        v78 = -1071775482;
        v33 = p_QuadPart;
        goto LABEL_141;
      }
      if ( *((_QWORD *)v26 + 1) != v94 && (*((_DWORD *)Current + 102) & 0x100) == 0 )
      {
        v72 = (unsigned __int64 *)*((_QWORD *)v26 + 1);
        WdLogSingleEntry4(2LL, v94, v26);
        WdLogGlobalForLineNumber = 8216;
        v32 = -1071775467;
        v78 = -1071775467;
        v33 = p_QuadPart;
        goto LABEL_141;
      }
      if ( *(_WORD *)(*((_QWORD *)v26 + 12) + 8LL) && a5 )
      {
        if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
        {
          WdLogSingleEntry2(1LL, a2, v26);
          WdLogGlobalForLineNumber = 8231;
          *(_QWORD *)v75 = 0LL;
          v74 = 0LL;
          v73 = v26;
          v72 = (unsigned __int64 *)&a2->QuadPart;
          DxgkLogInternalTriageEvent(v36, 0x40000LL);
          v32 = -1071775466;
          v78 = -1071775466;
          v33 = p_QuadPart;
          goto LABEL_141;
        }
        WdLogSingleEntry2(2LL, a2, v26);
        WdLogGlobalForLineNumber = 8237;
      }
      *v22 = (__int64)v26;
      *v23 = *(union _LARGE_INTEGER *)(*((_QWORD *)v26 + 2) + 32LL);
      Value = v24->Value;
      if ( (Value & 1) != 0 && *((_BYTE *)v26 + 24) && *(int *)(*((_QWORD *)this + 3) + 2736LL) >= 4608 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 8256;
        WdLogSingleEntry2(3LL, a2, v26);
        WdLogGlobalForLineNumber = 8257;
        v32 = -1073741790;
        v78 = -1073741790;
        v33 = p_QuadPart;
        goto LABEL_141;
      }
      v38 = v23 + 1;
      v39 = (VIDMM_PHYSICAL_ADAPTER *)(v23[1].LowPart ^ ((unsigned __int8)Value ^ (unsigned __int8)v23[1].LowPart) & 1);
      v23[1].LowPart = (unsigned int)v39;
      if ( (v24->Value & 1) != 0 )
      {
        if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
        {
          _InterlockedIncrement((volatile signed __int32 *)this + 1784);
          v26 = v82;
          v23 = v80;
        }
        else
        {
          ++*((_DWORD *)this + 1784);
        }
      }
      LowPart = v38->LowPart;
      v41 = v91;
      v42 = v87;
      if ( (LowPart & 1) != 0 && (**((_DWORD **)v91 + 47) & 0x200000) != 0 )
        *((_DWORD *)v87 + 34) |= 1u;
      if ( (v23[1].LowPart & 1) != 0 )
      {
        v43 = **((_DWORD **)v41 + 47);
        v44 = ((unsigned __int16)v43 | (unsigned __int16)((v43 | (v43 >> 11)) >> 11)) & 0x100;
        v39 = (VIDMM_PHYSICAL_ADAPTER *)(v43 >> 23);
        if ( ((unsigned int)v39 | v44) >= 0x100 )
        {
          if ( *(_DWORD *)v42 >= 0x10u )
          {
            if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
            {
              _InterlockedIncrement((volatile signed __int32 *)this + 1790);
              v26 = v82;
              v23 = v80;
            }
            else
            {
              ++*((_DWORD *)this + 1790);
            }
          }
          else
          {
            v99 = (char *)v26 + 104;
            _InterlockedIncrement((volatile signed __int32 *)v26 + 26);
            v26 = v82;
            *((_QWORD *)v42 + *(unsigned int *)v42 + 1) = v82;
            v23 = v80;
          }
          ++*(_DWORD *)v42;
        }
      }
      LOBYTE(v39) = 0;
      v77 = 0;
      v88.QuadPart = 0LL;
      v85 = 0;
      v45 = p_QuadPart;
      v46 = v83;
      if ( !p_QuadPart && (*((_DWORD *)this + 1746) & 0x40) == 0 )
      {
        LOBYTE(v39) = VIDMM_PHYSICAL_ADAPTER::GetAllocationPhysicalAddress(v39, v83, &v85, &v88, 0LL);
        v77 = (char)v39;
      }
      if ( (_BYTE)v39 )
      {
        if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
        {
          _InterlockedIncrement((volatile signed __int32 *)this + 1787);
          v26 = v82;
          v23 = v80;
        }
        else
        {
          ++*((_DWORD *)this + 1787);
        }
        v23[2] = v88;
        v23[1].LowPart = v23[1].LowPart & 0xFFFFFFC1 | (2 * (v85 & 0x1F));
      }
      else
      {
        if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
        {
          _InterlockedIncrement((volatile signed __int32 *)this + 1788);
          v26 = v82;
          v23 = v80;
        }
        else
        {
          ++*((_DWORD *)this + 1788);
        }
        v23[1].LowPart &= 0xFFFFFFC1;
        if ( v45 )
        {
          v52 = a2[16];
          if ( (*(_DWORD *)(v52.QuadPart + 28) & 0x20) != 0 )
            AllocGpuVirtualAddress = *((_QWORD *)v26 + 18);
          else
            AllocGpuVirtualAddress = VidMmGetAllocGpuVirtualAddress(v26, *(_DWORD *)(v52.QuadPart + 24));
          v23[2].QuadPart = AllocGpuVirtualAddress;
        }
        else
        {
          v23[2].QuadPart = 0LL;
        }
        a2[3].HighPart &= ~4u;
        if ( (VIDMM_GLOBAL::_Config & 1) == 0
          && (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 4) == 0
          && (*((_BYTE *)v41 + 42) || (*((_DWORD *)v41 + 6) & 0x400) != 0) )
        {
          DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)v41 + 136));
          v90 = v41;
          if ( !VidMmGetFullMDL(v41, 0LL)
            && !*((_QWORD *)v46 + 8)
            && (**((_DWORD **)v41 + 47) & 0x40000000) == 0
            && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this, *((_QWORD *)v46 + 2)) >= 0 )
          {
            v54 = 0;
            memset(&ApcState, 0, sizeof(ApcState));
            v55 = *((_QWORD *)v41 + 6);
            if ( v55 )
            {
              v100 = *(PRKPROCESS **)(v55 + 8);
              KeStackAttachProcess(*v100, &ApcState);
              v54 = 1;
            }
            if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                        this,
                        *((struct VIDMM_LOCAL_ALLOC **)v41 + 6),
                        v41,
                        0LL,
                        *((_QWORD *)v46 + 2),
                        (enum _LOCK_OPERATION)v73,
                        0LL,
                        0) < 0 )
            {
              WdLogSingleEntry1(2LL, v41);
              WdLogGlobalForLineNumber = 8451;
              VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *((_QWORD *)v46 + 2));
            }
            else
            {
              VidMmiAddProbeAndLockReference(v41);
              *((_DWORD *)v41 + 8) |= 2u;
            }
            if ( v54 )
              KeUnstackDetachProcess(&ApcState);
            v45 = p_QuadPart;
          }
          v90 = 0LL;
          DXGFASTMUTEX::Release((struct _KTHREAD **)v41 + 17);
        }
      }
      if ( !v45 )
        AddDMAReferences((__int64)v26, a6);
      v47 = (unsigned __int64 *)v82;
      if ( !*((_DWORD *)v26 + 38)
        && (*((_BYTE *)v82 + 25) & 1) == 0
        && ((*((_BYTE *)this + 40936) & 0x20) == 0 || (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 0x10) == 0) )
      {
        WdLogSingleEntry1(1LL, v82);
        WdLogGlobalForLineNumber = 8487;
        *(_QWORD *)v75 = 0LL;
        v74 = 0LL;
        v73 = 0LL;
        v72 = v47;
        DxgkLogInternalTriageEvent(v48, 0x40000LL);
        v32 = -1073741823;
        v78 = -1073741823;
        VidSchMarkDeviceAsError(*(_QWORD *)(v47[1] + 32), 16);
        v33 = p_QuadPart;
        if ( !p_QuadPart )
          RemoveDMAReferences((__int64)v47, a6);
        v21 = v76;
        v22 = QuadPart;
        goto LABEL_141;
      }
      v24 = v86;
      v49 = (v86->Value >> 2) & 7;
      if ( v49 )
      {
        v50 = (struct VIDMM_ALLOC *)v49;
        WdLogSingleEntry2(1LL, v82, v49);
        WdLogGlobalForLineNumber = 8509;
        *(_QWORD *)v75 = 0LL;
        v74 = 0LL;
        v73 = v50;
        v72 = v47;
        DxgkLogInternalTriageEvent(v51, 0x40000LL);
      }
      v21 = v76;
      v22 = QuadPart;
      v23 = v80;
      v19 = 0;
    }
    else
    {
      if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 1783);
        v21 = v76;
        v22 = QuadPart;
        v23 = v80;
        v24 = v86;
      }
      else
      {
        ++*((_DWORD *)this + 1783);
      }
      *v22 = 0LL;
      *(_OWORD *)&v23->LowPart = 0LL;
      v23[2].QuadPart = 0LL;
    }
    QuadPart = ++v22;
    v86 = ++v24;
    v23 += 3;
    v80 = v23;
    v76 = ++v21;
    v20 = v89;
    v16 = v81;
  }
  *v96 = v20;
  v56 = a2[7];
  v57 = v97;
  *v97 = 0;
  if ( v56.QuadPart )
  {
    v58 = (LONGLONG *)v92;
    v92->QuadPart = 0LL;
    v59 = (_DWORD **)a2[6].QuadPart;
    if ( (*v59[47] & 0x8000) != 0 )
    {
      if ( (*((_DWORD *)this + 1746) & 0x40) == 0 )
      {
        v60 = (__int64)*v59;
        v83 = (struct VIDMM_PHYSICAL_ALLOC *)*((_QWORD *)*v59 + 8);
        if ( v83 )
        {
          if ( (*((_DWORD *)v83 + 26) & 0x1000) != 0 )
            v61 = 0;
          else
            v61 = *((_WORD *)v83 + 20) + 1;
          *v57 = v61;
          *v58 = *(_QWORD *)(v60 + 72) + *((_QWORD *)v83 + 6);
        }
        else
        {
          *v57 = 0;
          *v58 = 0LL;
        }
      }
      if ( *v57 )
      {
        if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
          _InterlockedIncrement((volatile signed __int32 *)this + 1787);
        else
          ++*((_DWORD *)this + 1787);
      }
      else
      {
        if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
          _InterlockedIncrement((volatile signed __int32 *)this + 1788);
        else
          ++*((_DWORD *)this + 1788);
        a2[3].HighPart &= ~4u;
      }
    }
    v62 = a6;
    AddDMAReferences(a2[7].QuadPart, a6);
  }
  else
  {
    *v92 = a2[10];
    v62 = a6;
  }
  _InterlockedAdd((volatile signed __int32 *)&a2[4], v62);
  if ( v62 > 1 )
    a2[3].HighPart |= 2u;
  v63 = v76;
  if ( !p_QuadPart )
    a2[17].LowPart = v76;
  a2[2].LowPart = v62;
  if ( (a2[3].HighPart & 4) != 0 )
  {
    v64 = *(_QWORD *)(*(_QWORD *)a2[16].QuadPart + 40LL);
    _InterlockedOr(v71, 0);
    if ( a2[18].QuadPart == v64 )
    {
      if ( (unsigned int)Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline() )
        _InterlockedIncrement((volatile signed __int32 *)this + 1789);
      else
        ++*((_DWORD *)this + 1789);
    }
    v63 = v76;
  }
  v65 = a2[13];
  v66 = a2[12];
  v67 = *(_QWORD *)(a2[16].QuadPart + 16);
  if ( (byte_140081241 & 0x20) != 0 && v63 )
  {
    do
    {
      v68 = 128;
      if ( v63 - v19 < 0x80 )
        v68 = v63 - v19;
      v69 = 0LL;
      if ( v68 )
      {
        v15 = (int *)v102;
        do
        {
          *v15 = *(_DWORD *)(v65.QuadPart + 24LL * ((unsigned int)v69 + v19) + 8) & 1;
          v69 = (unsigned int)(v69 + 1);
          ++v15;
        }
        while ( (unsigned int)v69 < v68 );
      }
      if ( (byte_140081241 & 0x20) != 0 )
      {
        LODWORD(v73) = v68;
        McTemplateK0ppqPR2TR2_EtwWriteTransfer(
          v66.QuadPart + 8LL * v19,
          v69,
          (__int64)v15,
          v67,
          a2,
          v73,
          v66.QuadPart + 8LL * v19,
          v102);
      }
      v19 += 128;
    }
    while ( v19 < v63 );
  }
  return 0LL;
}
