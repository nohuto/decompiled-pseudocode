/*
 * XREFs of ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140173CB0
 * Callers:
 *     NdisCmRegisterAddressFamilyEx @ 0x140089330 (NdisCmRegisterAddressFamilyEx.c)
 *     ?ndisMFinishQueuedPendingOpen@@YAXPEAX@Z @ 0x140173B50 (-ndisMFinishQueuedPendingOpen@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006BB0 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140051CB0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14005DE40 (-ndisDereferenceAfNotification@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisCreateNotifyQueue(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct CO_ADDRESS_FAMILY *a3,
        struct _NDIS_AF_NOTIFY **a4)
{
  struct _NDIS_OPEN_BLOCK *v4; // rdi
  unsigned int v8; // r14d
  _NDIS_AF_LIST *CallMgrAfList; // rbx
  int v10; // edx
  __int64 Pool2; // rsi
  _QWORD *v12; // rax
  _NDIS_OPEN_BLOCK *i; // rbx
  int v15; // edx
  __int64 v16; // r12
  void *v17; // rcx
  struct _NDIS_OPEN_BLOCK *v18; // rbx
  char v19; // [rsp+30h] [rbp-38h]

  v4 = a2;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      19,
      12,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)a1,
      v19);
  }
  *a4 = 0LL;
  if ( v4 )
  {
    KeAcquireSpinLockAtDpcLevel(&v4->SpinLock);
    if ( (v4->OpenFlags & 0x18000) == 0 )
    {
      CallMgrAfList = a1->CallMgrAfList;
      while ( CallMgrAfList )
      {
        Pool2 = ExAllocatePool2(64LL, 72LL, 1868776526LL);
        if ( !Pool2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v10,
              19,
              13,
              (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids);
          }
          v8 = -1073741670;
          break;
        }
        _InterlockedIncrement(&v4->PendingAfNotifications);
        ndisMReferenceOpen((__int64)v4, 0xEu);
        *(_QWORD *)(Pool2 + 40) = a1;
        *(_QWORD *)(Pool2 + 48) = v4;
        *(_QWORD *)(Pool2 + 56) = *(_QWORD *)&CallMgrAfList->AddressFamily.AddressFamily;
        *(_DWORD *)(Pool2 + 64) = CallMgrAfList->AddressFamily.MinorVersion;
        *(_QWORD *)Pool2 = *a4;
        CallMgrAfList = CallMgrAfList->NextAf;
        *a4 = (struct _NDIS_AF_NOTIFY *)Pool2;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&v4->SpinLock);
    if ( v8 )
    {
LABEL_27:
      v17 = *a4;
      if ( *a4 )
      {
        do
        {
          v18 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)v17 + 6);
          *a4 = *(struct _NDIS_AF_NOTIFY **)v17;
          ExFreePoolWithTag(v17, 0);
          ndisDereferenceAfNotification(v18);
          ndisMDereferenceOpenLocked(v18, 0xEu);
          v17 = *a4;
        }
        while ( *a4 );
        goto LABEL_12;
      }
    }
  }
  else
  {
    for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
    {
      if ( i->ProtocolHandle->CoAfRegisterNotifyHandler )
      {
        KeAcquireSpinLockAtDpcLevel(&i->SpinLock);
        if ( (i->OpenFlags & 0x18000) != 0 )
        {
          KeReleaseSpinLockFromDpcLevel(&i->SpinLock);
        }
        else
        {
          v16 = ExAllocatePool2(64LL, 72LL, 1868776526LL);
          if ( !v16 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = 2;
              WPP_RECORDER_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v15,
                19,
                14,
                (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids);
            }
            v8 = -1073741670;
            KeReleaseSpinLockFromDpcLevel(&i->SpinLock);
            goto LABEL_27;
          }
          _InterlockedIncrement(&i->PendingAfNotifications);
          ndisMReferenceOpen((__int64)i, 0xEu);
          KeReleaseSpinLockFromDpcLevel(&i->SpinLock);
          *(_QWORD *)(v16 + 40) = a1;
          *(_QWORD *)(v16 + 48) = i;
          *(_QWORD *)(v16 + 56) = *(_QWORD *)&a3->AddressFamily;
          *(_DWORD *)(v16 + 64) = a3->MinorVersion;
          *(_QWORD *)v16 = *a4;
          *a4 = (struct _NDIS_AF_NOTIFY *)v16;
        }
      }
    }
  }
  v12 = *a4;
  if ( *a4 )
  {
    v12[4] = v12;
    v12[3] = ndisNotifyAfRegistration;
    v12[1] = 0LL;
  }
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xFu,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)a1,
      (char)v4,
      v8);
  return v8;
}
