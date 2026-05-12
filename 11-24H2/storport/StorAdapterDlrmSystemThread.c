/*
 * XREFs of StorAdapterDlrmSystemThread @ 0x140139A40
 * Callers:
 *     <none>
 * Callees:
 *     DlrmHandlePowerStateAction @ 0x140138D50 (DlrmHandlePowerStateAction.c)
 *     DlrmHandleScaleAction @ 0x140138E3C (DlrmHandleScaleAction.c)
 *     DlrmRecordPciGenerationTime @ 0x140139030 (DlrmRecordPciGenerationTime.c)
 *     DlrmUpdateLinkInformation @ 0x1401390C0 (DlrmUpdateLinkInformation.c)
 */

void __fastcall StorAdapterDlrmSystemThread(char *StartContext)
{
  char v1; // di
  int Flink; // eax
  PLIST_ENTRY v4; // rax
  PLIST_ENTRY v5; // rbx
  KIRQL v6; // bl

  v1 = 0;
  if ( StartContext )
  {
    if ( *((_QWORD *)StartContext + 2) )
    {
      KeWaitForSingleObject(StartContext + 88, Executive, 0, 0, 0LL);
      while ( (*((_DWORD *)StartContext + 3) & 4) == 0 )
      {
        while ( 1 )
        {
          v4 = ExInterlockedRemoveHeadList((PLIST_ENTRY)StartContext + 9, (PKSPIN_LOCK)StartContext + 20);
          v5 = v4;
          if ( !v4 )
            break;
          Flink = (int)v4[1].Flink;
          switch ( LODWORD(v5[1].Flink) )
          {
            case 1:
            case 2:
              DlrmHandleScaleAction((__int64)StartContext, Flink);
              v1 = 1;
              break;
            case 3:
            case 4:
            case 5:
              DlrmHandlePowerStateAction((__int64)StartContext, Flink);
              break;
            case 6:
              DlrmRecordPciGenerationTime((__int64)StartContext, *((_DWORD *)StartContext + 2));
              break;
          }
          if ( (BYTE4(v5[1].Flink) & 1) != 0 )
            ExFreePoolWithTag(v5, 0x4D4C6152u);
          else
            ExInterlockedInsertTailList((PLIST_ENTRY)(StartContext + 120), v5, (PKSPIN_LOCK)StartContext + 17);
        }
        DlrmUpdateLinkInformation((__int64)StartContext);
        if ( v1 )
        {
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)StartContext + 14);
          *((_QWORD *)StartContext + 5) = KeQueryUnbiasedInterruptTime();
          *((_QWORD *)StartContext + 6) = KeQueryUnbiasedInterruptTime();
          KeReleaseSpinLock((PKSPIN_LOCK)StartContext + 14, v6);
          _InterlockedExchange64((volatile __int64 *)StartContext + 3, 0LL);
          _InterlockedExchange64((volatile __int64 *)StartContext + 4, 0LL);
          _interlockedbittestandreset((volatile signed __int32 *)StartContext + 3, 1u);
          v1 = 0;
        }
        KeWaitForSingleObject(StartContext + 88, Executive, 0, 0, 0LL);
      }
    }
  }
  PsTerminateSystemThread(0);
}
