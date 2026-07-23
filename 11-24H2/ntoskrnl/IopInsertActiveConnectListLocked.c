/*
 * XREFs of IopInsertActiveConnectListLocked @ 0x1409C1250
 * Callers:
 *     IopInitializeActiveConnectBlock @ 0x1409C0E78 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall IopInsertActiveConnectListLocked(__int64 a1)
{
  __int64 i; // rdx
  __int64 *result; // rax

  for ( i = ActiveConnectList; (__int64 *)i != &ActiveConnectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) > *(_DWORD *)(a1 + 16) )
    {
      result = *(__int64 **)(i + 8);
      if ( *result == i )
      {
        *(_QWORD *)a1 = i;
        *(_QWORD *)(a1 + 8) = result;
        *result = a1;
        *(_QWORD *)(i + 8) = a1;
        return result;
      }
LABEL_4:
      __fastfail(3u);
    }
  }
  result = (__int64 *)qword_140F8C178;
  if ( *(__int64 **)qword_140F8C178 != &ActiveConnectList )
    goto LABEL_4;
  *(_QWORD *)a1 = &ActiveConnectList;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  qword_140F8C178 = a1;
  return result;
}
