/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x140586E58
 * Callers:
 *     HvlMarkHiberPhase @ 0x14058663C (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x140589728 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1405897E0 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x140589934 (HvlpStartPageListIteration.c)
 */

__int64 HvlpMarkHypervisorPagesForHibernation()
{
  int PageList; // ebx
  __int64 result; // rax
  ULONG_PTR Length; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Address = 0LL;
  LODWORD(Length) = 0;
  HvlpStartPageListIteration(0LL, 0LL);
  do
  {
    PageList = HvlpGetPageList(0LL, &Address, &Length);
    if ( (_DWORD)Length )
      PoSetHiberRange(0LL, 0x14000u, Address, (unsigned int)Length, 0x686C7648u);
  }
  while ( PageList == 261 );
  result = HvlpGetPageListIterator(0LL);
  *(_QWORD *)(result + 8) = 0LL;
  *(_WORD *)result = 0;
  *(_WORD *)(result + 3) = 0;
  *(_BYTE *)(result + 2) = 0;
  return result;
}
