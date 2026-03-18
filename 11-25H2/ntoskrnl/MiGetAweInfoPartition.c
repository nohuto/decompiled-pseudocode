/*
 * XREFs of MiGetAweInfoPartition @ 0x1404B3E8C
 * Callers:
 *     MiGetAweVadPartition @ 0x1404B3A84 (MiGetAweVadPartition.c)
 *     MiFreePhysicalPageChain @ 0x1404B3ADC (MiFreePhysicalPageChain.c)
 *     MiAllocateAweInfo @ 0x1407E8328 (MiAllocateAweInfo.c)
 *     MiAllocateFastAwePages @ 0x1407E84AC (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x1407E9580 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x1407E9D40 (NtFreeUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x140ABCAD0 (MiCreateUserPhysicalView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
}
