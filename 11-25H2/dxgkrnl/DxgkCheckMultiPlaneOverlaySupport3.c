/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x14029F3B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A098C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403A297C (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1403B6CC4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  int v6; // eax
  const void *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // esi
  PVOID Pool2; // rax
  unsigned int v12; // esi
  _BYTE *v13; // r12
  unsigned int v14; // esi
  _BYTE *v15; // r14
  void *v16; // r13
  size_t v17; // r8
  const void *v18; // rdx
  struct DXGDEVICE *v19; // rsi
  unsigned int v20; // edx
  _OWORD *v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // edx
  struct DXGDEVICE *v27; // r9
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v31; // rdx
  unsigned int v32; // edx
  struct DXGDEVICE *v33; // r8
  _BYTE *v34; // rsi
  _DWORD *v35; // rax
  unsigned int i; // edx
  DXGDEVICE *v37; // rsi
  __int64 v38; // r9
  int v39; // eax
  unsigned int v40; // r14d
  int v41; // esi
  ULONG64 v42; // r14
  void *v43; // rcx
  void *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 CurrentProcess; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  int *v65; // [rsp+30h] [rbp-3E8h]
  int *v66; // [rsp+30h] [rbp-3E8h]
  int v67; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v68; // [rsp+58h] [rbp-3C0h]
  char v69; // [rsp+60h] [rbp-3B8h]
  struct DXGDEVICE *v70; // [rsp+68h] [rbp-3B0h] BYREF
  PVOID v71; // [rsp+70h] [rbp-3A8h]
  _BYTE v72[24]; // [rsp+78h] [rbp-3A0h] BYREF
  unsigned int v73; // [rsp+90h] [rbp-388h]
  struct DXGDEVICE *v74; // [rsp+98h] [rbp-380h] BYREF
  PVOID v75; // [rsp+A0h] [rbp-378h] BYREF
  _BYTE v76[24]; // [rsp+A8h] [rbp-370h] BYREF
  int v77; // [rsp+C0h] [rbp-358h]
  int v78; // [rsp+C8h] [rbp-350h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v79; // [rsp+CCh] [rbp-34Ch] BYREF
  unsigned int v80[4]; // [rsp+D0h] [rbp-348h] BYREF
  void *Src[2]; // [rsp+E0h] [rbp-338h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v82[2]; // [rsp+F0h] [rbp-328h]
  unsigned int v83; // [rsp+100h] [rbp-318h]
  int v84; // [rsp+104h] [rbp-314h]
  BOOL v85; // [rsp+108h] [rbp-310h]
  ULONG64 v86; // [rsp+110h] [rbp-308h]
  struct DXGPROCESS *v87; // [rsp+118h] [rbp-300h] BYREF
  int v88; // [rsp+120h] [rbp-2F8h]
  PVOID v89; // [rsp+130h] [rbp-2E8h]
  _BYTE v90[96]; // [rsp+138h] [rbp-2E0h] BYREF
  unsigned int v91; // [rsp+198h] [rbp-280h]
  PVOID P; // [rsp+1A0h] [rbp-278h] BYREF
  _BYTE v93[132]; // [rsp+1A8h] [rbp-270h] BYREF
  int v94; // [rsp+22Ch] [rbp-1ECh]
  PVOID v95; // [rsp+230h] [rbp-1E8h]
  _BYTE v96[264]; // [rsp+238h] [rbp-1E0h] BYREF
  unsigned int v97; // [rsp+340h] [rbp-D8h]
  _BYTE v98[160]; // [rsp+350h] [rbp-C8h] BYREF

  v86 = a1;
  v67 = -1;
  v68 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2093);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v67, 2093);
  Current = DXGPROCESS::GetCurrent(v4);
  v87 = Current;
  if ( !Current )
  {
    v41 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10699;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
  v85 = v6;
  *(_OWORD *)v80 = 0LL;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v82 = 0LL;
  v7 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v80, v7, 0x30uLL);
  if ( !v80[2] )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    v41 = -1073741811;
    WdLogSingleEntry3(2LL, v80[2], -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 10733;
    v65 = (int *)PsGetCurrentProcess(v54);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"CheckMultiPlaneOverlaySupport3 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v80[2],
      -1073741811LL,
      (__int64)v65,
      0LL,
      0LL);
    goto LABEL_78;
  }
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v58 = PsGetCurrentProcess(v8);
    v41 = -1073741811;
    WdLogSingleEntry3(2LL, LODWORD(Src[1]), -1073741811LL, v58);
    WdLogGlobalForLineNumber = 10743;
    v66 = (int *)PsGetCurrentProcess(v59);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"CheckMultiPlaneOverlaySupport3 post composition count count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      LODWORD(Src[1]),
      -1073741811LL,
      (__int64)v66,
      0LL,
      0LL);
LABEL_78:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit, v46, v67);
    return (unsigned int)v41;
  }
  v71 = 0LL;
  v73 = 0;
  v10 = v80[2];
  if ( v80[2] <= 3 )
  {
    v71 = v72;
    memset(v72, 0, 8LL * v80[2]);
    Pool2 = v71;
    goto LABEL_11;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v80[2] >= 8 )
  {
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * v80[2], 1265072196LL, v9);
    v71 = Pool2;
