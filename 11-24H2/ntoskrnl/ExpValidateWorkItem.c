/*
 * XREFs of ExpValidateWorkItem @ 0x1402A8C30
 * Callers:
 *     ExQueueWorkItemToPrivatePool @ 0x14024B134 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemEx @ 0x1402A7430 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemExFromIo @ 0x140483044 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // r9
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v2 = BugCheckParameter2[2];
  result = 0xFFFF800000000000uLL;
  if ( v2 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
