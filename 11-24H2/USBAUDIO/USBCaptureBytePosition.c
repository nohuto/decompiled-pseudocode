/*
 * XREFs of USBCaptureBytePosition @ 0x140001530
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetClockRatio @ 0x140001870 (USBHwGetClockRatio.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1400088B0 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall USBCaptureBytePosition(struct _KSPIN *a1, union _LARGE_INTEGER *a2)
{
  union _LARGE_INTEGER *Context; // rdi
  union _LARGE_INTEGER v4; // r15
  union _LARGE_INTEGER v5; // r13
  KSPIN_LOCK *p_QuadPart; // rsi
  NTSTATUS AvailableByteCount; // r14d
  KIRQL v8; // al
  KIRQL v9; // bp
  KIRQL v10; // al
  union _LARGE_INTEGER v11; // rax
  union _LARGE_INTEGER v12; // rax
  __int64 v13; // rcx
  union _LARGE_INTEGER v14; // r8
  __int64 LowPart; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  LARGE_INTEGER v19; // rax
  DWORD v20; // r8d
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r15
  union _LARGE_INTEGER v26; // rax
  union _LARGE_INTEGER *v27; // rdi
  union _LARGE_INTEGER v29; // rcx
  __int128 v30; // [rsp+50h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+8h] BYREF
  LONG v32; // [rsp+A8h] [rbp+10h] BYREF
  LONG v33; // [rsp+B0h] [rbp+18h] BYREF

  Context = (union _LARGE_INTEGER *)a1->Context;
  PerformanceFrequency.QuadPart = 0LL;
  v4.QuadPart = 0LL;
  v5 = Context[19];
  v33 = 0;
  v32 = 0;
  v30 = 0LL;
  p_QuadPart = (KSPIN_LOCK *)&Context[14].QuadPart;
  AvailableByteCount = KsPinGetAvailableByteCount(a1, &v33, &v32);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Context[14].QuadPart);
  v9 = v8;
  if ( !*(_BYTE *)(v5.QuadPart + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&Context[14].QuadPart, v8);
    USBHwGetClockRatio(Context, &v30, &PerformanceFrequency);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Context[14].QuadPart);
    v4 = PerformanceFrequency;
    v9 = v10;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  v11 = Context[10];
  a2[3] = v11;
  a2[2] = v11;
  if ( BYTE5(Context[5].QuadPart) )
  {
    v12 = Context[2];
    PerformanceFrequency.LowPart = 0;
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12.QuadPart + 16) + 72LL) + 56LL);
    if ( v13 )
    {
      AvailableByteCount = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(v13 + 40))(
                             *(_QWORD *)(v13 + 8),
                             &PerformanceFrequency);
      if ( AvailableByteCount >= 0 )
      {
        v14 = Context[11];
        LowPart = PerformanceFrequency.LowPart;
        a2[2] = v14;
        v16 = *(unsigned int *)(v5.QuadPart + 120);
        if ( LowPart - v16 >= 0 )
        {
          v17 = *(unsigned int *)(v5.QuadPart + 116);
          if ( v4.QuadPart )
          {
            if ( (unsigned int)v16 <= (unsigned int)v30 )
              v18 = *((_QWORD *)&v30 + 1) - v4.QuadPart * (unsigned int)(v30 - v16);
            else
              v18 = *((_QWORD *)&v30 + 1) + v4.QuadPart * (unsigned int)(v16 - v30);
            PerformanceFrequency.QuadPart = 0LL;
            v19 = KeQueryPerformanceCounter(&PerformanceFrequency);
            v20 = PerformanceFrequency.LowPart;
            v21 = ((10000000 * HIDWORD(v19.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
                + (10000000LL * v19.LowPart
                 + ((10000000 * HIDWORD(v19.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32))
                / PerformanceFrequency.QuadPart;
            v22 = v21;
            if ( v18 <= v21 )
              v22 = v18;
            v23 = v21 - v22;
            v24 = (v23 * v17 / 0x989680) << 23;
            v25 = v23 * v17 / 0x989680;
            LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
            LOBYTE(v20) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                       && LOWORD(WPP_GLOBAL_Control->DeviceType);
            if ( (_BYTE)v24 || (_BYTE)v20 )
              WPP_RECORDER_AND_TRACE_SF_ii(
                WPP_GLOBAL_Control->AttachedDevice,
                v24,
                v20,
                WPP_GLOBAL_Control->DeviceExtension);
            a2[2].QuadPart += v25;
            v14 = a2[2];
          }
          else
          {
            v14.QuadPart += (int)v17 * ((int)LowPart - (int)v16) / 0x3E8u;
            a2[2] = v14;
          }
        }
        v26 = Context[12];
        if ( v26.QuadPart > (unsigned __int64)v14.QuadPart )
          a2[2] = v26;
      }
    }
    else
    {
      AvailableByteCount = -1073741637;
    }
    v27 = Context + 12;
  }
  else
  {
    v29 = Context[12];
    v27 = Context + 12;
    if ( v29.QuadPart > (unsigned __int64)v11.QuadPart )
      a2[2] = v29;
  }
  a2[4] = KeQueryPerformanceCounter(0LL);
  *v27 = a2[2];
  KeReleaseSpinLock(p_QuadPart, v9);
  return (unsigned int)AvailableByteCount;
}
