/*
 * XREFs of DxgkCreateProtectedSession @ 0x1401EACF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031508 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1401843BC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401EA108 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401EA820 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct DXGPROCESS *Current; // r13
  const void *v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // eax
  void *v8; // rcx
  int v9; // esi
  __int64 v10; // rax
  const wchar_t *v11; // r9
  size_t v12; // r9
  const void *v13; // rdx
  char *v14; // r8
  void *v15; // rcx
  size_t v16; // r9
  const void *v17; // rdx
  ULONG64 v18; // r8
  struct DXGDEVICE *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // r9
  struct DXGGLOBAL *v24; // rax
  unsigned int v25; // r15d
  volatile signed __int32 *v26; // r13
  unsigned int v27; // eax
  unsigned int v28; // r15d
  __int64 v29; // rdx
  unsigned int v30; // ecx
  int v31; // ecx
  __int64 v32; // rsi
  __int64 v33; // rsi
  const wchar_t *v34; // r9
  struct DXGDEVICE *v35; // r8
  struct DXGDEVICE *v36; // r15
  __int64 v37; // rax
  struct DXGSYNCOBJECT *v38; // r15
  void *v39; // rcx
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  struct DXGPROCESS *v42; // r15
  __int64 v43; // r8
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DXGSYNCOBJECT *v47; // r15
  DXGGLOBAL *Global; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51[8]; // [rsp+50h] [rbp-188h] BYREF
  int v52; // [rsp+58h] [rbp-180h] BYREF
  __int64 v53; // [rsp+60h] [rbp-178h]
  char v54; // [rsp+68h] [rbp-170h]
  void *Src[2]; // [rsp+70h] [rbp-168h] BYREF
  size_t Size[2]; // [rsp+80h] [rbp-158h]
  size_t v57; // [rsp+90h] [rbp-148h] BYREF
  struct DXGPROTECTEDSESSION *v58; // [rsp+98h] [rbp-140h] BYREF
  struct DXGSYNCOBJECT *v59; // [rsp+A0h] [rbp-138h] BYREF
  struct DXGPROCESS *v60; // [rsp+A8h] [rbp-130h]
  void *v61; // [rsp+B0h] [rbp-128h] BYREF
  void *v62; // [rsp+B8h] [rbp-120h] BYREF
  _BYTE v63[16]; // [rsp+C0h] [rbp-118h] BYREF
  struct DXGDEVICE *v64; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v65[16]; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-F0h]
  ULONG64 v67; // [rsp+F0h] [rbp-E8h]
  ULONG64 v68; // [rsp+F8h] [rbp-E0h]
  _BYTE v69[160]; // [rsp+100h] [rbp-D8h] BYREF

  v67 = a1;
  v68 = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 57;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      57LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v52 = -1;
  v53 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2148);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v52, 2148);
  Current = DXGPROCESS::GetCurrent();
  v60 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 66;
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
LABEL_42:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v52);
    }
    return 3221225485LL;
  }
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)Size = 0LL;
  v57 = 0LL;
  v5 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v5, 0x28uLL);
  HIDWORD(v57) = 0;
  if ( !Src[1] )
  {
    if ( !LODWORD(Size[0]) )
      goto LABEL_16;
LABEL_15:
    WdLogSingleEntry3(3LL, Src[1], LODWORD(Size[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 94;
    goto LABEL_42;
  }
  if ( !LODWORD(Size[0]) )
    goto LABEL_15;
LABEL_16:
  if ( LODWORD(Size[0]) > 0x2000000 )
  {
    WdLogSingleEntry3(3LL, LODWORD(Size[0]), 0x2000000LL, -1073741811LL);
    WdLogGlobalForLineNumber = 103;
    goto LABEL_42;
  }
  v7 = v57;
  if ( !Size[1] )
  {
    if ( !(_DWORD)v57 )
      goto LABEL_23;
LABEL_22:
    WdLogSingleEntry3(3LL, Size[1], (unsigned int)v57, -1073741811LL);
    WdLogGlobalForLineNumber = 113;
    goto LABEL_42;
  }
  if ( !(_DWORD)v57 )
    goto LABEL_22;
LABEL_23:
  if ( (unsigned int)v57 > 0x2000000 )
  {
    WdLogSingleEntry3(3LL, (unsigned int)v57, 0x2000000LL, -1073741811LL);
    WdLogGlobalForLineNumber = 122;
    goto LABEL_42;
  }
  v61 = 0LL;
  v62 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v8 = (void *)operator new[](LODWORD(Size[0]), 0x4B677844u, 256LL, v6);
    v61 = v8;
    if ( !v8 )
    {
      v9 = -1073741801;
      WdLogSingleEntry2(6LL, LODWORD(Size[0]), -1073741801LL);
      WdLogGlobalForLineNumber = 144;
      v10 = LODWORD(Size[0]);
      v11 = L"Out of memory allocating 0x%I64x bytes for private driver data, returning 0x%I64x";
LABEL_28:
      DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v11, v10, -1073741801LL, 0LL, 0LL, 0LL);
LABEL_94:
      if ( v58 )
      {
        DXGPROTECTEDSESSION::DestroyProtectedSession(v58, HIDWORD(v57));
        HIDWORD(v57) = 0;
      }
      v47 = v59;
      if ( v59 )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, v47, 0);
      }
      if ( v61 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v61);
      if ( v62 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v49, (__int64)&EventProfilerExit, v50, v52);
      return (unsigned int)v9;
    }
    v12 = LODWORD(Size[0]);
    v13 = Src[1];
    v14 = (char *)Src[1] + LODWORD(Size[0]);
    if ( v14 < Src[1] || (unsigned __int64)v14 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v8, v13, v12);
    v7 = v57;
  }
  if ( v7 )
  {
    v15 = (void *)operator new[](v7, 0x4B677844u, 256LL, v6);
    v62 = v15;
    if ( !v15 )
    {
      v9 = -1073741801;
      WdLogSingleEntry2(6LL, (unsigned int)v57, -1073741801LL);
      WdLogGlobalForLineNumber = 172;
      v10 = (unsigned int)v57;
      v11 = L"Out of memory allocating 0x%I64x bytes for private runtime data, returning 0x%I64x";
      goto LABEL_28;
    }
    v16 = (unsigned int)v57;
    v17 = (const void *)Size[1];
    v18 = Size[1] + (unsigned int)v57;
    if ( v18 < Size[1] || v18 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, v17, v16);
  }
  v64 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v51, (unsigned int)Src[0], Current, &v64);
  v19 = v64;
  if ( !v64 )
  {
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 200;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v51);
    goto LABEL_42;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v63, v64);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, (__int64)v19, 1, v23, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v69, 0LL);
  if ( v9 < 0 )
  {
LABEL_47:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v63);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v51);
    goto LABEL_94;
  }
  v66 = *((_QWORD *)v19 + 235);
  if ( !v66 )
  {
    v9 = -1073741637;
    WdLogSingleEntry2(2LL, v19, -1073741637LL);
    WdLogGlobalForLineNumber = 218;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"function is called on a render only device (0x%I64x), returning 0x%I64x.",
      (__int64)v19,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_47;
  }
  v24 = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, v24, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65);
  v25 = HIDWORD(Src[0]);
  v26 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v26);
  v27 = (v25 >> 6) & 0xFFFFFF;
  v28 = v25 >> 30;
  if ( v27 >= *((_DWORD *)v60 + 74) )
    goto LABEL_56;
  v29 = *((_QWORD *)v60 + 35);
  v30 = *(_DWORD *)(v29 + 16LL * v27 + 8);
  if ( v28 != ((v30 >> 5) & 3) )
    goto LABEL_56;
  if ( (v30 & 0x2000) != 0 )
    goto LABEL_56;
  v31 = v30 & 0x1F;
  if ( !v31 )
    goto LABEL_56;
  if ( v31 != 11 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_56:
    v32 = 0LL;
    goto LABEL_57;
  }
  v32 = *(_QWORD *)(v29 + 16LL * v27);
LABEL_57:
  _InterlockedDecrement(v26 + 4);
  ExReleasePushLockSharedEx(v26, 0LL);
  KeLeaveCriticalRegion();
  if ( !v32 )
  {
    v33 = (__int64)v60;
    WdLogSingleEntry2(2LL, v60, HIDWORD(Src[0]));
    WdLogGlobalForLineNumber = 240;
    v34 = L"Invalid sync object, process 0x%I64x, handle 0x%I64x";
LABEL_59:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v34, v33, HIDWORD(Src[0]), 0LL, 0LL, 0LL);
LABEL_60:
    v9 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65);
    goto LABEL_47;
  }
  v35 = *(struct DXGDEVICE **)(v32 + 16);
  v36 = v64;
  if ( v35 != v64 )
  {
    WdLogSingleEntry3(2LL, HIDWORD(Src[0]), v35, v64);
    WdLogGlobalForLineNumber = 253;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%x object belongs to a different device 0x%p that 0x%p passed.",
      HIDWORD(Src[0]),
      *(_QWORD *)(v32 + 16),
      (__int64)v36,
      0LL,
      0LL);
    goto LABEL_60;
  }
  v37 = *(_QWORD *)(v32 + 32);
  v59 = (struct DXGSYNCOBJECT *)v37;
  _InterlockedAdd((volatile signed __int32 *)(v37 + 24), 1u);
  if ( *(_DWORD *)(v37 + 404) != 5 )
  {
    v33 = (__int64)v60;
    WdLogSingleEntry2(2LL, v60, HIDWORD(Src[0]));
    WdLogGlobalForLineNumber = 275;
    v34 = L"not monitored fence object, process 0x%I64x, handle 0x%I64x";
    goto LABEL_59;
  }
  if ( (*(_DWORD *)(v37 + 212) & 2) == 0 )
  {
    v38 = v59;
    WdLogSingleEntry2(2LL, v59, -1073741811LL);
    WdLogGlobalForLineNumber = 284;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"not NT shared fence: Protected session's sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      (__int64)v38,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_60;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65);
  v9 = ADAPTER_DISPLAY::CreateProtectedSession(*(DXGADAPTER ***)(v66 + 3120), &v59, &v61, Size[0], &v62, v57, &v58);
  if ( v9 < 0 )
  {
    if ( v58 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 302;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProtectedSession == NULL", 302LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_47;
  }
  if ( v59 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 309;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pSyncObject == NULL", 309LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v61 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 310;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pKMPrivateDriverData == NULL", 310LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v62 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 311;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pKMPrivateRuntimeData == NULL", 311LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = DXGPROTECTEDSESSION::Open(v58, (unsigned int *)&v57 + 1);
  if ( v9 < 0 )
    goto LABEL_47;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v58 + 20, 0xFFFFFFFF) <= 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 328;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"c > 0", 328LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !HIDWORD(v57) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 334;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KMCreateProtectedSession.hHandle",
      334LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v63);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v51);
  v39 = (void *)(v67 + 36);
  if ( v67 + 36 >= MmUserProbeAddress )
    v39 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v39, (char *)&v57 + 4, 4uLL);
  v40 = HIDWORD(v57);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v26);
  v41 = ((unsigned int)v40 >> 6) & 0xFFFFFF;
  v42 = v60;
  if ( (unsigned int)v41 < *((_DWORD *)v60 + 74) )
  {
    v43 = *((_QWORD *)v60 + 35);
    if ( (((unsigned int)v40 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v41 + 8) & 0x60)
      && (*(_DWORD *)(v43 + 16 * v41 + 8) & 0x1F) != 0 )
    {
      v44 = 2 * ((v40 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v43 + 8 * v44 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)v42 + 35) + 8 * v44 + 8) &= ~0x2000u;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v26 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v26, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit, v46, v52);
  return 0LL;
}
