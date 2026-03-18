/*
 * XREFs of ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x14011FC40
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x14011FC6C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 */

struct tagQ *__fastcall tagTHREADINFO::AssignAttachQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  return (struct tagQ *)tagTHREADINFO::AssignQueueWorker((_DWORD)this, (_DWORD)a2, 536, 1696, 696);
}
