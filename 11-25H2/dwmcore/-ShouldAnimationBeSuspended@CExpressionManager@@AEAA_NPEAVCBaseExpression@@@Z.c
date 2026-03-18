/*
 * XREFs of ?ShouldAnimationBeSuspended@CExpressionManager@@AEAA_NPEAVCBaseExpression@@@Z @ 0x1801CB6E0
 * Callers:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180039AB0 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CExpressionManager::ShouldAnimationBeSuspended(CExpressionManager *this, struct CBaseExpression *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  unsigned int v4; // r8d
  __int64 *v5; // rdx
  __int64 *v6; // rcx

  v2 = *((_QWORD *)a2 + 7);
  if ( !v2 || !*(_BYTE *)(v2 + 18) )
    return 0;
  v3 = (__int64 *)*((_QWORD *)this + 49);
  v4 = *((_DWORD *)a2 + 46);
  v5 = v3;
  v6 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *((_DWORD *)v6 + 7) >= v4 )
    {
      v3 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  return v3 == v5 || *((_BYTE *)v3 + 25) || v4 < *((_DWORD *)v3 + 7);
}
