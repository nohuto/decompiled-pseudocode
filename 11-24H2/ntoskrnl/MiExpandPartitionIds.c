/*
 * XREFs of MiExpandPartitionIds @ 0x1407FC698
 * Callers:
 *     MiAllocatePartitionId @ 0x1407EC980 (MiAllocatePartitionId.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  __int64 Pool; // rax
  __int64 v2; // rsi
  _RTL_BITMAP *v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  _QWORD *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v0 = 512;
  if ( qword_140E300C8 != &qword_140E300C0 )
    v0 = qword_140E300A8->SizeOfBitMap + 512;
  if ( v0 <= qword_140E300A8->SizeOfBitMap )
    return 0LL;
  if ( v0 > 0x400 )
    return 0LL;
  Pool = MiAllocatePool(0x40uLL, 8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2), 538996045);
  v2 = 0LL;
  v3 = (_RTL_BITMAP *)Pool;
  if ( !Pool )
    return 0LL;
  *(_DWORD *)Pool = v0;
  *(_QWORD *)(Pool + 8) = Pool + 16;
  if ( qword_140E300C8 == &qword_140E300C0 )
  {
    v4 = MiReservePtes((__int64)&qword_140E376A8, 2u);
    if ( !v4 )
      goto LABEL_14;
    v5 = v4 << 25 >> 16;
    if ( !v5 )
      goto LABEL_14;
  }
  else
  {
    v5 = (unsigned __int64)qword_140E300C8 + 8 * qword_140E300A8->SizeOfBitMap;
  }
  PteAddress = (_QWORD *)MiGetPteAddress(v5);
  if ( !(unsigned int)MiMakeZeroedPageTables((int)PteAddress, (int)PteAddress, 33, 8) )
  {
    if ( qword_140E300C8 == &qword_140E300C0 )
      MiReleasePtes((__int64)&qword_140E376A8, PteAddress, 1u);
LABEL_14:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset_0((void *)v5, 0, 0x1000uLL);
  if ( qword_140E300C8 == &qword_140E300C0 )
  {
    *(_QWORD *)v5 = *(_QWORD *)qword_140E300C8;
    qword_140E300C8 = (PVOID)v5;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140E300A8->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140E300A8->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140E300A8 != (PRTL_BITMAP)&dword_140E300B0 )
    ExFreePoolWithTag(qword_140E300A8, 0);
  qword_140E300A8 = v3;
  return 1LL;
}
