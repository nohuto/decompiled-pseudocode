/*
 * XREFs of MiControlAreaRequiresCharge @ 0x1404166A4
 * Callers:
 *     MiCreatePrototypePtes @ 0x140261F58 (MiCreatePrototypePtes.c)
 *     MiReferenceControlArea @ 0x140415208 (MiReferenceControlArea.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiUpControlAreaRefs @ 0x1404172CC (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiControlAreaRequiresCharge(__int64 a1, unsigned int a2)
{
  char v2; // r10
  ULONG *v4; // rdx

  v2 = *(_BYTE *)(a1 + 62);
  if ( (v2 & 0xC) != 0 || !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 92) & 0x10000) != 0 )
    return 1LL;
  v4 = a2 > 1
     ? &MiSystemPartition
     : (ULONG *)*((_QWORD *)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  if ( v4 == *((ULONG **)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF)) )
    return 1LL;
  if ( (v2 & 1) == 0 || ((a2 - 1) & 0xFFFFFFFD) == 0 )
    return 2LL;
  ++dword_140E2FF90;
  return 0LL;
}
