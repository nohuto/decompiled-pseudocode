/*
 * XREFs of NtCreatePagingFile @ 0x1407DFD70
 * Callers:
 *     <none>
 * Callees:
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 */

__int64 __fastcall NtCreatePagingFile(_OWORD *a1, __int64 *a2, unsigned __int64 *a3, int a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  LODWORD(v5) = a4;
  return MiCreatePagingFile(a1, a2, a3, KeGetCurrentThread()->PreviousMode, v5, (__int64)&MiSystemPartition);
}
