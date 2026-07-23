/*
 * XREFs of VmpFillValidFaultInfo @ 0x1409F089C
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x1409F0524 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpFillValidFaultInfo(__int64 a1, __int64 *a2, __int64 a3, char a4, char a5)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 40) = *a2 & 0xFFFFFFFFFFFFFLL;
  if ( (a4 & 2) != 0 || (*a2 & 0x20000000000000LL) != 0 && (a5 & 2) != 0 )
    *(_QWORD *)(a1 + 32) |= 0x10000000000000uLL;
  if ( (a4 & 4) != 0 )
    *(_QWORD *)(a1 + 32) |= 0x20000000000000uLL;
  result = *a2;
  if ( (*a2 & 0x80000000000000LL) != 0 )
  {
    result = 0x40000000000000LL;
    *(_QWORD *)(a1 + 32) |= 0x40000000000000uLL;
  }
  if ( a4 < 0 )
    *(_QWORD *)(a1 + 32) |= 0x80000000000000uLL;
  return result;
}
