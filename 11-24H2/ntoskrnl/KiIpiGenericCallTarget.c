/*
 * XREFs of KiIpiGenericCallTarget @ 0x1403F9740
 * Callers:
 *     KiIpiProcessRequests @ 0x1403F91B0 (KiIpiProcessRequests.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIpiGenericCallTarget(__int64 a1, __int64 a2, __int64 a3, volatile signed __int32 *a4)
{
  unsigned int v4; // ebx
  LARGE_INTEGER v7; // rax
  ULONG_PTR v8; // r9
  signed __int32 v10[8]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-18h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = 0;
  _InterlockedDecrement(a4);
  while ( *a4 )
  {
    if ( !KiBarrierWait && (HvlEnlightenments & 0x20) == 0 )
    {
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
      _InterlockedOr(v10, 0);
      v8 = MEMORY[0xFFFFF78000000350];
      if ( v7.QuadPart > (unsigned __int64)(MEMORY[0xFFFFF78000000350] + 300 * PerformanceFrequency.QuadPart) )
      {
        _InterlockedOr(v10, 0);
        if ( *a4 )
          KeBugCheckEx(0x1DBu, PerformanceFrequency.QuadPart, v7.QuadPart, v8, 0LL);
      }
    }
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v4);
    }
    else
    {
      _mm_pause();
    }
  }
  return guard_dispatch_icall_no_overrides(a3, a2);
}
