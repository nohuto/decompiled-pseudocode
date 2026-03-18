/*
 * XREFs of ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x14011FC6C
 * Callers:
 *     ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x14011FC40 (-AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x14011FC6C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x14015CA90 (-AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?AddThreadToListWorker@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@PEQ1@PEAU2@PEQ2@PEAU2@@Z @ 0x1400FFADC (-AddThreadToListWorker@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@PEQ1@PEAU2@PEQ2@PEAU2@@Z.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x14011FC6C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ?RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@@Z @ 0x1401A35E0 (-RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@@Z.c)
 */

ULONG_PTR __fastcall tagTHREADINFO::AssignQueueWorker(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5)
{
  ULONG_PTR BugCheckParameter4; // rsi

  BugCheckParameter4 = *(_QWORD *)(a5 + a1);
  if ( BugCheckParameter4
    && !(unsigned __int8)tagTHREADINFO::RemoveThreadFromListWorker(a1, *(_QWORD *)(a5 + a1), a3, a4) )
  {
    KeBugCheckEx(0x164u, 0x12uLL, a1, a2, BugCheckParameter4);
  }
  *(_QWORD *)(a5 + a1) = a2;
  if ( a2 )
    AddThreadToListWorker(a2, a1, a3, a4);
  if ( a5 == 472 && a2 == *(_QWORD *)(a1 + 696) )
    tagTHREADINFO::AssignQueueWorker(a1, 0, 536, 1696, 696);
  return BugCheckParameter4;
}
