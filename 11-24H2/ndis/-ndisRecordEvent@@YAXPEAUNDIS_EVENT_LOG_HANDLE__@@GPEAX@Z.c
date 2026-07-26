/*
 * XREFs of ?ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z @ 0x1400373C0
 * Callers:
 *     NdisScheduleWorkItem @ 0x1400371E0 (NdisScheduleWorkItem.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140076E70 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x140037480 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 */

void __fastcall ndisRecordEvent(struct _NDIS_EVENT_LOG *a1, unsigned __int16 a2, void *a3)
{
  KIRQL v3; // di
  char v4; // bp
  unsigned int v8; // eax

  if ( a1 )
  {
    v3 = 0;
    v4 = 0;
    if ( _bittest16((const signed __int16 *)&a1->Flags, 0xCu) )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock.m_lock);
      v4 = 1;
      v8 = a1->LastUsedEntry + 1;
      a1->LastUsedEntry = v8;
    }
    else
    {
      v8 = _InterlockedIncrement((volatile signed __int32 *)&a1->LastUsedEntry);
    }
    ndisFillEventLogEntry(a1, v8 % a1->NumEntries, a2, a3);
    if ( v4 )
      KeReleaseSpinLock(&a1->Lock.m_lock, v3);
  }
}
