/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x140A41B00
 * Callers:
 *     <none>
 * Callees:
 *     ObpCreateDirectoryObject @ 0x140A41B20 (ObpCreateDirectoryObject.c)
 */

__int64 __fastcall NtCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return ObpCreateDirectoryObject(a1, a2, a3, a4, a5);
}
