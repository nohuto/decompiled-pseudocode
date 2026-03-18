/*
 * XREFs of NtDxgkCancelPresents @ 0x1403BE860
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VidSchCancelPresentAtFlips@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@U_LUID@@_K2W4D3DKMT_CANCEL_PRESENTS_OPERATION@@U_D3DKMT_CANCEL_PRESENTS_FLAGS@@PEAX@Z @ 0x140077928 (-VidSchCancelPresentAtFlips@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@U_LUID@@_K2W4D3DKMT_CANCEL_P.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall NtDxgkCancelPresents(__int64 a1)
{
  _OWORD *v1; // rbx
  struct _KTHREAD **Current; // rsi
  __int64 v3; // rbx
  __int64 v4; // r9
  struct DXGDEVICE *v5; // rsi
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  const wchar_t *v10; // r9
  const wchar_t *v11; // r9
  struct DXGDEVICE *v12; // [rsp+50h] [rbp-128h] BYREF
  struct DXGDEVICE *v13; // [rsp+58h] [rbp-120h] BYREF
  unsigned int v14[4]; // [rsp+60h] [rbp-118h] BYREF
  __int128 v15; // [rsp+70h] [rbp-108h]
  __int128 v16; // [rsp+80h] [rbp-F8h]
  _BYTE v17[16]; // [rsp+90h] [rbp-E8h] BYREF
  _BYTE v18[8]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-D0h]
  char v20; // [rsp+B0h] [rbp-C8h]
  _BYTE v21[160]; // [rsp+C0h] [rbp-B8h] BYREF

  v1 = (_OWORD *)a1;
  v13 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 959;
    v11 = L"Invalid DXGPROCESS. Returning 0x%I64x";
LABEL_32:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v11, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return v8;
  }
  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( (unsigned __int64)v1 >= MmUserProbeAddress )
      v1 = (_OWORD *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v14, v1, 0x30uLL);
  }
  else
  {
    *(_OWORD *)v14 = *v1;
    v15 = v1[1];
    v16 = v1[2];
  }
  if ( v14[0] != 48 )
  {
    v8 = -1073741811;
    WdLogSingleEntry3(2LL, v14[0], 48LL, -1073741811LL);
    WdLogGlobalForLineNumber = 989;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid cbSize:0x%I64x specified. Expected cbsize:0x%I64x. Returning:0x%I64x",
      v14[0],
      48LL,
      -1073741811LL,
      0LL,
      0LL);
    return v8;
  }
  if ( !*((_QWORD *)&v15 + 1) )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 995;
    v11 = L"Invalid CompSurfaceLuid for Cancel Presents, returning 0x%I64x";
    goto LABEL_32;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v12, v14[1], Current, &v13);
  if ( !v13 )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, v14[1], -1073741811LL);
    WdLogGlobalForLineNumber = 1003;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v14[1],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v12 )
    {
LABEL_15:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v12 + 2), v12);
    }
    return v8;
  }
  v3 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
  if ( (*(_DWORD *)(v3 + 2976) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL));
    WdLogGlobalForLineNumber = 1010;
    v10 = L"Presentation is not supported on MCDM DXGADAPTER: 0x%I64x";
LABEL_19:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v3, 0LL, 0LL, 0LL, 0LL);
    if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v12 + 2), v12);
    return (unsigned int)-1073741811;
  }
  if ( *(_BYTE *)(v3 + 209) )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL));
    WdLogGlobalForLineNumber = 1016;
    v10 = L"NtDxgkCancelPresents is not currently supported on para-v adapter: 0x%I64x";
    goto LABEL_19;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, v13);
  v19 = v3;
  v20 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
  if ( *(_DWORD *)(v3 + 200) == 1 )
  {
    v5 = v13;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v21, (__int64)v13, 2, v4, 0);
    v6 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v21, 0LL);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = VIDSCH_EXPORT::VidSchCancelPresentAtFlips(
             *(_QWORD *)(*(_QWORD *)(v3 + 3128) + 736LL),
             *((_QWORD *)v5 + 100),
             *((__int64 *)&v15 + 1),
             v16,
             v15,
             v14[3],
             v14[2],
             *((__int64 *)&v16 + 1));
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
      if ( v12 )
        goto LABEL_15;
      return v8;
    }
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 1036;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire CoreDeviceAccess, returning 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v12);
  }
  else
  {
    LODWORD(v7) = -1073741823;
    WdLogSingleEntry2(2LL, v3, -1073741823LL);
    WdLogGlobalForLineNumber = 1027;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGADAPTER: 0x%I64x stopped, returning 0x%I64x",
      v3,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v12 + 2), v12);
  }
  return (unsigned int)v7;
}
