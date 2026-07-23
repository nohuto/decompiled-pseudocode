/*
 * XREFs of CcDecrementOpenCountDeferDelete @ 0x140275188
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x140274DD0 (CcGetDirtyPagesHelper.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
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
