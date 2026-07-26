/*
 * XREFs of ?ndisRequestPowerResume@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400CA184
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1400853E0 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016750 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x140048FD0 (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 *     ?ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x14006AF50 (-ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z @ 0x1400990A0 (-ndisCancelDequeuedDirectOidRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1400CA120 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

void __fastcall ndisRequestPowerResume(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v3; // al
  int v4; // ecx
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rsi
  struct _NET_BUFFER_LIST *v7; // r14
  __int64 v8; // r8
  struct _LIST_ENTRY v9; // [rsp+30h] [rbp-18h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  v9 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v4 = *((_DWORD *)SelectiveSuspend + 126);
  v5 = v3;
  if ( (v4 & 0x30) == 0x10 )
  {
    if ( (v4 & 0x400) != 0 )
    {
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 248), 0, 0);
      v6 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 68);
      *((_QWORD *)SelectiveSuspend + 68) = 0LL;
      *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
      v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
      *((_QWORD *)SelectiveSuspend + 70) = 0LL;
      *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
      ndisMoveLinkedList(&v9, (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584));
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
      if ( v6 )
      {
        if ( byte_1401278B0 && (*((_DWORD *)&a1->PktMonComp + 14) & 2) != 0 )
          PktMonClientNblDropNdis((__int64)&a1->PktMonComp, (__int64)v6, v8, 2LL, 0xC023002F, -536866807);
        NdisSetStatusInNblChain(v6, -1073676271);
        ndisMSendNetBufferListsCompleteInternal(a1, v6, 0, 0);
      }
      if ( v7 )
        ndisReplayRecvNbls(a1, v7);
      ndisCancelDequeuedDirectOidRequests(a1, &v9);
    }
    else
    {
      *((_DWORD *)SelectiveSuspend + 126) = v4 | 0x20;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v3);
      ndisRequestDevicePowerD0(a1, NdisMEventD0_SSResume);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v3);
  }
}
