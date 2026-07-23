/*
 * XREFs of MiMakeGlobalSubsectionPte @ 0x1404CF418
 * Callers:
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiMakeGlobalSubsectionPte(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // r9

  result = MiMakeDemandZeroPte((*(_DWORD *)(a1 + 32) >> 1) & 0x1F);
  if ( *(_DWORD *)(v2 + 36) )
  {
    if ( (unsigned int)((v3 - *(_QWORD *)(v2 + 8)) >> 3) << 24 < ((*(_DWORD *)(v2 + 32) >> 20) | (*(_DWORD *)(v2 + 40) << 9)) )
      return MiSwizzleInvalidPte(16 * ((v2 << 12) | *(_DWORD *)(v2 + 32) & 0x3E | 0x40));
  }
  return result;
}
