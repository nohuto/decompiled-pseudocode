/*
 * XREFs of ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x14015CA90
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x14011FC6C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 */

struct tagQ *__fastcall tagTHREADINFO::AssignQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  ULONG_PTR v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // r8
  ULONG_PTR v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax

  v4 = tagTHREADINFO::AssignQueueWorker((ULONG_PTR)this, (ULONG_PTR)a2, 528LL, 1688LL, 472);
  v5 = (__int64 *)*((_QWORD *)a2 + 15);
  v6 = 0LL;
  v7 = v4;
  if ( v5 )
    v8 = *v5;
  else
    v8 = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 61) + 32LL) = v8;
  v9 = (__int64 *)*((_QWORD *)a2 + 16);
  if ( v9 )
    v6 = *v9;
  *(_QWORD *)(*((_QWORD *)this + 61) + 40LL) = v6;
  return (struct tagQ *)v7;
}
