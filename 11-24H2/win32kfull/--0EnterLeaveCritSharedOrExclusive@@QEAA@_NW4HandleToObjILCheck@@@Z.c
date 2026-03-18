/*
 * XREFs of ??0EnterLeaveCritSharedOrExclusive@@QEAA@_NW4HandleToObjILCheck@@@Z @ 0x1402909C4
 * Callers:
 *     NtUserMessageCall @ 0x140061360 (NtUserMessageCall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnterLeaveCritSharedOrExclusive::EnterLeaveCritSharedOrExclusive(__int64 a1, char a2)
{
  if ( a2 )
    EnterCrit(0LL, 1LL);
  else
    EnterSharedCrit(0LL, 1LL);
  return a1;
}
