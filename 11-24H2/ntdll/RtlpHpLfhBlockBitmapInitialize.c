/*
 * XREFs of RtlpHpLfhBlockBitmapInitialize @ 0x180063FD0
 * Callers:
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180065C18 (RtlpHpLfhSubsegmentInitialize.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhBlockBitmapInitialize(void *a1, unsigned int a2)
{
  char v2; // bl
  unsigned __int64 v4; // rdi
  __int64 result; // rax

  v2 = a2;
  v4 = ((unsigned __int64)a2 + 31) >> 5;
  memset_thunk_772440563353939046(a1, 0, 8LL * (unsigned int)v4);
  result = (unsigned int)(v4 - 1);
  *((_QWORD *)a1 + result) = (unsigned int)~(0xFFFFFFFFuLL >> (-v2 & 0x1F));
  return result;
}
