/*
 * XREFs of ReferenceVacbLevel @ 0x140440074
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x1403EAB94 (CcAdjustVacbLevelLockCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceVacbLevel(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  if ( a3 )
    result = 0LL;
  else
    result = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
  if ( a5 )
    *(_DWORD *)(result + a2 + 1028) += a4;
  else
    *(_DWORD *)(result + a2 + 1024) += a4;
  return result;
}