LABEL_11:
    v70 = (struct DXGDEVICE *)Pool2;
    v73 = v10;
    goto LABEL_12;
  }
  Pool2 = 0LL;
  v70 = 0LL;
LABEL_12:
  if ( !Pool2 )
  {
    v55 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(3LL, -1073741801LL, v55);
    WdLogGlobalForLineNumber = 10756;
LABEL_121:
    if ( v71 != v72 && v71 )
      ExFreePoolWithTag(v71, 0);
    v71 = 0LL;
    v73 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v56, (__int64)&EventProfilerExit, v57, v67);
    return 3221225495LL;
  }
  v89 = 0LL;
  v91 = 0;
  v12 = v80[2];
  if ( v80[2] <= 3 )
  {
    v13 = v90;
    v89 = v90;
    if ( v80[2] )
    {
      memset(v90, 0, 32LL * v80[2]);
      v13 = v89;
    }
    goto LABEL_16;
  }
  v8 = v80[2];
  if ( 0xFFFFFFFFFFFFFFFFuLL / v80[2] >= 0x20 )
  {
    v13 = (_BYTE *)ExAllocatePool2(256LL, 32LL * v80[2], 1265072196LL, v9);
    v89 = v13;
LABEL_16:
    v91 = v12;
    goto LABEL_17;
  }
  v13 = 0LL;
LABEL_17:
  if ( !v13 )
  {
    v60 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(3LL, -1073741801LL, v60);
    WdLogGlobalForLineNumber = 10767;
LABEL_108:
    if ( v89 != v90 && v89 )
      ExFreePoolWithTag(v89, 0);
    v91 = 0;
    v89 = 0LL;
    goto LABEL_121;
  }
  v95 = 0LL;
  v97 = 0;
  v14 = v80[2];
  if ( v80[2] <= 3 )
  {
    v15 = v96;
    v95 = v96;
    if ( v80[2] )
    {
      memset(v96, 0, 88LL * v80[2]);
      v15 = v95;
    }
    goto LABEL_21;
  }
  v8 = v80[2];
  if ( 0xFFFFFFFFFFFFFFFFuLL / v80[2] >= 0x58 )
  {
    v15 = (_BYTE *)ExAllocatePool2(256LL, 88LL * v80[2], 1265072196LL, v9);
    v95 = v15;
LABEL_21:
    v97 = v14;
    goto LABEL_22;
  }
  v15 = 0LL;
