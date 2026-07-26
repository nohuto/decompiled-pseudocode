/*
 * XREFs of ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401761D0
 * Callers:
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017BA40 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisDeQueueOpenOnProtocol(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  struct _NDIS_PROTOCOL_BLOCK *v2; // rdi
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  _NDIS_OPEN_BLOCK **p_ProtocolNextOpen; // rdx
  int v7; // edx
  char v8; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      48,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a1,
      v8);
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&v2->Ref.SpinLock);
  OpenQueue = v2->OpenQueue;
  if ( a1 == OpenQueue )
  {
    v2->OpenQueue = a1->ProtocolNextOpen;
  }
  else if ( OpenQueue )
  {
    while ( 1 )
    {
      p_ProtocolNextOpen = &OpenQueue->ProtocolNextOpen;
      OpenQueue = OpenQueue->ProtocolNextOpen;
      if ( a1 == OpenQueue )
        break;
      if ( !OpenQueue )
        goto LABEL_7;
    }
    *p_ProtocolNextOpen = OpenQueue->ProtocolNextOpen;
  }
LABEL_7:
  KeReleaseSpinLock(&v2->Ref.SpinLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      6,
      49,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)a1,
      (char)v2);
  }
}
