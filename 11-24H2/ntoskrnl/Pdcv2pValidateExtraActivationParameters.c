/*
 * XREFs of Pdcv2pValidateExtraActivationParameters @ 0x14049C8CC
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 * Callees:
 *     <none>
 */

char __fastcall Pdcv2pValidateExtraActivationParameters(__int64 a1, int a2)
{
  char v2; // r8
  _QWORD *v4; // rcx

  v2 = 1;
  if ( !a1 )
    return 0;
  if ( *(_DWORD *)a1 != 1 )
  {
    if ( *(_DWORD *)a1 != 2 )
      return 0;
    v4 = *(_QWORD **)(a1 + 32);
    if ( v4 )
    {
      if ( *v4 >= 8uLL )
        return 0;
    }
    if ( a2 == 4 && (!v4 || (*(_BYTE *)v4 & 1) == 0 || !v4[1] || v4[2]) )
      return 0;
  }
  return v2;
}
