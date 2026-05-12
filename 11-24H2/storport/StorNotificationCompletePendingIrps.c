/*
 * XREFs of StorNotificationCompletePendingIrps @ 0x140055A8C
 * Callers:
 *     StorFreeEventNotificationResources @ 0x140066A8C (StorFreeEventNotificationResources.c)
 *     StorCancelStorageNotificationIrp @ 0x1401B1F64 (StorCancelStorageNotificationIrp.c)
 *     StorDeleteStorageNotification @ 0x1401B2020 (StorDeleteStorageNotification.c)
 *     StorDisableStorageNotification @ 0x1401B2108 (StorDisableStorageNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall StorNotificationCompletePendingIrps(__int64 a1, int a2)
{
  struct _IO_CSQ *v3; // rbx
  PIRP v4; // rax

  if ( a1 && *(__int16 *)(a1 + 36) > 0 )
  {
    v3 = (struct _IO_CSQ *)(a1 + 80);
    while ( 1 )
    {
      v4 = IoCsqRemoveNextIrp(v3, 0LL);
      if ( !v4 )
        break;
      v4->IoStatus.Status = a2;
      v4->IoStatus.Information = 0LL;
      IofCompleteRequest(v4, 0);
    }
  }
}
