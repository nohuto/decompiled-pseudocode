/*
 * XREFs of MiClearResetPfn @ 0x1402FC454
 * Callers:
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiClearResetPfn(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v1 & 0x10) != 0 )
        v1 &= ~0x10uLL;
      else
        v1 &= ~qword_140E2DCC0;
    }
    v2 = v1;
  }
  result = MiSwizzleInvalidPte((unsigned int)v2, v2);
  *(_QWORD *)(v4 + 16) = result;
  return result;
}
