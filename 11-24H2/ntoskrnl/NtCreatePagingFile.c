/*
 * XREFs of NtCreatePagingFile @ 0x1407F01E0
 * Callers:
 *     <none>
 * Callees:
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 */

NTSTATUS __cdecl NtCreatePagingFile(
        PUNICODE_STRING PageFileName,
        PLARGE_INTEGER MinimumSize,
        PLARGE_INTEGER MaximumSize,
        ULONG Priority)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  LODWORD(v5) = Priority;
  return MiCreatePagingFile(
           PageFileName,
           (__int64 *)MinimumSize,
           (unsigned __int64 *)&MaximumSize->QuadPart,
           KeGetCurrentThread()->PreviousMode,
           v5,
           (__int64)&MiSystemPartition);
}
