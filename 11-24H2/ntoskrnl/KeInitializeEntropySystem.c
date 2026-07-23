/*
 * XREFs of KeInitializeEntropySystem @ 0x14073B52C
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeInitializeEntropySystem(__int64 a1)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( KiEntropyTimingRoutine )
    return 3221225485LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v3 = KiProcessorBlock;
    v4 = (unsigned int)KeNumberProcessors_0;
    do
    {
      guard_dispatch_icall_no_overrides(*v3++ + 36836, 256LL);
      --v4;
    }
    while ( v4 );
  }
  KiEntropyTimingRoutine = a1;
  return 0LL;
}
