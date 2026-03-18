/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x140594838
 * Callers:
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140710A68 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x140594CE8 (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
