/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x14036E2F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14036F49C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403703A0 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x14037041C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SO.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  int v6; // eax
  const void *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // esi
  PVOID Pool2; // rax
  unsigned int v11; // esi
  _BYTE *v12; // r12
  unsigned int v13; // esi
  _BYTE *v14; // r14
  void *v15; // r13
  size_t v16; // r8
  const void *v17; // rdx
  struct DXGDEVICE *v18; // rsi
  unsigned int v19; // edx
  _OWORD *v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // edx
  struct DXGDEVICE *v26; // r9
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v30; // rdx
  unsigned int v31; // edx
  struct DXGDEVICE *v32; // r8
  _BYTE *v33; // rsi
  _DWORD *v34; // rax
  unsigned int i; // edx
  DXGDEVICE *v36; // rsi
  __int64 v37; // r9
  int v38; // eax
  unsigned int v39; // r14d
  int v40; // esi
  ULONG64 v41; // r14
  void *v42; // rcx
  void *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 CurrentProcess; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  int *v64; // [rsp+30h] [rbp-3E8h]
  int *v65; // [rsp+30h] [rbp-3E8h]
  int v66; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v67; // [rsp+58h] [rbp-3C0h]
  char v68; // [rsp+60h] [rbp-3B8h]
  struct DXGDEVICE *v69; // [rsp+68h] [rbp-3B0h] BYREF
  PVOID v70; // [rsp+70h] [rbp-3A8h]
  _BYTE v71[24]; // [rsp+78h] [rbp-3A0h] BYREF
  unsigned int v72; // [rsp+90h] [rbp-388h]
  struct DXGDEVICE *v73; // [rsp+98h] [rbp-380h] BYREF
  PVOID v74; // [rsp+A0h] [rbp-378h] BYREF
  _BYTE v75[24]; // [rsp+A8h] [rbp-370h] BYREF
  int v76; // [rsp+C0h] [rbp-358h]
  int v77; // [rsp+C8h] [rbp-350h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v78; // [rsp+CCh] [rbp-34Ch] BYREF
  unsigned int v79[4]; // [rsp+D0h] [rbp-348h] BYREF
  void *Src[2]; // [rsp+E0h] [rbp-338h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v81[2]; // [rsp+F0h] [rbp-328h]
  unsigned int v82; // [rsp+100h] [rbp-318h]
  int v83; // [rsp+104h] [rbp-314h]
  BOOL v84; // [rsp+108h] [rbp-310h]
  ULONG64 v85; // [rsp+110h] [rbp-308h]
  struct DXGPROCESS *v86; // [rsp+118h] [rbp-300h] BYREF
  int v87; // [rsp+120h] [rbp-2F8h]
  PVOID v88; // [rsp+130h] [rbp-2E8h]
  _BYTE v89[96]; // [rsp+138h] [rbp-2E0h] BYREF
  unsigned int v90; // [rsp+198h] [rbp-280h]
  PVOID P; // [rsp+1A0h] [rbp-278h] BYREF
  _BYTE v92[132]; // [rsp+1A8h] [rbp-270h] BYREF
  int v93; // [rsp+22Ch] [rbp-1ECh]
  PVOID v94; // [rsp+230h] [rbp-1E8h]
  _BYTE v95[264]; // [rsp+238h] [rbp-1E0h] BYREF
  unsigned int v96; // [rsp+340h] [rbp-D8h]
  _BYTE v97[160]; // [rsp+350h] [rbp-C8h] BYREF

  v85 = a1;
  v66 = -1;
  v67 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v68 = 1;
    v66 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2093);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v66, 2093);
  Current = DXGPROCESS::GetCurrent(v4);
  v86 = Current;
  if ( !Current )
  {
    v40 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10979;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_78;
  }
  v6 = *((_DWORD *)Current + 102) >> 2;
  LOBYTE(v6) = (v6 & 1) == 0;
  v84 = v6;
  *(_OWORD *)v79 = 0LL;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v81 = 0LL;
  v7 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v79, v7, 0x30uLL);
  if ( !v79[2] )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    v40 = -1073741811;
    WdLogSingleEntry3(2LL, v79[2], -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 11013;
    v64 = (int *)PsGetCurrentProcess(v53);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CheckMultiPlaneOverlaySupport3 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v79[2],
      -1073741811LL,
      (__int64)v64,
      0LL,
      0LL);
    goto LABEL_78;
  }
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v57 = PsGetCurrentProcess(v8);
    v40 = -1073741811;
    WdLogSingleEntry3(2LL, LODWORD(Src[1]), -1073741811LL, v57);
    WdLogGlobalForLineNumber = 11023;
    v65 = (int *)PsGetCurrentProcess(v58);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CheckMultiPlaneOverlaySupport3 post composition count count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      LODWORD(Src[1]),
      -1073741811LL,
      (__int64)v65,
      0LL,
      0LL);
