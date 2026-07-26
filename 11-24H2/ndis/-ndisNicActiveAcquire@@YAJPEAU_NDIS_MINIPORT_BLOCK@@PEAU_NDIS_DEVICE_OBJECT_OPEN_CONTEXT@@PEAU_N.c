/*
 * XREFs of ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x14003ACE0
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDL @ 0x140006710 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x140037220 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140039B90 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x14003B070 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x14003BD90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14003C1E0 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140054980 (WPP_RECORDER_SF_LqZ.c)
 *     WPP_RECORDER_SF_DDL @ 0x140067790 (WPP_RECORDER_SF_DDL.c)
 */

__int64 __fastcall ndisNicActiveAcquire(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3,
        struct _IRP *a4)
{
  unsigned int v8; // esi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v10; // al
  KIRQL v11; // r12
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // edi
  int v16; // edx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v19; // rdx
  unsigned int v20; // eax
  char v21[8]; // [rsp+38h] [rbp-30h]

  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDL(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, 16);
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  ++*((_DWORD *)a2 + 7);
  v11 = v10;
  ndisAoAcActiveRefIncrement(AoAc, *((unsigned int *)a3 + 4));
  if ( (unsigned int)(*((_DWORD *)AoAc + 16) - 3) <= 1 )
  {
    *((_DWORD *)AoAc + 16) = 0;
    ndisAoAcActiveRefSubtract(AoAc, 0LL);
    if ( KeCancelTimer((PKTIMER)((char *)AoAc + 72)) )
      ndisDereferenceMiniport(a1, 2u);
  }
  v14 = 948328779;
  if ( *((_BYTE *)AoAc + 452) )
  {
    *((_BYTE *)AoAc + 452) = 0;
    v13 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 55);
    v12 = v13 / 0x2710uLL;
    if ( v13 / 0x2710uLL > ndisAoAcMaxStartToRefTime )
      ndisAoAcMaxStartToRefTime = v13 / 0x2710uLL;
  }
  if ( *((_BYTE *)AoAc + 464) )
  {
    *((_BYTE *)AoAc + 464) = 0;
    v13 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)AoAc + 57);
    v12 = v13 / 10000;
    if ( v13 / 10000 > ndisAoAcMaxWakeToRefTime )
      ndisAoAcMaxWakeToRefTime = v13 / 10000;
  }
  v15 = *((_DWORD *)AoAc + 13);
  if ( (byte_14011B103 & 4) != 0 )
    McTemplateK0xqqq_EtwWriteTransfer(
      v13,
      (__int64)&NicActiveAcquired,
      (__int64)&a1->InterfaceGuid,
      *((_QWORD *)a3 + 1),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)AoAc + 13));
  if ( !*((_DWORD *)AoAc + 94) || *((_DWORD *)AoAc + 95) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
  }
  else
  {
    if ( *((_DWORD *)AoAc + 13) == 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_LqZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        v14,
        17,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        *((_DWORD *)a3 + 4),
        (char)a1,
        (__int64)a1->pAdapterInstanceName);
    p_ListEntry = &a4->Tail.Overlay.ListEntry;
    a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v19 = (_LIST_ENTRY *)*((_QWORD *)AoAc + 5);
    if ( v19->Flink != (_LIST_ENTRY *)((char *)AoAc + 32) )
      __fastfail(3u);
    a4->Tail.Overlay.ListEntry.Blink = v19;
    p_ListEntry->Flink = (_LIST_ENTRY *)((char *)AoAc + 32);
    v19->Flink = p_ListEntry;
    *((_QWORD *)AoAc + 5) = p_ListEntry;
    ++*((_DWORD *)AoAc + 12);
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
    v20 = ndisRequestNicActive(a1, RunAsynchronous);
    v8 = v20;
    if ( v20 != 259 )
    {
      if ( v20 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x12u,
          (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
          v20,
          a1);
      ndisAoAcCompleteQueuedIrps(a1, v8);
      v8 = 259;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v21 = v8;
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      0xEu,
      0x13u,
      (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      (char)a1,
      v15,
      *(_QWORD *)v21);
  }
  return v8;
}
