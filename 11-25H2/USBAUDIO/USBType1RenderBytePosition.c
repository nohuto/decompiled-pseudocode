/*
 * XREFs of USBType1RenderBytePosition @ 0x140001010
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetClockRatio @ 0x140001870 (USBHwGetClockRatio.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x140008E00 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     WPP_RECORDER_AND_TRACE_SF_di @ 0x14000E014 (WPP_RECORDER_AND_TRACE_SF_di.c)
 *     WPP_RECORDER_AND_TRACE_SF_id @ 0x14000E0E4 (WPP_RECORDER_AND_TRACE_SF_id.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall USBType1RenderBytePosition(__int64 a1, union _LARGE_INTEGER *a2)
{
  unsigned __int64 v2; // rsi
  int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r15
  KIRQL v8; // al
  KIRQL v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  DWORD LowPart; // r13d
  LARGE_INTEGER v13; // rax
  DWORD v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 *v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // r15
  LARGE_INTEGER v21; // rax
  unsigned int v22; // r13d
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  union _LARGE_INTEGER v26; // rax
  union _LARGE_INTEGER v27; // rcx
  __int64 v29; // rax
  union _LARGE_INTEGER v30; // r8
  __int128 v31; // [rsp+50h] [rbp-48h] BYREF
  _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+20h]

  v2 = 0LL;
  v33 = 0LL;
  v4 = 0;
  v31 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 3221225860LL;
  v6 = *(_QWORD *)(v5 + 16);
  if ( !v6 )
    return 3221225860LL;
  v7 = *(_QWORD *)(v5 + 152);
  if ( !v7 )
    return 3221225860LL;
  a2[2].QuadPart = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 112));
  v9 = v8;
  if ( !*(_BYTE *)(v7 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), v8);
    USBHwGetClockRatio(v5, &v31, &v33);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 112));
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  if ( *(_BYTE *)(v5 + 45) )
  {
    v10 = *(_QWORD *)(v6 + 16);
    PerformanceFrequency.LowPart = 0;
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 72) + 56LL);
    if ( v11 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _LARGE_INTEGER *))(v11 + 40))(*(_QWORD *)(v11 + 8), &PerformanceFrequency);
      if ( v4 >= 0 )
      {
        LowPart = PerformanceFrequency.LowPart;
        PerformanceFrequency.QuadPart = 0LL;
        v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v14 = PerformanceFrequency.LowPart;
        v15 = 10000000 * HIDWORD(v13.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart;
        LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        LOBYTE(v14) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                   && LOWORD(WPP_GLOBAL_Control->DeviceType);
        if ( (_BYTE)v15 || (_BYTE)v14 )
          WPP_RECORDER_AND_TRACE_SF_di(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v14,
            WPP_GLOBAL_Control->DeviceExtension);
        v16 = *(__int64 **)(v5 + 64);
        v17 = v5 + 64;
        while ( v16 != (__int64 *)v17 )
        {
          v18 = v16[3];
          v19 = *(_DWORD *)(v18 + 128);
          if ( v19 )
          {
            v29 = LowPart - v19;
            if ( (unsigned int)v29 < *(_DWORD *)(v18 + 132) )
            {
              v20 = v33;
              a2[2].QuadPart += *(unsigned int *)(v18 + 12 * v29 + 140);
              v34 = *(_QWORD *)(v5 + 152);
              if ( v20 )
              {
                PerformanceFrequency.QuadPart = 0LL;
                v21 = KeQueryPerformanceCounter(&PerformanceFrequency);
                LODWORD(v18) = PerformanceFrequency.LowPart;
                v22 = LowPart - v31;
                v23 = ((10000000 * HIDWORD(v21.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
                    + (((10000000 * HIDWORD(v21.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
                     + 10000000LL * v21.LowPart)
                    / PerformanceFrequency.QuadPart;
                v24 = v23;
                if ( v23 >= *((_QWORD *)&v31 + 1) + v20 * (unsigned __int64)v22 )
                  v24 = *((_QWORD *)&v31 + 1) + v20 * v22;
                v25 = v23 - v24;
                v17 = v25 * (unsigned int)(*(_DWORD *)(v5 + 104) * *(_DWORD *)(v34 + 8)) % (1000 * v20);
                v2 = v25 * (unsigned int)(*(_DWORD *)(v5 + 104) * *(_DWORD *)(v34 + 8)) / (1000 * v20);
                LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                LOBYTE(v18) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                           && LOWORD(WPP_GLOBAL_Control->DeviceType);
                if ( (_BYTE)v17 || (_BYTE)v18 )
                  WPP_RECORDER_AND_TRACE_SF_ii(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v17,
                    v18,
                    WPP_GLOBAL_Control->DeviceExtension);
              }
              a2[2].QuadPart += v2;
              LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
              LOBYTE(v18) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                         && LOWORD(WPP_GLOBAL_Control->DeviceType);
              if ( (_BYTE)v17 || (_BYTE)v18 )
                WPP_RECORDER_AND_TRACE_SF_id(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v17,
                  v18,
                  WPP_GLOBAL_Control->DeviceExtension);
              break;
            }
            if ( (unsigned int)v29 < 0x7FFFFFFF )
              a2[2].QuadPart += *((unsigned int *)v16 + 9);
          }
          v16 = (__int64 *)*v16;
        }
        v26.QuadPart = a2[2].QuadPart + *(_QWORD *)(v5 + 88);
        a2[2] = v26;
        v27 = *(union _LARGE_INTEGER *)(v5 + 80);
        if ( v26.QuadPart > (unsigned __int64)v27.QuadPart
          || (v27 = *(union _LARGE_INTEGER *)(v5 + 96), v26.QuadPart < (unsigned __int64)v27.QuadPart) )
        {
          a2[2] = v27;
        }
      }
    }
    else
    {
      v4 = -1073741637;
    }
  }
  else
  {
    v30 = *(union _LARGE_INTEGER *)(v5 + 88);
    if ( v30.QuadPart <= *(_QWORD *)(v5 + 96) )
      v30 = *(union _LARGE_INTEGER *)(v5 + 96);
    a2[2] = v30;
  }
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(v5 + 96) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), v9);
  return (unsigned int)v4;
}
