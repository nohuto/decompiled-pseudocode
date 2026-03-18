/*
 * XREFs of CcDecrementOpenCountDeferDelete @ 0x1402AAAF8
 * Callers:
 *     CcWriteBehindPostProcess @ 0x1402A883C (CcWriteBehindPostProcess.c)
 *     CcGetDirtyPagesHelper @ 0x1402AA740 (CcGetDirtyPagesHelper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcDecrementOpenCountDeferDelete(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 4) - 1);
  *(_DWORD *)(a1 + 4) = result;
  if ( a3 )
    --*(_DWORD *)(a1 + 544);
  return result;
}
