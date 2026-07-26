/*
 * XREFs of ?ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14006D5C0
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14017DF70 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 */

struct _NDIS_OPEN_BLOCK *__fastcall ndisReferenceNextUnprocessedOpenEx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // r14
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  int v5; // [rsp+30h] [rbp-28h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v5 = 1;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x14u,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1,
      v5);
  }
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  while ( OpenQueue )
  {
    KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
    if ( (OpenQueue->OpenFlags & 0x80000) != 0 && (OpenQueue->OpenFlags & 0x10) == 0 )
    {
      OpenQueue->OpenFlags |= 0x10u;
    }
    else if ( (OpenQueue->OpenFlags & 0x18010) == 0 )
    {
      OpenQueue->OpenFlags |= 0x80010u;
      KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
      break;
    }
    KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x15u,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1,
      OpenQueue);
  return OpenQueue;
}
