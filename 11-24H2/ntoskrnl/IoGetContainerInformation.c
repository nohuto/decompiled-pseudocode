/*
 * XREFs of IoGetContainerInformation @ 0x140712E40
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x1402BAD30 (PsGetCurrentProcessSessionId.c)
 *     PsGetSessionObjectById @ 0x1403C2DE0 (PsGetSessionObjectById.c)
 *     PsGetIoSessionState @ 0x1406F995C (PsGetIoSessionState.c)
 */

NTSTATUS __stdcall IoGetContainerInformation(
        IO_CONTAINER_INFORMATION_CLASS InformationClass,
        PVOID ContainerObject,
        PVOID Buffer,
        ULONG BufferLength)
{
  PVOID SessionObjectById; // rax
  bool v7; // zf
  int v8; // [rsp+30h] [rbp+8h] BYREF

  SessionObjectById = ContainerObject;
  if ( InformationClass )
    return -1073741585;
  if ( BufferLength < 0xC )
    return -1073741582;
  if ( !ContainerObject )
  {
    PsGetCurrentProcessSessionId();
    SessionObjectById = PsGetSessionObjectById();
    if ( !SessionObjectById )
      return -1073741584;
  }
  v8 = 0;
  *((_DWORD *)Buffer + 1) = PsGetIoSessionState((__int64)SessionObjectById, &v8);
  v7 = v8 == MEMORY[0xFFFFF780000002D8];
  *(_DWORD *)Buffer = v8;
  *((_BYTE *)Buffer + 8) = v7;
  return 0;
}
