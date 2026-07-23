/*
 * XREFs of CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140A5BD28
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSubtreeEnumeratorGetCurrentKeyStacks(__int16 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r9

  result = *a1;
  v4 = *((_QWORD *)a1 + 12) + 408 * result;
  if ( a2 )
  {
    result = *(_QWORD *)(v4 + 8);
    *a2 = result;
  }
  if ( a3 )
  {
    result = *(_QWORD *)(v4 + 16);
    *a3 = result;
  }
  return result;
}
