/*
 * XREFs of x86BiosCall @ 0x1405399B0
 * Callers:
 *     HalpBiosDisplayReset @ 0x140539940 (HalpBiosDisplayReset.c)
 * Callees:
 *     x86BiosExecuteInterruptShadowed @ 0x140543D38 (x86BiosExecuteInterruptShadowed.c)
 */

bool x86BiosCall()
{
  int v0; // eax

  if ( !HalpVideoBiosPresent )
    NT_ASSERT(
      "*** Invalid BIOS Call
    Attempt to make a BIOS call on a non-BIOS system
    This is a BUG in a driver or kernel"
      "
    Perform a stack trace to find the culprit
    The BIOS call will be ignored
    Use gh to continue!!
");
  if ( _InterlockedIncrement(&HalpBiosCallCount) != 1 && !HalpBugcheckInProgress )
    NT_ASSERT(
      "*** Concurrent BIOS calls
    This is a BUG in a driver or kernel
    Perform a stack trace to find the culprit
  "
      "  The BIOS call will be ignored
    Use gh to continue!!
");
  v0 = x86BiosExecuteInterruptShadowed();
  _InterlockedDecrement(&HalpBiosCallCount);
  return v0 == 1;
}
