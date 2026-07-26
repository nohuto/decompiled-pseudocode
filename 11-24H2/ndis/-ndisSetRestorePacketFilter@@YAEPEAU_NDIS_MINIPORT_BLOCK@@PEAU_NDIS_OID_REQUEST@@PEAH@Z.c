/*
 * XREFs of ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400BF178
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003E520 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z @ 0x14003D3D0 (-XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z.c)
 *     ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003EF70 (-ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003FE10 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisSetRestorePacketFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  struct _NDIS_OID_REQUEST *v4; // rbp
  _X_FILTER *EthDB; // rcx
  unsigned int CombinedPacketFilter; // ecx
  _NDIS_OPEN_BLOCK *OpenQueue; // rsi
  KIRQL v10; // dl
  int v11; // edx
  char v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  NewIrql = 0;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      55,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      v12);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  EthDB = a1->EthDB;
  if ( a1->MediaType )
  {
    CombinedPacketFilter = EthDB->CombinedPacketFilter;
  }
  else
  {
    XFilterAdjust(EthDB, 0LL, 0);
    CombinedPacketFilter = a1->EthDB->CombinedPacketFilter;
  }
  *a3 = 0;
  if ( v4->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    *(_DWORD *)v4->DATA.QUERY_INFORMATION.InformationBuffer = CombinedPacketFilter;
    if ( (CombinedPacketFilter & 0xA0) != 0 )
    {
      OpenQueue = a1->OpenQueue;
      a1->PmodeOpens = 0;
      while ( OpenQueue )
      {
        if ( (OpenQueue->PacketFilters & 0xA0) != 0 )
        {
          KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
          OpenQueue->OpenFlags |= 4u;
          KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
          ++a1->PmodeOpens;
          if ( OpenQueue->ProtocolMajorVersion >= 6 )
            ++a1->PmodeOpen6;
          ndisUpdateCheckForLoopbackFlag(a1);
        }
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
    }
    ndisUpdateLoopbackOpens(a1);
    v10 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        11,
        57,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)v4);
    }
    return 0;
  }
  else
  {
    v4->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    *a3 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = -1073676268;
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x38u,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)a1,
        (char)v4,
        v13);
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    return 1;
  }
}
