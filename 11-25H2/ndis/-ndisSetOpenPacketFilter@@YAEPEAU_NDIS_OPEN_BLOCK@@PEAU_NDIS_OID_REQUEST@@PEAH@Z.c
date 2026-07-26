/*
 * XREFs of ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140053C80
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140052FB0 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140053C40 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140053FE0 (-ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z @ 0x140054030 (-XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z.c)
 *     WPP_RECORDER_SF_qqDL @ 0x140086C50 (WPP_RECORDER_SF_qqDL.c)
 */

unsigned __int8 __fastcall ndisSetOpenPacketFilter(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  int v7; // r14d
  int v8; // edi
  KIRQL v9; // r10
  void **p_MiniportThread; // r12
  _NDIS_MEDIUM MediaType; // eax
  unsigned __int8 v12; // r14
  _DWORD *InformationBuffer; // rdi
  KIRQL v14; // dl
  KIRQL v15; // r9
  int v16; // r8d
  int v17; // r9d
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+38h] [rbp-50h]
  unsigned int CombinedPacketFilter; // [rsp+90h] [rbp+8h]

  MiniportHandle = a1->MiniportHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x34u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1);
  v7 = 0;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    v8 = 259;
    CombinedPacketFilter = *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( (a1->OpenFlags & 0x8000) != 0 )
    {
      p_MiniportThread = &MiniportHandle->MiniportThread;
    }
    else
    {
      v9 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
      p_MiniportThread = &MiniportHandle->MiniportThread;
      MiniportHandle->MiniportThread = KeGetCurrentThread();
      MediaType = MiniportHandle->MediaType;
      if ( MediaType )
      {
        if ( MediaType == NdisMediumNative802_11 )
        {
          a1->OldPacketFilters = a1->PacketFilters;
          a1->PacketFilters = CombinedPacketFilter;
          *p_MiniportThread = 0LL;
          KeReleaseSpinLock(&MiniportHandle->Lock, v9);
          goto LABEL_10;
        }
      }
      else
      {
        v7 = XFilterAdjust(MiniportHandle->EthDB, a1, CombinedPacketFilter);
        CombinedPacketFilter = MiniportHandle->EthDB->CombinedPacketFilter;
      }
      *p_MiniportThread = 0LL;
      KeReleaseSpinLock(&MiniportHandle->Lock, v9);
      if ( v7 != 259 )
      {
        a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
        v12 = 1;
        v8 = 0;
        goto LABEL_11;
      }
    }
LABEL_10:
    v12 = 0;
LABEL_11:
    *a3 = v8;
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    v14 = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
    if ( (*InformationBuffer & 0xA0) != 0 )
    {
      if ( (a1->OpenFlags & 4) != 0 )
        goto LABEL_13;
      a1->OpenFlags |= 4u;
      ++MiniportHandle->PmodeOpens;
      if ( a1->ProtocolMajorVersion >= 6 )
        ++MiniportHandle->PmodeOpen6;
    }
    else
    {
      if ( (a1->OpenFlags & 4) == 0 )
      {
LABEL_13:
        KeReleaseSpinLock(&a1->SpinLock, v14);
        KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
        *p_MiniportThread = KeGetCurrentThread();
        ndisUpdateLoopbackOpens(MiniportHandle);
        *p_MiniportThread = 0LL;
        KeReleaseSpinLock(&MiniportHandle->Lock, v15);
        *(_DWORD *)&a2->NdisReserved[92] = CombinedPacketFilter;
        *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        *(_DWORD *)&a2->NdisReserved[88] = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        a2->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = &a2->NdisReserved[92];
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqDL(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v16, v17, v19, (char)a1, (char)a2, v12, *a3);
        return v12;
      }
      a1->OpenFlags &= ~4u;
      --MiniportHandle->PmodeOpens;
      if ( a1->ProtocolMajorVersion >= 6 )
        --MiniportHandle->PmodeOpen6;
    }
    ndisUpdateCheckForLoopbackFlag(MiniportHandle);
    goto LABEL_13;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v20 = -1073676268;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x35u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)a2,
      v20);
  }
  *a3 = -1073676268;
  return 1;
}
