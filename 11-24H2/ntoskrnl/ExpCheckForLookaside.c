/*
 * XREFs of ExpCheckForLookaside @ 0x140499BEC
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExpFreePoolChecks @ 0x1402B0D90 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x140499C58 (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x140BA7C90 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(a1, a2), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(a1, a2, &ExNPagedLookasideListHead, &ExNPagedLookasideLock);
    return ExpCheckForLookasideList(a1, a2, &ExPagedLookasideListHead, &ExPagedLookasideLock);
  }
  return result;
}
