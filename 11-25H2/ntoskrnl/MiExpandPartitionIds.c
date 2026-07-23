/*
 * XREFs of MiExpandPartitionIds @ 0x1407EC098
 * Callers:
 *     MiAllocatePartitionId @ 0x1407DC510 (MiAllocatePartitionId.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiMakeZeroedPageTables @ 0x14038EACC (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  __int64 Pool; // rax
  __int64 v2; // rsi
  _RTL_BITMAP *v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v0 = 512;
  if ( qword_140E2FD48 != &qword_140E2FD40 )
    v0 = qword_140E2FD28->SizeOfBitMap + 512;
  if ( v0 <= qword_140E2FD28->SizeOfBitMap )
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
  if ( qword_140E2FD48 == &qword_140E2FD40 )
  {
    v4 = MiReservePtes((__int64)&qword_140E37328, 2u);
    if ( !v4 )
      goto LABEL_14;
    v5 = v4 << 25 >> 16;
    if ( !v5 )
      goto LABEL_14;
  }
  else
  {
    v5 = (unsigned __int64)qword_140E2FD48 + 8 * qword_140E2FD28->SizeOfBitMap;
  }
  PteAddress = (unsigned __int64 *)MiGetPteAddress(v5);
  if ( !(unsigned int)MiMakeZeroedPageTables((int)PteAddress, (int)PteAddress, 33, 8) )
  {
    if ( qword_140E2FD48 == &qword_140E2FD40 )
      MiReleasePtes((__int64)&qword_140E37328, PteAddress, 1u);
LABEL_14:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset_0((void *)v5, 0, 0x1000uLL);
  if ( qword_140E2FD48 == &qword_140E2FD40 )
  {
    *(_QWORD *)v5 = *(_QWORD *)qword_140E2FD48;
    qword_140E2FD48 = (PVOID)v5;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140E2FD28->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140E2FD28->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140E2FD28 != (PRTL_BITMAP)&dword_140E2FD30 )
    ExFreePoolWithTag(qword_140E2FD28, 0);
  qword_140E2FD28 = v3;
  return 1LL;
}
