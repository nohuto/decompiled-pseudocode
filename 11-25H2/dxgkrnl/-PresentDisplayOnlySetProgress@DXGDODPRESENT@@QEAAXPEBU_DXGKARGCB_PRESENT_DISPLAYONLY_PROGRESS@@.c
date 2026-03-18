/*
 * XREFs of ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x140091E24
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1400375F4 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x14006C340 (DxgPresentDisplayOnlyProgressCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDODPRESENT::PresentDisplayOnlySetProgress(
        DXGDODPRESENT *this,
        const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  __int64 VidPnSourceId; // rax
  __int64 v3; // r8
  __int64 v4; // rbx

  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId < *(_DWORD *)this )
  {
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
    {
      v4 = v3 + 2968 * VidPnSourceId;
      if ( *(_DWORD *)(v4 + 760) )
      {
        if ( a2->ProgressId == DXGK_PRESENT_DISPLAYONLY_PROGRESS_ID_FAILED )
          _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)v4 + 140LL), 0x40000000u);
        if ( KeGetCurrentIrql() > 2u )
          KeInsertQueueDpc((PRKDPC)(v4 + 696), 0LL, 0LL);
        else
          KeSetEvent((PRKEVENT)(v4 + 672), 0, 0);
      }
    }
  }
}
