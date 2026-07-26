/*
 * XREFs of ?ndisOidPrePortState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C27C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400B0050 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPrePortState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rsi
  unsigned int v5; // edx
  __int64 v6; // rdx
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  KIRQL v8; // dl
  KIRQL v9; // dl
  __int64 v10; // rcx
  KIRQL v11; // dl
  __int64 v13; // [rsp+30h] [rbp-38h]
  char v14[4]; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = *(_DWORD *)(v3 + 8);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA0u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v1,
      *(_DWORD *)v14);
  }
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 48) < 0x30u )
      {
        *(_DWORD *)(v3 + 52) = 0;
        *(_DWORD *)(v3 + 56) = 48;
        *((_DWORD *)a1 + 10) = -1073676266;
        goto LABEL_17;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, &NewIrql);
      v5 = *(_DWORD *)(v3 + 8);
      if ( v5 )
      {
        PortByPortNumber = ndisFindPortByPortNumber((struct _NDIS_MINIPORT_BLOCK *)v1, v5);
        if ( !PortByPortNumber )
        {
          v8 = NewIrql;
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v8);
          *((_DWORD *)a1 + 10) = -1071448019;
          goto LABEL_17;
        }
        if ( PortByPortNumber->PortPnPState != NdisPortPnPStateActivated )
        {
          v9 = NewIrql;
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v9);
          *((_DWORD *)a1 + 10) = -1071448018;
          goto LABEL_17;
        }
        v10 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v10 = 0LL;
        *(_OWORD *)(v10 + 16) = 0LL;
        *(_OWORD *)(v10 + 32) = 0LL;
        *(_DWORD *)v10 = 3146112;
        *(_DWORD *)(v10 + 4) = PortByPortNumber->PortCharacteristics.MediaConnectState;
        *(_QWORD *)(v10 + 8) = PortByPortNumber->PortCharacteristics.XmitLinkSpeed;
        *(_QWORD *)(v10 + 16) = PortByPortNumber->PortCharacteristics.RcvLinkSpeed;
        *(_DWORD *)(v10 + 24) = PortByPortNumber->PortCharacteristics.Direction;
        *(_DWORD *)(v10 + 28) = PortByPortNumber->PortCharacteristics.SendControlState;
        *(_DWORD *)(v10 + 32) = PortByPortNumber->PortCharacteristics.RcvControlState;
        *(_DWORD *)(v10 + 36) = PortByPortNumber->PortCharacteristics.SendAuthorizationState;
        *(_DWORD *)(v10 + 40) = PortByPortNumber->PortCharacteristics.RcvAuthorizationState;
      }
      else
      {
        v6 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v6 = 0LL;
        *(_OWORD *)(v6 + 16) = 0LL;
        *(_OWORD *)(v6 + 32) = 0LL;
        *(_DWORD *)v6 = 3146112;
        *(_DWORD *)(v6 + 4) = *(_DWORD *)(v1 + 480);
        *(_QWORD *)(v6 + 8) = *(_QWORD *)(v1 + 792);
        *(_QWORD *)(v6 + 16) = *(_QWORD *)(v1 + 800);
        *(_DWORD *)(v6 + 24) = *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 532LL);
        *(_DWORD *)(v6 + 28) = *(_DWORD *)(v1 + 3320);
        *(_DWORD *)(v6 + 32) = *(_DWORD *)(v1 + 3324);
        *(_DWORD *)(v6 + 36) = *(_DWORD *)(v1 + 3328);
        *(_DWORD *)(v6 + 40) = *(_DWORD *)(v1 + 3332);
      }
      v11 = NewIrql;
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v11);
      *((_DWORD *)a1 + 10) = 0;
      *(_DWORD *)(v3 + 52) = 48;
      *(_DWORD *)(v3 + 56) = 48;
    }
    v2 = 1;
  }
LABEL_17:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = *(_DWORD *)(v3 + 8);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA1u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v1,
      v13);
  }
  return v2;
}
