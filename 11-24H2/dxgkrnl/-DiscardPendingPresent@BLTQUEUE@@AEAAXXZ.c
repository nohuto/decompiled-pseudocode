/*
 * XREFs of ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402822D0
 * Callers:
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x140282E18 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140282F6C (-RestartQueueWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1402F99DC (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z @ 0x1403A1500 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@W4BltQueueEntryAddReason@1@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1403DCD98 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1403E3F70 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404300C8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  struct _KMUTANT *v1; // rdi
  _QWORD **v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbp
  __int64 v7; // rax
  char v8; // [rsp+40h] [rbp+8h]

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
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    v7 = *(_QWORD *)((char *)this + 676);
    *((_DWORD *)this + 169) &= 0xFFFFFF9F;
    v8 = v7;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
    if ( (v8 & 0x60) != 0 )
      goto LABEL_14;
  }
  else if ( *((_BYTE *)this + 661) || *((_BYTE *)this + 662) )
  {
    *(_WORD *)((char *)this + 661) = 0;
LABEL_14:
    BLTQUEUE::FinishCommand(this, 0);
  }
  KeReleaseMutex(v1, 0);
}
