/*
 * XREFs of MiControlAreaHasHostRelocationsApplied @ 0x1403F435C
 * Callers:
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x140946B4C (MiValidateImagePfn.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiControlAreaHasHostRelocationsApplied(__int64 a1)
{
  __int64 v1; // rcx

  return (*(_BYTE *)(a1 + 62) & 0xC) != 0
      && (v1 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32)) != 0
      && *(_QWORD *)(v1 + 48) != 0LL;
}
