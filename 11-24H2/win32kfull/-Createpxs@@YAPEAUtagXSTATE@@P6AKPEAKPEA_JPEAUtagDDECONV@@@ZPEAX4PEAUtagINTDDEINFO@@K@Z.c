/*
 * XREFs of ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402AFA70
 * Callers:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402AF9BC (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0108 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1402B04D0 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B07D0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0BF0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagXSTATE *__fastcall Createpxs(
        unsigned int (*a1)(unsigned int *, __int64 *, struct tagDDECONV *),
        __int64 a2,
        void *a3,
        struct tagINTDDEINFO *a4,
        unsigned int a5)
{
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // r8
  struct tagXSTATE *result; // rax

  v9 = PtiCurrent((__int64)a1, a2);
  LOBYTE(v10) = 11;
  result = (struct tagXSTATE *)HMAllocObject(v9, 0LL, v10, 72LL);
  if ( result )
  {
    *((_QWORD *)result + 3) = 0LL;
    *((_QWORD *)result + 4) = a1;
    *((_QWORD *)result + 5) = a2;
    *((_QWORD *)result + 6) = a3;
    *((_QWORD *)result + 7) = a4;
    *((_DWORD *)result + 16) = a5;
  }
  else
  {
    if ( a4 )
      Win32FreePool(a4);
    return 0LL;
  }
  return result;
}
