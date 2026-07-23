/*
 * XREFs of Pdcv2pValidateActivationParameters @ 0x1409EBDB4
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DA44 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 * Callees:
 *     <none>
 */

char __fastcall Pdcv2pValidateActivationParameters(__int64 a1)
{
  char v1; // dl
  unsigned __int64 *v2; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  _QWORD *v6; // rax
  unsigned __int64 *v7; // r8

  v1 = 0;
  if ( a1
    && (unsigned int)(*(_DWORD *)a1 - 1) <= 1
    && (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFCuLL) == 0
    && (unsigned int)(*(_DWORD *)(a1 + 4) - 10) <= 0x122 )
  {
    v2 = *(unsigned __int64 **)(a1 + 24);
    if ( v2 )
    {
      v4 = *v2;
      if ( *v2 > 0xA )
        return v1;
      v5 = 0LL;
      v6 = v2 + 1;
      while ( v5 < v4 )
      {
        if ( !*v6 || !v6[1] )
          return v1;
        ++v5;
        v6 += 2;
      }
      v7 = &v2[2 * v4 + 1];
      while ( v4 < 0xA )
      {
        if ( *v7 || v7[1] )
          return v1;
        ++v4;
        v7 += 2;
      }
    }
    return 1;
  }
  return v1;
}
