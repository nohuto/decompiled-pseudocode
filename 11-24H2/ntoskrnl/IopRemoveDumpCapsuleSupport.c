/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x140594F18
 * Callers:
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x140710A68 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}
