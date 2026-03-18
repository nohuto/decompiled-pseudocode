/*
 * XREFs of NtGdiCreatePaletteInternal @ 0x1401D4FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiCreatePaletteInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 *v4; // [rsp+60h] [rbp-18h] BYREF
  int v5; // [rsp+68h] [rbp-10h]

  v2 = 1LL;
  if ( a2 > 0x10000 )
    return 0LL;
  if ( *(_WORD *)a1 != 768 || !a2 )
    v2 = 0LL;
  if ( v2 )
  {
    v5 = 0;
    v4 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v4, 1u, a2, (const unsigned int *)(a1 + 4), 0, 0, 0, 0x500u, 0) )
    {
      v5 = 1;
      v2 = *v4;
    }
    else
    {
      v2 = 0LL;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v4);
  }
  return v2;
}
