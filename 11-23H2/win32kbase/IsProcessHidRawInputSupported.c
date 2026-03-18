/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1C0080084
 * Callers:
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     ApiSetProcessHidRawInput @ 0x1C00E77A2 (ApiSetProcessHidRawInput.c)
 *     RIMIDECreateHIDDesc @ 0x1C019395C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  if ( qword_1C0296298 )
    return qword_1C0296298();
  else
    return 3221225659LL;
}
