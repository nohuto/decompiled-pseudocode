/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x14059185C
 * Callers:
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14070E5F8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x140591D0C (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  if ( !CapsuleTriageDumpBlockInitialized && !(unsigned __int8)IopIsBitlockerOn() )
  {
    CapsuleTriageDumpBlock = (PVOID)ExAllocatePool2(0x40uLL, 0x41800uLL, 0x706D4443u);
    if ( !CapsuleTriageDumpBlock )
      return 3221225626LL;
    CapsuleTriageDumpBlockInitialized = 1;
  }
  return 0LL;
}
