/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x14098A450
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 */

__int64 __fastcall NtNotifyChangeDirectoryFile(
        int a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        volatile void *Address,
        SIZE_T a7,
        int a8,
        char a9)
{
  SIZE_T Length; // [rsp+30h] [rbp-28h]

  LODWORD(Length) = a7;
  return NtNotifyChangeDirectoryFileEx(a1, a2, a5, Address, Length, a8, a9, 1);
}
