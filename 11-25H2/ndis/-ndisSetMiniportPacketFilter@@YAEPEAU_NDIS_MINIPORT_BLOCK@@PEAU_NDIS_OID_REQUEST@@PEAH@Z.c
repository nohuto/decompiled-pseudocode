/*
 * XREFs of ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x140053250
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140052FB0 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 */

__int64 __fastcall ndisSetMiniportPacketFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  unsigned __int8 v3; // si
  _X_FILTER *EthDB; // r13
  struct _NDIS_OID_REQUEST *v6; // rbx
  char v8; // di
  KIRQL v9; // dl
  unsigned int *p_RequestBuffer; // r15
  int v11; // eax
  unsigned int v13; // [rsp+78h] [rbp+10h]

  v3 = 0;
  EthDB = 0LL;
  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      a2);
  *a3 = 0;
  v8 = 1;
  if ( v6->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    v13 = *(_DWORD *)v6->DATA.QUERY_INFORMATION.InformationBuffer;
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    if ( a1->MiniportMediaType == NdisMedium802_3 )
      EthDB = a1->EthDB;
    p_RequestBuffer = &a1->RequestBuffer;
    a1->RequestBuffer = v13;
    if ( EthDB )
    {
      if ( (v13 & 0xFFFFFF7F) != (EthDB->MiniportPacketFilter & 0xFFFFFF7F) )
      {
        *p_RequestBuffer = v13 & 0xFFFFFF7F;
        v8 = 0;
      }
      if ( (a1->Flags & 0x20000) != 0 && (v13 & 0xFFFFFF5F) != (EthDB->MiniportPacketFilter & 0xFFFFFF5F) )
      {
        *p_RequestBuffer = v13 & 0xFFFFFF5F;
        v8 = 0;
      }
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v9);
      v11 = *(_DWORD *)&v6->NdisReserved[16];
      if ( (v11 & 0x80000) == 0 )
        v3 = v8;
      if ( v3 )
      {
        if ( !*a3 )
          v6->DATA.QUERY_INFORMATION.BytesWritten = 4;
        goto LABEL_9;
      }
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v9);
      v11 = *(_DWORD *)&v6->NdisReserved[16];
    }
    *(_DWORD *)&v6->NdisReserved[16] = v11 | 0x800;
    a1->SetInfoBuf = v6->DATA.QUERY_INFORMATION.InformationBuffer;
    a1->SetInfoBufLen = v6->DATA.METHOD_INFORMATION.InputBufferLength;
    v6->DATA.QUERY_INFORMATION.InformationBuffer = p_RequestBuffer;
    v6->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
LABEL_9:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x3Cu,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        (char)a1,
        v3,
        *a3);
    return v3;
  }
  v6->DATA.QUERY_INFORMATION.BytesNeeded = 4;
  *a3 = -1073676268;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      59,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      20);
  }
  return 1LL;
}
