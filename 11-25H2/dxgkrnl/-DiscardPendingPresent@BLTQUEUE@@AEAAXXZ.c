/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x140185084
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14027BDBC (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140304A00 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x140305710 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x140305D64 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x140305DB0 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403074A4 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1403E573C (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  struct _KMUTANT *v1; // rbx
  _QWORD **v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbp

  v1 = (struct _KMUTANT *)((char *)this + 160);
  KeWaitForSingleObject((char *)this + 160, Executive, 0, 0, 0LL);
  v3 = (_QWORD **)((char *)this + 216);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v6 = v4 - 1;
    v5[1] = v3;
    if ( v4[4] )
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)(v4 - 1));
    BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v6, 1u);
    DXGALLOCATIONREFERENCE::AssignNull((DXGALLOCATIONREFERENCE *)(v6 + 4));
    BLTQUEUE::InsertQueueTail(this, (char *)this + 232, v6, 1LL);
  }
  if ( *((_BYTE *)this + 605) || *((_BYTE *)this + 606) )
  {
    *(_WORD *)((char *)this + 605) = 0;
    BLTQUEUE::FinishCommand(this, 0);
  }
  KeReleaseMutex(v1, 0);
}
