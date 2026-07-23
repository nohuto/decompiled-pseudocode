/*
 * XREFs of VmCheckLargePageInswap @ 0x14079E658
 * Callers:
 *     MmInSwapWorkingSet @ 0x1403C6A50 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmCheckLargePageInswap(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1648);
  if ( result )
    return *(_WORD *)(result + 136) & 1;
  return result;
}
