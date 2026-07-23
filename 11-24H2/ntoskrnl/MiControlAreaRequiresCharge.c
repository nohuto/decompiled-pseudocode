/*
 * XREFs of MiControlAreaRequiresCharge @ 0x140394370
 * Callers:
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiUpControlAreaRefs @ 0x1404B355C (MiUpControlAreaRefs.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
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
     : (ULONG *)*((_QWORD *)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  if ( v4 == *((ULONG **)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF)) )
    return 1LL;
  if ( (v2 & 1) == 0 || ((a2 - 1) & 0xFFFFFFFD) == 0 )
    return 2LL;
  ++dword_140E300D0;
  return 0LL;
}
