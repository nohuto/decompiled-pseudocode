/*
 * XREFs of CcDecrementOpenCountDeferDelete @ 0x1402C5A80
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x1402C56E0 (CcGetDirtyPagesHelper.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
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