LABEL_22:
  if ( !v15 )
  {
    v61 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(3LL, -1073741801LL, v61);
    WdLogGlobalForLineNumber = 10778;
LABEL_104:
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    goto LABEL_108;
  }
  v75 = 0LL;
  v77 = 0;
  P = 0LL;
  v94 = 0;
  v16 = 0LL;
  v74 = 0LL;
  if ( LODWORD(Src[1]) )
  {
    v16 = (void *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,3>::AllocateElements(&v75);
    if ( v16 )
    {
      v74 = (struct DXGDEVICE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                                  &P,
                                  LODWORD(Src[1]));
      if ( v74 )
        goto LABEL_24;
      v52 = PsGetCurrentProcess(v51);
      WdLogSingleEntry2(3LL, -1073741801LL, v52);
      WdLogGlobalForLineNumber = 10806;
    }
    else
    {
      v62 = PsGetCurrentProcess(v50);
      WdLogSingleEntry2(3LL, -1073741801LL, v62);
      WdLogGlobalForLineNumber = 10796;
    }
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    v94 = 0;
    P = 0LL;
    if ( v75 != v76 && v75 )
      ExFreePoolWithTag(v75, 0);
    v77 = 0;
    v75 = 0LL;
    goto LABEL_104;
  }
LABEL_24:
  v17 = 8LL * v80[2];
  v18 = Src[0];
  if ( (char *)Src[0] + v17 < Src[0] || (char *)Src[0] + v17 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v19 = v70;
  memmove(v70, v18, v17);
  v20 = 0;
  v83 = 0;
  while ( v20 < v80[2] )
  {
    v21 = (_OWORD *)*((_QWORD *)v19 + v20);
    if ( v21 + 2 < v21 || (unsigned __int64)(v21 + 2) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v22 = 32LL * v20;
    *(_OWORD *)&v13[v22] = *v21;
    *(_OWORD *)&v13[v22 + 16] = v21[1];
    v23 = *(_QWORD *)&v13[v22 + 24];
    if ( v23 + 88 < v23 || v23 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v24 = 88LL * v20;
    *(_OWORD *)&v15[v24] = *(_OWORD *)v23;
    *(_OWORD *)&v15[v24 + 16] = *(_OWORD *)(v23 + 16);
    *(_OWORD *)&v15[v24 + 32] = *(_OWORD *)(v23 + 32);
    *(_OWORD *)&v15[v24 + 48] = *(_OWORD *)(v23 + 48);
    *(_OWORD *)&v15[v24 + 64] = *(_OWORD *)(v23 + 64);
    *(_QWORD *)&v15[v24 + 80] = *(_QWORD *)(v23 + 80);
    *(_DWORD *)&v15[v24 + 60] = 0;
    *(_QWORD *)&v15[v24 + 64] = 0LL;
    v83 = ++v20;
  }
  v25 = (unsigned int)Src[1];
  if ( LODWORD(Src[1]) )
  {
    v30 = LODWORD(Src[1]);
    v31 = v82[0];
    if ( &v82[0][v30] < v82[0]
      || &v82[0][v30] > (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v16, v31, v30 * 8);
    v25 = (unsigned int)Src[1];
  }
  v26 = 0;
  v84 = 0;
  v27 = v74;
  while ( v26 < v25 )
  {
    v28 = *((_QWORD *)v16 + v26);
    if ( v28 + 44 < v28 || v28 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v29 = 44LL * v26;
    v27 = v74;
    *(_OWORD *)((char *)v74 + v29) = *(_OWORD *)v28;
    *(_OWORD *)((char *)v27 + v29 + 16) = *(_OWORD *)(v28 + 16);
    *(_QWORD *)((char *)v27 + v29 + 32) = *(_QWORD *)(v28 + 32);
    *(_DWORD *)((char *)v27 + v29 + 40) = *(_DWORD *)(v28 + 40);
    v84 = ++v26;
    v25 = (unsigned int)Src[1];
  }
  Src[0] = v19;
  v32 = 0;
  v33 = v19;
  while ( v32 < v80[2] )
  {
    v34 = &v13[32 * v32];
    *((_QWORD *)v33 + v32) = v34;
    v35 = &v15[88 * v32];
    *((_QWORD *)v34 + 3) = v35;
    if ( (*v35 & 4) != 0 )
    {
      _mm_lfence();
      v48 = PsGetCurrentProcess(v32);
      v49 = **((unsigned int **)v34 + 3);
      v41 = -1073741811;
      WdLogSingleEntry3(3LL, v49, -1073741811LL, v48);
      WdLogGlobalForLineNumber = 10870;
LABEL_66:
      if ( P != v93 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v94 = 0;
      if ( v75 != v76 && v75 )
        ExFreePoolWithTag(v75, 0);
      v75 = 0LL;
      v77 = 0;
      if ( v95 != v96 && v95 )
        ExFreePoolWithTag(v95, 0);
      v95 = 0LL;
      v97 = 0;
      if ( v89 != v90 && v89 )
        ExFreePoolWithTag(v89, 0);
      v89 = 0LL;
      v91 = 0;
      if ( v71 != v72 && v71 )
        ExFreePoolWithTag(v71, 0);
      v71 = 0LL;
      v73 = 0;
      goto LABEL_78;
    }
    ++v32;
  }
  v82[0] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v16;
  for ( i = 0; i < LODWORD(Src[1]); ++i )
    *((_QWORD *)v16 + i) = (char *)v27 + 44 * i;
  v74 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v70, v80[1], v87, &v74);
  v37 = v74;
  if ( !v74 )
  {
    v41 = -1073741811;
    WdLogSingleEntry2(2LL, v80[1], -1073741811LL);
    WdLogGlobalForLineNumber = 10886;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v80[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_63:
    if ( v70 && _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
    goto LABEL_66;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v87, v74);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v98, (__int64)v37, 2, v38, 0);
  v39 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v98, 0LL);
  v40 = v39;
  if ( v39 >= 0 )
  {
    v78 = 0;
    v79.0 = 0;
    v41 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(
            v37,
            v80[2],
            (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)Src[0],
            (unsigned int)Src[1],
            v82[0],
            v85,
            &v78,
            &v79);
    if ( v41 >= 0 )
    {
      v42 = v86;
      v43 = (void *)(v86 + 40);
      if ( v86 + 40 >= MmUserProbeAddress )
        v43 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v43, &v78, 4uLL);
      v44 = (void *)(v42 + 44);
      if ( v42 + 44 >= MmUserProbeAddress )
        v44 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v44, &v79, 4uLL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
    if ( v87 && v88 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v87 + 17));
      KeLeaveCriticalRegion();
    }
    goto LABEL_63;
  }
  WdLogSingleEntry2(3LL, v37, v39);
  WdLogGlobalForLineNumber = 10901;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v87);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v70);
  if ( P != v93 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v94 = 0;
  if ( v75 != v76 && v75 )
    ExFreePoolWithTag(v75, 0);
  v75 = 0LL;
  v77 = 0;
  if ( v95 != v96 && v95 )
    ExFreePoolWithTag(v95, 0);
  v95 = 0LL;
  v97 = 0;
  if ( v89 != v90 && v89 )
    ExFreePoolWithTag(v89, 0);
  v89 = 0LL;
  v91 = 0;
  if ( v71 != v72 && v71 )
    ExFreePoolWithTag(v71, 0);
  v71 = 0LL;
  v73 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
  if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v63, (__int64)&EventProfilerExit, v64, v67);
  return v40;
}
