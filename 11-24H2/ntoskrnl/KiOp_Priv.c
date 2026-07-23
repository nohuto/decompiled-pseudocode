/*
 * XREFs of KiOp_Priv @ 0x1403F5670
 * Callers:
 *     KiPreprocessFault @ 0x1403F4D80 (KiPreprocessFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOp_Priv(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 32);
  v1[6] = 0;
  *v1 = -1073741674;
  return 0LL;
}