LABEL_78:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
    if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit, v45, v66);
    return (unsigned int)v40;
  }
  v70 = 0LL;
  v72 = 0;
  v9 = v79[2];
  if ( v79[2] <= 3 )
  {
    v70 = v71;
    memset(v71, 0, 8LL * v79[2]);
    Pool2 = v70;
    goto LABEL_11;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v79[2] >= 8 )
  {
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * v79[2], 1265072196LL);
    v70 = Pool2;
LABEL_11:
    v69 = (struct DXGDEVICE *)Pool2;
    v72 = v9;
    goto LABEL_12;
  }
  Pool2 = 0LL;
  v69 = 0LL;
LABEL_12:
  if ( !Pool2 )
  {
    v54 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(3LL, -1073741801LL, v54);
    WdLogGlobalForLineNumber = 11036;
LABEL_121:
    if ( v70 != v71 && v70 )
      ExFreePoolWithTag(v70, 0);
    v70 = 0LL;
    v72 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
    if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v55, (__int64)&EventProfilerExit, v56, v66);
    return 3221225495LL;
  }
  v88 = 0LL;
  v90 = 0;
  v11 = v79[2];
  if ( v79[2] <= 3 )
  {
    v12 = v89;
    v88 = v89;
    if ( v79[2] )
    {
      memset(v89, 0, 32LL * v79[2]);
      v12 = v88;
    }
    goto LABEL_16;
  }
  v8 = v79[2];
  if ( 0xFFFFFFFFFFFFFFFFuLL / v79[2] >= 0x20 )
  {
    v12 = (_BYTE *)ExAllocatePool2(256LL, 32LL * v79[2], 1265072196LL);
    v88 = v12;
LABEL_16:
    v90 = v11;
    goto LABEL_17;
  }
  v12 = 0LL;
LABEL_17:
  if ( !v12 )
  {
    v59 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(3LL, -1073741801LL, v59);
    WdLogGlobalForLineNumber = 11047;
LABEL_108:
    if ( v88 != v89 && v88 )
      ExFreePoolWithTag(v88, 0);
    v90 = 0;
    v88 = 0LL;
    goto LABEL_121;
  }
  v94 = 0LL;
  v96 = 0;
  v13 = v79[2];
  if ( v79[2] <= 3 )
  {
    v14 = v95;
    v94 = v95;
    if ( v79[2] )
    {
      memset(v95, 0, 88LL * v79[2]);
      v14 = v94;
    }
    goto LABEL_21;
  }
  v8 = v79[2];
  if ( 0xFFFFFFFFFFFFFFFFuLL / v79[2] >= 0x58 )
  {
    v14 = (_BYTE *)ExAllocatePool2(256LL, 88LL * v79[2], 1265072196LL);
    v94 = v14;
LABEL_21:
    v96 = v13;
    goto LABEL_22;
  }
  v14 = 0LL;
