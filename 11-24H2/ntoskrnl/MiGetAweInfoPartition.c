/*
 * XREFs of MiGetAweInfoPartition @ 0x1403CCDEC
 * Callers:
 *     MiGetAweVadPartition @ 0x1403CC010 (MiGetAweVadPartition.c)
 *     MiFreePhysicalPageChain @ 0x1403CCA3C (MiFreePhysicalPageChain.c)
 *     MiAllocateAweInfo @ 0x1407F81B8 (MiAllocateAweInfo.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9410 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407F9BD0 (NtFreeUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140AE76D8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *((_QWORD *)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
}
