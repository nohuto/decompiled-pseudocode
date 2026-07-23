/*
 * XREFs of PsGetProcessSignatureLevel @ 0x14045EEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessSignatureLevel(__int64 a1, _BYTE *a2)
{
  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 1529);
  return *(_BYTE *)(a1 + 1528);
}
