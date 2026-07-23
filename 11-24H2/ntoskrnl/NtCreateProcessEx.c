/*
 * XREFs of NtCreateProcessEx @ 0x140773A60
 * Callers:
 *     NtCreateProcess @ 0x1407739D0 (NtCreateProcess.c)
 * Callees:
 *     PspCreateProcess @ 0x1409F98C4 (PspCreateProcess.c)
 */

NTSTATUS __cdecl NtCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        ULONG Reserved)
{
  __int64 v11; // rcx

  if ( !ParentProcess )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v11 = (__int64)ProcessHandle;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  return PspCreateProcess(ProcessHandle, DesiredAccess, ObjectAttributes);
}
