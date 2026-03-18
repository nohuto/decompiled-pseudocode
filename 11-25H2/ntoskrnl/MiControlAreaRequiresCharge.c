/*
 * XREFs of MiControlAreaRequiresCharge @ 0x1402A673C
 * Callers:
 *     MiReferenceControlArea @ 0x140219CEC (MiReferenceControlArea.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x1402A6EE0 (MiCreatePrototypePtes.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
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
     : (ULONG *)*((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  if ( v4 == *((ULONG **)qword_140E2FD48 + (*(_WORD *)(a1 + 60) & 0x3FF)) )
    return 1LL;
  if ( (v2 & 1) == 0 || ((a2 - 1) & 0xFFFFFFFD) == 0 )
    return 2LL;
  ++dword_140E2FD50;
  return 0LL;
}
