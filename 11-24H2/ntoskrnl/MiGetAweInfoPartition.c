/*
 * XREFs of MiGetAweInfoPartition @ 0x140266FBC
 * Callers:
 *     MiGetAweVadPartition @ 0x1402661D4 (MiGetAweVadPartition.c)
 *     MiFreePhysicalPageChain @ 0x140266C0C (MiFreePhysicalPageChain.c)
 *     MiAllocateAweInfo @ 0x1407F8928 (MiAllocateAweInfo.c)
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1407F9B80 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *((_QWORD *)qword_140E300C8 + (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *((_QWORD *)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
}
