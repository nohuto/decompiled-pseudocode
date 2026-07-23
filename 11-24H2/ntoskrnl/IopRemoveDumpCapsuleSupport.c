/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x140591F3C
 * Callers:
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14070E5F8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
