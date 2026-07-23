/*
 * XREFs of CmpRemoveKeyHash @ 0x1409652FC
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1407DB734 (CmpRehashKcbSubtree.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRemoveKeyHash(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  __int64 *i; // rdx

  result = *(_QWORD *)(a1 + 1648);
  v4 = (unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9));
  for ( i = (__int64 *)(result + 8 * (v4 + 2 * (v4 + 1))); i; i = (__int64 *)(result + 8) )
  {
    result = *i;
    if ( !*i )
      break;
    if ( (_DWORD *)result == a2 )
    {
      result = *(_QWORD *)(result + 8);
      *i = result;
      return result;
    }
  }
  return result;
}
