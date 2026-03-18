/*
 * XREFs of PspIsSessionLeaderProcess @ 0x140A753A8
 * Callers:
 *     PsIsSessionLeaderProcess @ 0x1404A9FB0 (PsIsSessionLeaderProcess.c)
 *     PspInitializeSessionGlobals @ 0x1406EBD14 (PspInitializeSessionGlobals.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 PspIsSessionLeaderProcess()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[52].Blink;
}
