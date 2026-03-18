/*
 * XREFs of ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A7418
 * Callers:
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

unsigned __int64 __fastcall GetThreadPointerData(
        struct _LIST_ENTRY *a1,
        unsigned __int16 a2,
        unsigned int *a3,
        int *a4)
{
  struct tagTHREADPOINTERDATA *Blink; // r10

  Blink = (struct tagTHREADPOINTERDATA *)a1[1].Blink;
  if ( Blink )
  {
    if ( *((_WORD *)Blink + 8) != a2 )
      return 0LL;
  }
  else
  {
    Blink = FindThreadPointerData(a1, a2);
    if ( !Blink )
      return 0LL;
  }
  if ( (*((_DWORD *)Blink + 12) & 8) != 0 )
    return 0LL;
  if ( a3 )
    *a3 = *((_DWORD *)Blink + 5);
  if ( a4 )
    *a4 = -(*((_DWORD *)Blink + 12) & 1);
  return *((_QWORD *)Blink + 3);
}
