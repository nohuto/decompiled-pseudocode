/*
 * XREFs of KeQueryGroupAffinity_0 @ 0x140056809
 * Callers:
 *     IntPartIsInterruptSteerable @ 0x140070808 (IntPartIsInterruptSteerable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KAFFINITY __stdcall KeQueryGroupAffinity_0(USHORT GroupNumber)
{
  return KeQueryGroupAffinity(GroupNumber);
}
