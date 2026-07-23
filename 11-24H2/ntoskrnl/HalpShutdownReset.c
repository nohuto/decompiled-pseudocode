/*
 * XREFs of HalpShutdownReset @ 0x140542830
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalpShutdownReset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 *a5)
{
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rsi

  v5 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( _InterlockedDecrement(a5) )
  {
    do
    {
      if ( (++v5 & dword_140FC111C) != 0 || !qword_140FC1120 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v5, a2);
    }
    while ( *a5 );
  }
  HalpRebootControlled = 1;
  if ( !CurrentPrcb->Number )
    HalReturnToFirmware(3);
  while ( 1 )
    _mm_pause();
}
