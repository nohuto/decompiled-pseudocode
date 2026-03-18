/*
 * XREFs of KeInitializeEntropySystem @ 0x14073D5FC
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeInitializeEntropySystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rsi

  if ( KiEntropyTimingRoutine )
    return 3221225485LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v7 = KiProcessorBlock;
    v8 = (unsigned int)KeNumberProcessors_0;
    do
    {
      guard_dispatch_icall_no_overrides(*v7++ + 36836, 256LL, a3, a4);
      --v8;
    }
    while ( v8 );
  }
  KiEntropyTimingRoutine = a1;
  return 0LL;
}
