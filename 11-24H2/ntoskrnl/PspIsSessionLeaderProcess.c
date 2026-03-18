/*
 * XREFs of PspIsSessionLeaderProcess @ 0x140A7782C
 * Callers:
 *     PsIsSessionLeaderProcess @ 0x1404AB3D0 (PsIsSessionLeaderProcess.c)
 *     PspInitializeSessionGlobals @ 0x1406F7578 (PspInitializeSessionGlobals.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 PspIsSessionLeaderProcess()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[52].Blink;
}
