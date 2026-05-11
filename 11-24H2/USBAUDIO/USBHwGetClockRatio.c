/*
 * XREFs of USBHwGetClockRatio @ 0x140001870
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x140001530 (USBCaptureBytePosition.c)
 * Callees:
 *     UsbHwFrameCountTimestamp @ 0x140001ED0 (UsbHwFrameCountTimestamp.c)
 *     WPP_RECORDER_AND_TRACE_SF_did @ 0x14000D03C (WPP_RECORDER_AND_TRACE_SF_did.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall USBHwGetClockRatio(union _LARGE_INTEGER a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v3; // r13
  KSPIN_LOCK *v4; // r14
  int v5; // esi
  union _LARGE_INTEGER v6; // rbx
  unsigned __int64 v7; // r12
  int v8; // r15d
  KIRQL v9; // al
  KIRQL v10; // di
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // rbx
  char v13; // r13
  LARGE_INTEGER v14; // rax
  __int64 v15; // rbx
  KIRQL v16; // al
  __int64 v17; // rcx
  KIRQL v18; // si
  __int64 v19; // rcx
  int v20; // edi
  LARGE_INTEGER v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rcx
  LARGE_INTEGER v24; // rax
  unsigned __int64 v25; // rbx
  int v26; // edx
  int v27; // r8d
  __int64 v28; // rax
  __int128 v30; // xmm0
  LARGE_INTEGER v31; // rax
  __int128 v32; // xmm0
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  int v36; // r8d
  DWORD v37; // ebx
  union _LARGE_INTEGER v38; // rsi
  DWORD v39; // [rsp+60h] [rbp-39h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-31h] BYREF
  int v41; // [rsp+70h] [rbp-29h] BYREF
  int v42; // [rsp+74h] [rbp-25h]
  unsigned __int64 v43; // [rsp+78h] [rbp-21h]
  union _LARGE_INTEGER v44; // [rsp+80h] [rbp-19h] BYREF
  union _LARGE_INTEGER v45; // [rsp+88h] [rbp-11h] BYREF
  union _LARGE_INTEGER v46; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp-1h]
  __int64 v48; // [rsp+A0h] [rbp+7h]
  __int64 v49; // [rsp+A8h] [rbp+Fh]
  union _LARGE_INTEGER v50; // [rsp+100h] [rbp+67h] BYREF
  _OWORD *v51; // [rsp+108h] [rbp+6Fh]
  _QWORD *v52; // [rsp+110h] [rbp+77h]
  int v53; // [rsp+118h] [rbp+7Fh]

  v52 = a3;
  v51 = a2;
  v50 = a1;
  v4 = (KSPIN_LOCK *)(a1.QuadPart + 112);
  v5 = 0;
  v49 = *(_QWORD *)(a1.QuadPart + 152);
  v3 = v49;
  v6 = a1;
  v53 = 0;
  v7 = 0LL;
  v39 = 0;
  v43 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v8 = 0;
  *a3 = 0LL;
  *a2 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1.QuadPart + 112));
  v10 = v9;
  *(_BYTE *)(v3 + 12) = 1;
  if ( !*(_DWORD *)(v3 + 24) )
  {
    KeReleaseSpinLock(v4, v9);
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))UsbHwFrameCountTimestamp)(
           (union _LARGE_INTEGER)v6.QuadPart,
           &v39,
           &PerformanceFrequency);
    LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v36) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    v37 = v39;
    v38 = PerformanceFrequency;
    if ( (_BYTE)v35 || (_BYTE)v36 )
      WPP_RECORDER_AND_TRACE_SF_did(WPP_GLOBAL_Control->AttachedDevice, v35, v36, WPP_GLOBAL_Control->DeviceExtension);
    v10 = KeAcquireSpinLockRaiseToDpc(v4);
    if ( v8 >= 0 )
    {
      *(_DWORD *)(v3 + 24) = v37;
      *(union _LARGE_INTEGER *)(v3 + 32) = v38;
    }
    goto LABEL_24;
  }
  if ( *(_DWORD *)(v3 + 40) )
    goto LABEL_25;
  PerformanceFrequency.QuadPart = 0LL;
  v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = -1073741275;
  v12 = ((10000000 * HIDWORD(v11.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
      + (10000000LL * v11.LowPart
       + ((10000000 * HIDWORD(v11.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32))
      / PerformanceFrequency.QuadPart
      - *(_QWORD *)(v3 + 32);
  KeReleaseSpinLock(v4, v10);
  if ( v12 > 0x7A120 )
  {
    v42 = 0;
    v13 = 0;
    v44.QuadPart = 0LL;
    v14 = KeQueryPerformanceCounter(&v44);
    v48 = *(_QWORD *)(v50.QuadPart + 16);
    v15 = v48;
    v47 = ((10000000 * HIDWORD(v14.QuadPart) / (unsigned __int64)v44.QuadPart) << 32)
        + (10000000LL * v14.LowPart + ((10000000 * HIDWORD(v14.QuadPart) % (unsigned __int64)v44.QuadPart) << 32))
        / v44.QuadPart;
    v16 = KeAcquireSpinLockRaiseToDpc(v4);
    v17 = *(_QWORD *)(v15 + 16);
    v18 = v16;
    v39 = 0;
    v19 = *(_QWORD *)(*(_QWORD *)(v17 + 72) + 56LL);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, DWORD *))(v19 + 40))(*(_QWORD *)(v19 + 8), &v39);
      if ( v20 >= 0 )
      {
        PerformanceFrequency.LowPart = v39;
        while ( !v13 )
        {
          v45.QuadPart = 0LL;
          v21 = KeQueryPerformanceCounter(&v45);
          v41 = 0;
          v22 = ((10000000 * HIDWORD(v21.QuadPart) / (unsigned __int64)v45.QuadPart) << 32)
              + (10000000LL * v21.LowPart + ((10000000 * HIDWORD(v21.QuadPart) % (unsigned __int64)v45.QuadPart) << 32))
              / v45.QuadPart;
          v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 72LL) + 56LL);
          if ( v23 )
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD, int *))(v23 + 40))(*(_QWORD *)(v23 + 8), &v41);
            if ( v20 >= 0 )
              v42 = v41;
          }
          else
          {
            v20 = -1073741637;
          }
          v46.QuadPart = 0LL;
          v24 = KeQueryPerformanceCounter(&v46);
          v25 = ((10000000 * HIDWORD(v24.QuadPart) / (unsigned __int64)v46.QuadPart) << 32)
              + (10000000LL * v24.LowPart + ((10000000 * HIDWORD(v24.QuadPart) % (unsigned __int64)v46.QuadPart) << 32))
              / v46.QuadPart;
          KeReleaseSpinLock(v4, v18);
          if ( v42 == PerformanceFrequency.LowPart )
          {
            if ( v25 - v47 > 0x5208 )
            {
              v20 = -1073741275;
              v18 = KeAcquireSpinLockRaiseToDpc(v4);
              break;
            }
          }
          else
          {
            v20 = -1073741275;
            if ( v42 == PerformanceFrequency.LowPart + 1 && v25 - v47 < 0x2904 && v25 - v22 < 0x7D0 )
            {
              v20 = 0;
              v53 = v42;
              v13 = 1;
              v43 = (v25 + v22) >> 1;
            }
          }
          v18 = KeAcquireSpinLockRaiseToDpc(v4);
          if ( v20 < 0 )
            break;
          v15 = v48;
        }
        v7 = v43;
      }
    }
    else
    {
      v20 = -1073741637;
    }
    KeReleaseSpinLock(v4, v18);
    v8 = v20;
    LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v27) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v26 || (_BYTE)v27 )
    {
      v5 = v53;
      WPP_RECORDER_AND_TRACE_SF_did(WPP_GLOBAL_Control->AttachedDevice, v26, v27, WPP_GLOBAL_Control->DeviceExtension);
    }
    else
    {
      v5 = v53;
    }
    v3 = v49;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(v4);
  if ( v8 < 0
    || v5 == *(_DWORD *)(v3 + 24)
    || (v33 = (v7 - *(_QWORD *)(v3 + 32)) / (unsigned int)(v5 - *(_DWORD *)(v3 + 24)), v33 - 9500 > 0x3E8) )
  {
LABEL_24:
    v6 = v50;
    goto LABEL_25;
  }
  v34 = *(_QWORD *)(v3 + 16);
  v6 = v50;
  *(_DWORD *)(v3 + 40) = v5;
  *(_QWORD *)(v3 + 48) = v7;
  if ( v34 )
    v33 = (v34 + v33) >> 1;
  *(_QWORD *)(v3 + 16) = v33;
LABEL_25:
  v28 = *(_QWORD *)(v3 + 16);
  if ( v28 )
  {
    if ( *(_DWORD *)(v3 + 24) )
    {
      v30 = *(_OWORD *)(v3 + 24);
      *v52 = v28;
      *v51 = v30;
      if ( *(_QWORD *)(v3 + 48) )
      {
        v50.QuadPart = 0LL;
        v31 = KeQueryPerformanceCounter(&v50);
        if ( ((10000000 * HIDWORD(v31.QuadPart) / (unsigned __int64)v50.QuadPart) << 32)
           + (10000000LL * v31.LowPart + ((10000000 * HIDWORD(v31.QuadPart) % (unsigned __int64)v50.QuadPart) << 32))
           / v50.QuadPart
           - *(_QWORD *)(v3 + 48) > 0xF4240 )
        {
          v32 = *(_OWORD *)(v3 + 40);
          *(_DWORD *)(v3 + 40) = 0;
          *(_QWORD *)(v3 + 48) = 0LL;
          *(_OWORD *)(v3 + 24) = v32;
        }
      }
    }
  }
  *(_BYTE *)(v3 + 12) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v6.QuadPart + 112), v10);
  return (unsigned int)v8;
}
