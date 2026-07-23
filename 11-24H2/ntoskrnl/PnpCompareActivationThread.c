/*
 * XREFs of PnpCompareActivationThread @ 0x1404AEB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCompareActivationThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 > v3 )
    return 0LL;
  else
    return 2 - (unsigned int)(v4 < v3);
}
