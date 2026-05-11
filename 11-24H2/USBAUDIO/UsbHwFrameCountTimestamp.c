/*
 * XREFs of UsbHwFrameCountTimestamp @ 0x140001ED0
 * Callers:
 *     USBHwGetClockRatio @ 0x140001870 (USBHwGetClockRatio.c)
 * Callees:
 *     USBMidiInGetCurrentTime @ 0x140002170 (USBMidiInGetCurrentTime.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbHwFrameCountTimestamp(__int64 a1, DWORD *a2, unsigned __int64 *a3)
{
  char v4; // r14
  DWORD LowPart; // r13d
  __int64 CurrentTime; // rax
  __int64 v7; // rsi
  KSPIN_LOCK *v8; // rbp
  __int64 v9; // r12
  KIRQL v10; // al
  __int64 v11; // rcx
  KIRQL v12; // di
  __int64 v13; // rcx
  int v14; // ebx
  LARGE_INTEGER v15; // rax
  union _LARGE_INTEGER v16; // r8
  unsigned __int64 v17; // r15
  __int64 v18; // rcx
  LARGE_INTEGER v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 *v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-58h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+8h] BYREF
  DWORD *v25; // [rsp+88h] [rbp+10h]
  unsigned __int64 *v26; // [rsp+90h] [rbp+18h]
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v26 = a3;
  v25 = a2;
  v4 = 0;
  LowPart = 0;
  CurrentTime = USBMidiInGetCurrentTime();
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (KSPIN_LOCK *)(a1 + 112);
  v23 = v7;
  v9 = CurrentTime;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  v11 = *(_QWORD *)(v7 + 16);
  v12 = v10;
  v27 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 72) + 56LL);
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(v13 + 40))(*(_QWORD *)(v13 + 8), &v27);
    if ( v14 >= 0 )
    {
      while ( !v4 )
      {
        PerformanceFrequency.QuadPart = 0LL;
        v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v16 = PerformanceFrequency;
        PerformanceFrequency.LowPart = 0;
        v17 = ((10000000 * HIDWORD(v15.QuadPart) / (unsigned __int64)v16.QuadPart) << 32)
            + (10000000LL * v15.LowPart + ((10000000 * HIDWORD(v15.QuadPart) % (unsigned __int64)v16.QuadPart) << 32))
            / v16.QuadPart;
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 72LL) + 56LL);
        if ( v18 )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(v18 + 40))(
                  *(_QWORD *)(v18 + 8),
                  &PerformanceFrequency);
          if ( v14 >= 0 )
            LowPart = PerformanceFrequency.LowPart;
        }
        else
        {
          v14 = -1073741637;
        }
        PerformanceFrequency.QuadPart = 0LL;
        v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v20 = ((10000000 * HIDWORD(v19.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
            + (10000000LL * v19.LowPart
             + ((10000000 * HIDWORD(v19.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32))
            / PerformanceFrequency.QuadPart;
        KeReleaseSpinLock(v8, v12);
        if ( LowPart == v27 )
        {
          if ( v20 - v9 > 0x5208 )
          {
            v14 = -1073741275;
            v12 = KeAcquireSpinLockRaiseToDpc(v8);
            break;
          }
        }
        else
        {
          v14 = -1073741275;
          if ( LowPart == v27 + 1 && v20 - v9 < 0x2904 && v20 - v17 < 0x7D0 )
          {
            v14 = 0;
            v22 = v26;
            v4 = 1;
            *v25 = LowPart;
            *v22 = (v20 + v17) >> 1;
          }
        }
        v12 = KeAcquireSpinLockRaiseToDpc(v8);
        if ( v14 < 0 )
          break;
        v7 = v23;
      }
    }
  }
  else
  {
    v14 = -1073741637;
  }
  KeReleaseSpinLock(v8, v12);
  return (unsigned int)v14;
}
