/*
 * XREFs of KasaniGetModuleFromAddress @ 0x1405A6F40
 * Callers:
 *     KasaniBuildPc @ 0x1405A6EB0 (KasaniBuildPc.c)
 * Callees:
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 *     MiReleaseLoadLock @ 0x1402BBE90 (MiReleaseLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 */

__int64 __fastcall KasaniGetModuleFromAddress(
        unsigned __int64 a1,
        UNICODE_STRING *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  struct _KTHREAD *CurrentThread; // rcx

  v9 = -1073741823;
  v10 = MiLockLoadedDataTableEntry(a1, 0);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    if ( a1 >= v12 && a1 < v12 + *(unsigned int *)(v10 + 152) )
    {
      v9 = RtlUnicodeStringCopy(a2, (PCUNICODE_STRING)(v10 + 88));
      *a3 = a1 - v12;
      *a4 = *(_DWORD *)(v11 + 156);
      *a5 = *(_DWORD *)(v11 + 152);
    }
    MiUnlockLoaderEntry(v11, 2);
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    MiReleaseLoadLock((__int64)CurrentThread, 0);
  }
  return v9;
}
