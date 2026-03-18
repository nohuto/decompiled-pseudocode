/*
 * XREFs of ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400C0248
 * Callers:
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFA00 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFE30 (-SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?IsPriorityFloorSet@tagTHREADINFO@@QEAA_NW4tagThreadPriorityFloor@@@Z @ 0x1400C01B0 (-IsPriorityFloorSet@tagTHREADINFO@@QEAA_NW4tagThreadPriorityFloor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPriorityFloorRequester(unsigned int a1)
{
  if ( a1 > 1 )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  return dword_14025E294[2 * a1];
}
