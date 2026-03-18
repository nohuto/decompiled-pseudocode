/*
 * XREFs of ExpFreePoolChecks @ 0x1402DE730
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1402F7C14 (ExpFreeHeapSpecialPool.c)
 *     ExRemovePoolTag @ 0x14038B5E8 (ExRemovePoolTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForWorker @ 0x1403BD890 (ExpCheckForWorker.c)
 *     ExpCheckForResource @ 0x140492604 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x140499B14 (ExpCheckForLookaside.c)
 *     KeCheckForTimer @ 0x1404CEE18 (KeCheckForTimer.c)
 *     VfPtFreePoolNotification @ 0x140B99718 (VfPtFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, char a4, __int64 a5)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (a4 & 0xC0) != 0 && (ExpPoolFlags & 0x200) != 0 )
      ExpCheckForLookaside(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
  }
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfPtFreePoolNotification(BugCheckParameter3, a2, a3, a5);
  return result;
}
