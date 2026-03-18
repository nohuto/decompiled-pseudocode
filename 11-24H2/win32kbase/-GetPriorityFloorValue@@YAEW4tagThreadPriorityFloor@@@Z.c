/*
 * XREFs of ?GetPriorityFloorValue@@YAEW4tagThreadPriorityFloor@@@Z @ 0x1400C028C
 * Callers:
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFA00 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFE30 (-SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall GetPriorityFloorValue(unsigned int a1)
{
  if ( a1 > 1 )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  return *((_BYTE *)&unk_14025E290 + 8 * a1);
}
