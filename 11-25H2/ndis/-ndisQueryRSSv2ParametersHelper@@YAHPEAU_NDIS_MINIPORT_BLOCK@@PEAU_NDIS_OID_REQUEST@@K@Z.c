/*
 * XREFs of ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1400B4D34
 * Callers:
 *     ?ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B4B98 (-ndisQueryMiniportRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B4C54 (-ndisQueryOpenRSSv2Parameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1400B3F18 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisQueryRSSv2ParametersHelper(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  unsigned int v6; // ebx
  struct _NDIS_VPORT_BLOCK *v7; // r8
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v8; // r9
  unsigned int HashSecretKeyOffset; // ecx
  unsigned int v10; // r14d
  UINT v11; // r14d
  _DWORD *InformationBuffer; // r10
  int v13; // edx
  unsigned __int16 Flags; // r11
  int HashInformation; // eax
  unsigned int HashSecretKeySize; // eax
  KIRQL v17; // dl
  __int64 v19; // [rsp+30h] [rbp-20h]
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v20; // [rsp+40h] [rbp-10h] BYREF
  struct _NDIS_VPORT_BLOCK *v21; // [rsp+48h] [rbp-8h] BYREF
  KIRQL NewIrql; // [rsp+90h] [rbp+40h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v23; // [rsp+98h] [rbp+48h] BYREF
  struct _NDIS_VPORT_BLOCK *v24; // [rsp+A8h] [rbp+58h] BYREF

  NewIrql = 0;
  v20 = 0LL;
  v24 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x14u,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( !a1->RecvScaleCapabilities.Header.Size )
  {
    v6 = -1073741637;
    goto LABEL_28;
  }
  ndisGetCombinedRSSParameters(a1, a2, &v24, &v20, 0LL, 0LL);
  v23 = 0LL;
  v21 = 0LL;
  ndisGetCombinedRSSParameters(a1, a2, &v21, &v23, 0LL, 0LL);
  if ( (a1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) == 0 )
  {
    if ( v23 )
      goto LABEL_9;
LABEL_12:
    v6 = 0;
    goto LABEL_28;
  }
  if ( !v23 || (v23->Flags & 0x10) != 0 || !LOBYTE(v23->HashInformation) )
    goto LABEL_12;
LABEL_9:
  v7 = v24;
  if ( v24 )
  {
    v8 = v20;
    HashSecretKeyOffset = v20->HashSecretKeyOffset;
    v10 = HashSecretKeyOffset + v20->HashSecretKeySize;
    if ( v10 < HashSecretKeyOffset )
    {
      v6 = -1073676267;
    }
    else
    {
      v11 = v10 + 28;
      v6 = 0;
      if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v11 )
      {
        InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        v13 = 0;
        *InformationBuffer = 1835464;
        Flags = v8->Flags;
        if ( (Flags & 0x10) == 0 && LOBYTE(v8->HashInformation) )
        {
          v13 = ~(_BYTE)Flags & 2 | 5;
          if ( (Flags & 8) != 0 )
            v13 = ~(_BYTE)Flags & 2 | 1;
          if ( (Flags & 4) == 0 )
            v13 |= 0x10u;
        }
        InformationBuffer[1] = v13;
        InformationBuffer[5] = v7->VPortParams.NumQueuePairs;
        InformationBuffer[6] = v8->IndirectionTableSize >> 2;
        HashInformation = v8->HashInformation;
        if ( a3 )
          HashInformation = a3 | (unsigned __int8)HashInformation;
        InformationBuffer[2] = HashInformation;
        HashSecretKeySize = v8->HashSecretKeySize;
        InformationBuffer[3] = HashSecretKeySize;
        InformationBuffer[4] = 28;
        if ( (_WORD)HashSecretKeySize )
          memmove(InformationBuffer + 7, &v8->Header.Type + v8->HashSecretKeyOffset, HashSecretKeySize);
        a2->DATA.QUERY_INFORMATION.BytesWritten = v11;
      }
      else
      {
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v11;
        v6 = -1073676268;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_28:
  v17 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v17);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x15u,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      (char)a1,
      v19);
  }
  return v6;
}
