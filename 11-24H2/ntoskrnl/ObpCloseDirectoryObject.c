/*
 * XREFs of ObpCloseDirectoryObject @ 0x140A0D540
 * Callers:
 *     <none>
 * Callees:
 *     ObpRemoveNamespaceFromTable @ 0x140A0D56C (ObpRemoveNamespaceFromTable.c)
 */

__int64 __fastcall ObpCloseDirectoryObject(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    result = a2[84];
    if ( (result & 1) != 0 )
      return ObpRemoveNamespaceFromTable(a2);
  }
  return result;
}
