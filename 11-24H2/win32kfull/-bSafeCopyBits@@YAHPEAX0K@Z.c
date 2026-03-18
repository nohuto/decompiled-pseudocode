/*
 * XREFs of ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400DC5D4
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400DAEB0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400DC190 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1400DD400 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1401FB580 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x14033A670 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiHT_Get8BPPFormatPalette @ 0x14033AA80 (NtGdiHT_Get8BPPFormatPalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x14033AB30 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall bSafeCopyBits(char *a1, void *a2, unsigned int a3)
{
  char *v3; // rax

  if ( a1 && a2 )
  {
    v3 = &a1[a3];
    if ( v3 <= a1 || (unsigned __int64)v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
  return 1LL;
}
