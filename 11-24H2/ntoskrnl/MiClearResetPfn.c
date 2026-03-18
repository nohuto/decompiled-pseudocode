/*
 * XREFs of MiClearResetPfn @ 0x140229254
 * Callers:
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiClearResetPfn(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 result; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( v1 )
  {
    if ( qword_140E2DB80 )
    {
      if ( (v1 & 0x10) != 0 )
        LODWORD(v1) = v1 & 0xFFFFFFEF;
      else
        LODWORD(v1) = ~(_DWORD)qword_140E2DB80 & v1;
    }
    v2 = v1;
  }
  result = MiSwizzleInvalidPte(v2);
  *(_QWORD *)(v4 + 16) = result;
  return result;
}
