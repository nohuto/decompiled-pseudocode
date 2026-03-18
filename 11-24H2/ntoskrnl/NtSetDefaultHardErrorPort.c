/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x1407C0390
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __fastcall NtSetDefaultHardErrorPort(HANDLE Handle)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  NTSTATUS result; // eax
  _KPROCESS *Process; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  if ( LODWORD(CurrentServerSiloGlobals[54].Flink) == 1 )
    return -1073741823;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  CurrentServerSiloGlobals[53].Blink = (struct _LIST_ENTRY *)Object;
  if ( result >= 0 )
  {
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 1;
    LODWORD(CurrentServerSiloGlobals[54].Flink) = 1;
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentServerSiloGlobals[53].Flink = (struct _LIST_ENTRY *)Process;
    PsReferenceSiloContext(Process);
    return 0;
  }
  return result;
}
