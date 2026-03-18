/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x140591038
 * Callers:
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140704968 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1405914E8 (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  if ( !CapsuleTriageDumpBlockInitialized && !(unsigned __int8)IopIsBitlockerOn() )
  {
    CapsuleTriageDumpBlock = (PVOID)ExAllocatePool2(0x40uLL);
    if ( !CapsuleTriageDumpBlock )
      return 3221225626LL;
    CapsuleTriageDumpBlockInitialized = 1;
  }
  return 0LL;
}
