/*
 * XREFs of PspIsSessionLeaderProcess @ 0x140A7194C
 * Callers:
 *     PsIsSessionLeaderProcess @ 0x1404A59F0 (PsIsSessionLeaderProcess.c)
 *     PspInitializeSessionGlobals @ 0x1406F5578 (PspInitializeSessionGlobals.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 PspIsSessionLeaderProcess()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[52].Blink;
}
