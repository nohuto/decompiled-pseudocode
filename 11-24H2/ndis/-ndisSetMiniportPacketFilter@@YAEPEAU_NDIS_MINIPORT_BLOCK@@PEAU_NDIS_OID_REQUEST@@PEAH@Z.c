/*
 * XREFs of ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14003E7C0
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14003E520 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x140005270 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 */

__int64 __fastcall ndisSetMiniportPacketFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  unsigned __int8 v3; // bp
  _X_FILTER *EthDB; // r13
  struct _NDIS_OID_REQUEST *v6; // rdi
  char v8; // r12
  unsigned int v10; // ebx
  KIRQL v11; // dl
  unsigned int *p_RequestBuffer; // r15
  unsigned int v13; // ebx
  int v14; // eax
  char v15; // [rsp+30h] [rbp-38h]

  v3 = 0;
  EthDB = 0LL;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      58,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      v15);
  }
  *a3 = 0;
  v8 = 1;
  if ( v6->DATA.QUERY_INFORMATION.InformationBufferLength < 4 )
  {
    v6->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    *a3 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        59,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        20);
    }
    return 1LL;
  }
  v10 = *(_DWORD *)v6->DATA.QUERY_INFORMATION.InformationBuffer;
  v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( a1->MiniportMediaType == NdisMedium802_3 )
    EthDB = a1->EthDB;
  p_RequestBuffer = &a1->RequestBuffer;
  a1->RequestBuffer = v10;
  if ( EthDB )
  {
    if ( (v10 & 0xFFFFFF7F) != (EthDB->MiniportPacketFilter & 0xFFFFFF7F) )
    {
      *p_RequestBuffer = v10 & 0xFFFFFF7F;
      v8 = 0;
    }
    if ( (a1->Flags & 0x20000) != 0 )
    {
      v13 = v10 & 0xFFFFFF5F;
      if ( v13 != (EthDB->MiniportPacketFilter & 0xFFFFFF5F) )
      {
        *p_RequestBuffer = v13;
        v8 = 0;
      }
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v11);
    v14 = *(_DWORD *)&v6->NdisReserved[16];
    if ( (v14 & 0x80000) == 0 )
      v3 = v8;
    if ( v3 )
    {
      if ( !*a3 )
        v6->DATA.QUERY_INFORMATION.BytesWritten = 4;
      goto LABEL_22;
    }
  }
  else
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v11);
    v14 = *(_DWORD *)&v6->NdisReserved[16];
  }
  *(_DWORD *)&v6->NdisReserved[16] = v14 | 0x800;
  a1->SetInfoBuf = v6->DATA.QUERY_INFORMATION.InformationBuffer;
  a1->SetInfoBufLen = v6->DATA.METHOD_INFORMATION.InputBufferLength;
  v6->DATA.QUERY_INFORMATION.InformationBuffer = p_RequestBuffer;
  v6->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Cu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      v3,
      *a3);
  return v3;
}
