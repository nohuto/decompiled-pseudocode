/*
 * XREFs of DxgkCreateProtectedSession @ 0x1401F0700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031428 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034E08 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140076CD4 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x14018670C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1401EFB10 (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401F0228 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateProtectedSession(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _KTHREAD **Current; // r13
  const void *v5; // rdx
  unsigned int v6; // eax
  void *v7; // rcx
  int v8; // esi
  __int64 v9; // rax
  const wchar_t *v10; // r9
  size_t v11; // r9
  const void *v12; // rdx
  char *v13; // r8
  void *v14; // rcx
  size_t v15; // r9
  const void *v16; // rdx
  ULONG64 v17; // r8
  struct DXGDEVICE *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // r9
  struct DXGGLOBAL *v23; // rax
  unsigned int v24; // esi
  struct _KTHREAD **v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // esi
  struct _KTHREAD *v28; // rdx
  unsigned int v29; // ecx
  int v30; // ecx
  __int64 v31; // r14
  __int64 v32; // rsi
  const wchar_t *v33; // r9
  struct DXGDEVICE *v34; // r8
  struct DXGDEVICE *v35; // rsi
  struct DXGSYNCOBJECT *v36; // r14
  struct DXGSYNCOBJECT *v37; // r14
  void *v38; // rcx
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  struct _KTHREAD **v41; // r14
  struct _KTHREAD *v42; // r8
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // r8
  struct DXGSYNCOBJECT *v46; // r14
  DXGGLOBAL *Global; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  char v50[8]; // [rsp+50h] [rbp-188h] BYREF
  int v51; // [rsp+58h] [rbp-180h] BYREF
  __int64 v52; // [rsp+60h] [rbp-178h]
  char v53; // [rsp+68h] [rbp-170h]
  void *Src[2]; // [rsp+70h] [rbp-168h] BYREF
  size_t Size[2]; // [rsp+80h] [rbp-158h]
  size_t v56; // [rsp+90h] [rbp-148h] BYREF
  DXGPROTECTEDSESSION *v57; // [rsp+98h] [rbp-140h] BYREF
  struct DXGSYNCOBJECT *v58; // [rsp+A0h] [rbp-138h] BYREF
  struct _KTHREAD **v59; // [rsp+A8h] [rbp-130h]
  void *v60; // [rsp+B0h] [rbp-128h] BYREF
  void *v61; // [rsp+B8h] [rbp-120h] BYREF
  _BYTE v62[16]; // [rsp+C0h] [rbp-118h] BYREF
  struct DXGDEVICE *v63; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v64[16]; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-F0h]
  ULONG64 v66; // [rsp+F0h] [rbp-E8h]
  ULONG64 v67; // [rsp+F8h] [rbp-E0h]
  _BYTE v68[160]; // [rsp+100h] [rbp-D8h] BYREF

  v66 = a1;
  v67 = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 57;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"PsGetCurrentThreadPreviousMode() == UserMode",
      57LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v51 = -1;
  v52 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2148;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2148);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 2148);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v59 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 66;
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
LABEL_42:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v51);
    }
    return 3221225485LL;
  }
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)Size = 0LL;
  v56 = 0LL;
  v5 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v5, 0x28uLL);
  HIDWORD(v56) = 0;
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
  v6 = v56;
  if ( !Size[1] )
  {
    if ( !(_DWORD)v56 )
      goto LABEL_23;
LABEL_22:
    WdLogSingleEntry3(3LL, Size[1], (unsigned int)v56, -1073741811LL);
    WdLogGlobalForLineNumber = 113;
    goto LABEL_42;
  }
  if ( !(_DWORD)v56 )
    goto LABEL_22;
LABEL_23:
  if ( (unsigned int)v56 > 0x2000000 )
  {
    WdLogSingleEntry3(3LL, (unsigned int)v56, 0x2000000LL, -1073741811LL);
    WdLogGlobalForLineNumber = 122;
    goto LABEL_42;
  }
  v60 = 0LL;
  v61 = 0LL;
  v58 = 0LL;
  v57 = 0LL;
  if ( LODWORD(Size[0]) )
  {
    v7 = (void *)operator new[](LODWORD(Size[0]), 0x4B677844u, 256LL);
    v60 = v7;
    if ( !v7 )
    {
      v8 = -1073741801;
      WdLogSingleEntry2(6LL, LODWORD(Size[0]), -1073741801LL);
      WdLogGlobalForLineNumber = 144;
      v9 = LODWORD(Size[0]);
      v10 = L"Out of memory allocating 0x%I64x bytes for private driver data, returning 0x%I64x";
LABEL_28:
      DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v10, v9, -1073741801LL, 0LL, 0LL, 0LL);
LABEL_94:
      if ( v57 )
      {
        DXGPROTECTEDSESSION::DestroyProtectedSession(v57, HIDWORD(v56));
        HIDWORD(v56) = 0;
      }
      v46 = v58;
      if ( v58 )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(Global, v46, 0, 0);
      }
      if ( v60 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v60);
      if ( v61 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v61);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v48, (__int64)&EventProfilerExit, v49, v51);
      return (unsigned int)v8;
    }
    v11 = LODWORD(Size[0]);
    v12 = Src[1];
    v13 = (char *)Src[1] + LODWORD(Size[0]);
    if ( v13 < Src[1] || (unsigned __int64)v13 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v7, v12, v11);
    v6 = v56;
  }
  if ( v6 )
  {
    v14 = (void *)operator new[](v6, 0x4B677844u, 256LL);
    v61 = v14;
    if ( !v14 )
    {
      v8 = -1073741801;
      WdLogSingleEntry2(6LL, (unsigned int)v56, -1073741801LL);
      WdLogGlobalForLineNumber = 172;
      v9 = (unsigned int)v56;
      v10 = L"Out of memory allocating 0x%I64x bytes for private runtime data, returning 0x%I64x";
      goto LABEL_28;
    }
    v15 = (unsigned int)v56;
    v16 = (const void *)Size[1];
    v17 = Size[1] + (unsigned int)v56;
    if ( v17 < Size[1] || v17 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, v16, v15);
  }
  v63 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v50, (unsigned int)Src[0], Current, &v63);
  v18 = v63;
  if ( !v63 )
  {
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 200;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v50);
    goto LABEL_42;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v62, v63);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v18, 1, v22, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68, 0LL);
  if ( v8 < 0 )
  {
LABEL_47:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v62);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v50);
    goto LABEL_94;
  }
  v65 = *((_QWORD *)v18 + 237);
  if ( !v65 )
  {
    v8 = -1073741637;
    WdLogSingleEntry2(2LL, v18, -1073741637LL);
    WdLogGlobalForLineNumber = 218;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"function is called on a render only device (0x%I64x), returning 0x%I64x.",
      (__int64)v18,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_47;
  }
  v23 = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64, v23, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v64);
  v24 = HIDWORD(Src[0]);
  v25 = Current + 31;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v25);
  v26 = (v24 >> 6) & 0xFFFFFF;
  v27 = v24 >> 30;
  if ( v26 >= *((_DWORD *)v59 + 74) )
    goto LABEL_56;
  v28 = v59[35];
  v29 = *((_DWORD *)v28 + 4 * v26 + 2);
  if ( v27 != ((v29 >> 5) & 3) )
    goto LABEL_56;
  if ( (v29 & 0x2000) != 0 )
    goto LABEL_56;
  v30 = v29 & 0x1F;
  if ( !v30 )
    goto LABEL_56;
  if ( v30 != 11 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_56:
    v31 = 0LL;
    goto LABEL_57;
  }
  v31 = *((_QWORD *)v28 + 2 * v26);
LABEL_57:
  _InterlockedDecrement((volatile signed __int32 *)v25 + 4);
  ExReleasePushLockSharedEx(v25, 0LL);
  KeLeaveCriticalRegion();
  if ( !v31 )
  {
    v32 = (__int64)v59;
    WdLogSingleEntry2(2LL, v59, HIDWORD(Src[0]));
    WdLogGlobalForLineNumber = 240;
    v33 = L"Invalid sync object, process 0x%I64x, handle 0x%I64x";
LABEL_59:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v33, v32, HIDWORD(Src[0]), 0LL, 0LL, 0LL);
LABEL_60:
    v8 = -1073741811;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64);
    goto LABEL_47;
  }
  v34 = *(struct DXGDEVICE **)(v31 + 16);
  v35 = v63;
  if ( v34 != v63 )
  {
    WdLogSingleEntry3(2LL, HIDWORD(Src[0]), v34, v63);
    WdLogGlobalForLineNumber = 253;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%x object belongs to a different device 0x%p that 0x%p passed.",
      HIDWORD(Src[0]),
      *(_QWORD *)(v31 + 16),
      (__int64)v35,
      0LL,
      0LL);
    goto LABEL_60;
  }
  v36 = *(struct DXGSYNCOBJECT **)(v31 + 32);
  v58 = v36;
  DXGSYNCOBJECT::AddReference(v36);
  if ( *((_DWORD *)v36 + 101) != 5 )
  {
    v32 = (__int64)v59;
    WdLogSingleEntry2(2LL, v59, HIDWORD(Src[0]));
    WdLogGlobalForLineNumber = 275;
    v33 = L"not monitored fence object, process 0x%I64x, handle 0x%I64x";
    goto LABEL_59;
  }
  if ( (*((_DWORD *)v36 + 53) & 2) == 0 )
  {
    v37 = v58;
    WdLogSingleEntry2(2LL, v58, -1073741811LL);
    WdLogGlobalForLineNumber = 284;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"not NT shared fence: Protected session's sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      (__int64)v37,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_60;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v64);
  v8 = ADAPTER_DISPLAY::CreateProtectedSession(*(DXGADAPTER ***)(v65 + 3120), &v58, &v60, Size[0], &v61, v56, &v57);
  if ( v8 < 0 )
  {
    if ( v57 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 302;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProtectedSession == NULL", 302LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_47;
  }
  if ( v58 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 309;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pSyncObject == NULL", 309LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v60 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 310;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pKMPrivateDriverData == NULL", 310LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v61 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 311;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pKMPrivateRuntimeData == NULL", 311LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = DXGPROTECTEDSESSION::Open(v57, (unsigned int *)&v56 + 1);
  if ( v8 < 0 )
    goto LABEL_47;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v57 + 20, 0xFFFFFFFF) <= 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 328;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"c > 0", 328LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !HIDWORD(v56) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 334;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"KMCreateProtectedSession.hHandle",
      334LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v62);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v50);
  v38 = (void *)(v66 + 36);
  if ( v66 + 36 >= MmUserProbeAddress )
    v38 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v38, (char *)&v56 + 4, 4uLL);
  v39 = HIDWORD(v56);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v25);
  v40 = ((unsigned int)v39 >> 6) & 0xFFFFFF;
  v41 = v59;
  if ( (unsigned int)v40 < *((_DWORD *)v59 + 74) )
  {
    v42 = v59[35];
    if ( (((unsigned int)v39 >> 25) & 0x60) == (*((_BYTE *)v42 + 16 * v40 + 8) & 0x60)
      && (*((_DWORD *)v42 + 4 * v40 + 2) & 0x1F) != 0 )
    {
      v43 = 2 * ((v39 >> 6) & 0xFFFFFF);
      if ( (*((_DWORD *)v42 + 2 * v43 + 2) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)v41[35] + 2 * v43 + 2) &= ~0x2000u;
    }
  }
  v25[1] = 0LL;
  ExReleasePushLockExclusiveEx(v25, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit, v45, v51);
  return 0LL;
}