LABEL_22:
  if ( !v14 )
  {
    v60 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(3LL, -1073741801LL, v60);
    WdLogGlobalForLineNumber = 11058;
LABEL_104:
    if ( v94 != v95 && v94 )
      ExFreePoolWithTag(v94, 0);
    v94 = 0LL;
    v96 = 0;
    goto LABEL_108;
  }
  v74 = 0LL;
  v76 = 0;
  P = 0LL;
  v93 = 0;
  v15 = 0LL;
  v73 = 0LL;
  if ( LODWORD(Src[1]) )
  {
    v15 = (void *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,3>::AllocateElements(&v74);
    if ( v15 )
    {
      v73 = (struct DXGDEVICE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                                  &P,
                                  LODWORD(Src[1]));
      if ( v73 )
        goto LABEL_24;
      v51 = PsGetCurrentProcess(v50);
      WdLogSingleEntry2(3LL, -1073741801LL, v51);
      WdLogGlobalForLineNumber = 11086;
    }
    else
    {
      v61 = PsGetCurrentProcess(v49);
      WdLogSingleEntry2(3LL, -1073741801LL, v61);
      WdLogGlobalForLineNumber = 11076;
    }
    if ( P != v92 && P )
      ExFreePoolWithTag(P, 0);
    v93 = 0;
    P = 0LL;
    if ( v74 != v75 && v74 )
      ExFreePoolWithTag(v74, 0);
    v76 = 0;
    v74 = 0LL;
    goto LABEL_104;
  }
LABEL_24:
  v16 = 8LL * v79[2];
  v17 = Src[0];
  if ( (char *)Src[0] + v16 < Src[0] || (char *)Src[0] + v16 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v18 = v69;
  memmove(v69, v17, v16);
  v19 = 0;
  v82 = 0;
  while ( v19 < v79[2] )
  {
    v20 = (_OWORD *)*((_QWORD *)v18 + v19);
    if ( v20 + 2 < v20 || (unsigned __int64)(v20 + 2) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v21 = 32LL * v19;
    *(_OWORD *)&v12[v21] = *v20;
    *(_OWORD *)&v12[v21 + 16] = v20[1];
    v22 = *(_QWORD *)&v12[v21 + 24];
    if ( v22 + 88 < v22 || v22 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v23 = 88LL * v19;
    *(_OWORD *)&v14[v23] = *(_OWORD *)v22;
    *(_OWORD *)&v14[v23 + 16] = *(_OWORD *)(v22 + 16);
    *(_OWORD *)&v14[v23 + 32] = *(_OWORD *)(v22 + 32);
    *(_OWORD *)&v14[v23 + 48] = *(_OWORD *)(v22 + 48);
    *(_OWORD *)&v14[v23 + 64] = *(_OWORD *)(v22 + 64);
    *(_QWORD *)&v14[v23 + 80] = *(_QWORD *)(v22 + 80);
    *(_DWORD *)&v14[v23 + 60] = 0;
    *(_QWORD *)&v14[v23 + 64] = 0LL;
    v82 = ++v19;
  }
  v24 = (unsigned int)Src[1];
  if ( LODWORD(Src[1]) )
  {
    v29 = LODWORD(Src[1]);
    v30 = v81[0];
    if ( &v81[0][v29] < v81[0]
      || &v81[0][v29] > (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v15, v30, v29 * 8);
    v24 = (unsigned int)Src[1];
  }
  v25 = 0;
  v83 = 0;
  v26 = v73;
  while ( v25 < v24 )
  {
    v27 = *((_QWORD *)v15 + v25);
    if ( v27 + 44 < v27 || v27 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v28 = 44LL * v25;
    v26 = v73;
    *(_OWORD *)((char *)v73 + v28) = *(_OWORD *)v27;
    *(_OWORD *)((char *)v26 + v28 + 16) = *(_OWORD *)(v27 + 16);
    *(_QWORD *)((char *)v26 + v28 + 32) = *(_QWORD *)(v27 + 32);
    *(_DWORD *)((char *)v26 + v28 + 40) = *(_DWORD *)(v27 + 40);
    v83 = ++v25;
    v24 = (unsigned int)Src[1];
  }
  Src[0] = v18;
  v31 = 0;
  v32 = v18;
  while ( v31 < v79[2] )
  {
    v33 = &v12[32 * v31];
    *((_QWORD *)v32 + v31) = v33;
    v34 = &v14[88 * v31];
    *((_QWORD *)v33 + 3) = v34;
    if ( (*v34 & 4) != 0 )
    {
      _mm_lfence();
      v47 = PsGetCurrentProcess(v31);
      v48 = **((unsigned int **)v33 + 3);
      v40 = -1073741811;
      WdLogSingleEntry3(3LL, v48, -1073741811LL, v47);
      WdLogGlobalForLineNumber = 11150;
LABEL_66:
      if ( P != v92 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v93 = 0;
      if ( v74 != v75 && v74 )
        ExFreePoolWithTag(v74, 0);
      v74 = 0LL;
      v76 = 0;
      if ( v94 != v95 && v94 )
        ExFreePoolWithTag(v94, 0);
      v94 = 0LL;
      v96 = 0;
      if ( v88 != v89 && v88 )
        ExFreePoolWithTag(v88, 0);
      v88 = 0LL;
      v90 = 0;
      if ( v70 != v71 && v70 )
        ExFreePoolWithTag(v70, 0);
      v70 = 0LL;
      v72 = 0;
      goto LABEL_78;
    }
    ++v31;
  }
  v81[0] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v15;
  for ( i = 0; i < LODWORD(Src[1]); ++i )
    *((_QWORD *)v15 + i) = (char *)v26 + 44 * i;
  v73 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v69, v79[1], (struct _KTHREAD **)v86, &v73);
  v36 = v73;
  if ( !v73 )
  {
    v40 = -1073741811;
    WdLogSingleEntry2(2LL, v79[1], -1073741811LL);
    WdLogGlobalForLineNumber = 11166;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v79[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_63:
    if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
    goto LABEL_66;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v86, v73);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v97, (__int64)v36, 2, v37, 0);
  v38 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
  v39 = v38;
  if ( v38 >= 0 )
  {
    v77 = 0;
    v78.0 = 0;
    v40 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(
            v36,
            v79[2],
            (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)Src[0],
            (unsigned int)Src[1],
            v81[0],
            v84,
            &v77,
            &v78);
    if ( v40 >= 0 )
    {
      v41 = v85;
      v42 = (void *)(v85 + 40);
      if ( v85 + 40 >= MmUserProbeAddress )
        v42 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v42, &v77, 4uLL);
      v43 = (void *)(v41 + 44);
      if ( v41 + 44 >= MmUserProbeAddress )
        v43 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v43, &v78, 4uLL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    if ( v86 && v87 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v86 + 17));
      KeLeaveCriticalRegion();
    }
    goto LABEL_63;
  }
  WdLogSingleEntry2(3LL, v36, v38);
  WdLogGlobalForLineNumber = 11181;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v86);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v69);
  if ( P != v92 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v93 = 0;
  if ( v74 != v75 && v74 )
    ExFreePoolWithTag(v74, 0);
  v74 = 0LL;
  v76 = 0;
  if ( v94 != v95 && v94 )
    ExFreePoolWithTag(v94, 0);
  v94 = 0LL;
  v96 = 0;
  if ( v88 != v89 && v88 )
    ExFreePoolWithTag(v88, 0);
  v88 = 0LL;
  v90 = 0;
  if ( v70 != v71 && v70 )
    ExFreePoolWithTag(v70, 0);
  v70 = 0LL;
  v72 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
  if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v62, (__int64)&EventProfilerExit, v63, v66);
  return v39;
}
