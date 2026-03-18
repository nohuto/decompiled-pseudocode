/*
 * XREFs of ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x180226D50
 * Callers:
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800EF5FC (--0CExpressionManager@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
