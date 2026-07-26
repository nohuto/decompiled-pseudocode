/*
 * XREFs of ?ndisPreTaskOffloadQuery@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD270
 * Callers:
 *     ?ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BC320 (-ndisOidPreTaskOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFillOffloadCapsInTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B9C48 (-ndisFillOffloadCapsInTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA0B8 (-ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisPreTaskOffloadQuery(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_REQ_TRACKER *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rbp
  char v4; // r12
  __int64 v5; // rax
  struct _NDIS_MINIPORT_BLOCK **v6; // rsi
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  _DWORD *v8; // rbx
  _DWORD *InformationBuffer; // rcx
  UINT TaskBytes; // r14d
  KIRQL v11; // dl
  __int64 v13; // [rsp+40h] [rbp-38h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h] BYREF

  v2 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a2 + 4);
  NewIrql = 0;
  v4 = (char)a1;
  v5 = *((_QWORD *)a2 + 2);
  v6 = (struct _NDIS_MINIPORT_BLOCK **)(v5 + 32);
  if ( !v5 )
    v6 = (struct _NDIS_MINIPORT_BLOCK **)a2;
  v7 = *v6;
  v8 = (_DWORD *)((char *)a2 + 40);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB2u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v7,
      (char)a1,
      1,
      *v8);
  if ( !v7->Offload )
    goto LABEL_19;
  if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength < 0x1C )
  {
    *v8 = -1073676266;
    v2->DATA.QUERY_INFORMATION.BytesNeeded = ndisGetTaskBytes(v7);
    goto LABEL_20;
  }
  InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
  if ( *InformationBuffer != 1 || InformationBuffer[1] != 28 )
    goto LABEL_19;
  if ( InformationBuffer[4] != 2 || (InformationBuffer[5] & 1) == 0 || InformationBuffer[6] != 14 )
  {
    v8 = (_DWORD *)((char *)a2 + 40);
    goto LABEL_19;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v7, &NewIrql);
  TaskBytes = ndisGetTaskBytes(v7);
  v8 = (_DWORD *)((char *)a2 + 40);
  if ( TaskBytes == 28 )
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, NewIrql);
LABEL_19:
    *v8 = -1073741637;
    goto LABEL_20;
  }
  if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= TaskBytes )
  {
    ndisFillOffloadCapsInTasks(v7, v2);
    v11 = NewIrql;
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v11);
    *v8 = 0;
  }
  else
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, NewIrql);
    *v8 = -1073676266;
    v2->DATA.QUERY_INFORMATION.BytesNeeded = TaskBytes;
  }
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = *v8;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xB3u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v7,
      v4,
      1,
      v13);
  }
  return 1;
}
