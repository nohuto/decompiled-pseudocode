/*
 * XREFs of KiIpiGenericCallTarget @ 0x1403FF0F0
 * Callers:
 *     KiIpiProcessRequests @ 0x1403FEB60 (KiIpiProcessRequests.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIpiGenericCallTarget(__int64 a1, __int64 a2, __int64 a3, volatile signed __int32 *a4)
{
  unsigned int v4; // ebx
  volatile signed __int32 *v5; // rdi
  LARGE_INTEGER v7; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-18h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = 0;
  _InterlockedDecrement(a4);
  v5 = a4;
  while ( *v5 )
  {
    if ( !KiBarrierWait && (HvlEnlightenments & 0x20) == 0 )
    {
      v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
      _InterlockedOr(v9, 0);
      a4 = (volatile signed __int32 *)MEMORY[0xFFFFF78000000350];
      if ( v7.QuadPart > (unsigned __int64)(MEMORY[0xFFFFF78000000350] + 300 * PerformanceFrequency.QuadPart) )
      {
        _InterlockedOr(v9, 0);
        if ( *v5 )
          KeBugCheckEx(0x1DBu, PerformanceFrequency.QuadPart, v7.QuadPart, (ULONG_PTR)a4, 0LL);
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
  return guard_dispatch_icall_no_overrides(a3, a2, a3, a4);
}
