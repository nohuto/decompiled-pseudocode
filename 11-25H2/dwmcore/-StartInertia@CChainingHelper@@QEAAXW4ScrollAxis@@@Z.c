/*
 * XREFs of ?StartInertia@CChainingHelper@@QEAAXW4ScrollAxis@@@Z @ 0x1802518B8
 * Callers:
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1800F46DC (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChainingHelper::StartInertia(__int64 a1, int a2)
{
  _BYTE *v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = (_BYTE *)(a1 + 36);
  v3 = 3LL * a2;
  result = 3LL;
  *(_BYTE *)(a1 + 4 * v3) &= 0xFCu;
  *(_DWORD *)(a1 + 4 * v3 + 4) = 0;
  *(_BYTE *)(a1 + 36) |= 1u;
  *(_BYTE *)(a1 + 4 * v3) &= 0xFAu;
  *(_DWORD *)(a1 + 4 * v3 + 8) = 0;
  *(_BYTE *)(a1 + 36) |= 2u;
  do
  {
    *(_BYTE *)a1 |= 4u;
    *(_DWORD *)(a1 + 8) = -805306369;
    a1 += 12LL;
    *v2 |= 2u;
    --result;
  }
  while ( result );
  return result;
}
