/*
 * XREFs of ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BCE84
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005CBB0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BAF90 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14008CCB0 (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1400BA558 (-ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1400BB9DC (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

__int64 __fastcall ndisSetAddWakeUpPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *PatternOffset,
        char *a3)
{
  unsigned int v3; // ebx
  UCHAR *NdisReserved; // r9
  _SINGLE_LIST_ENTRY *v5; // r13
  char *v6; // rdi
  struct _NDIS_OID_REQUEST *v7; // r14
  int v9; // ebp
  unsigned int InformationBufferLength; // r8d
  struct _NDIS_PM_PACKET_PATTERN *InformationBuffer; // rsi
  __int64 MaskSize; // rax
  unsigned int v13; // ecx
  __int64 i; // rcx
  _SINGLE_LIST_ENTRY *v15; // r12
  _SINGLE_LIST_ENTRY *j; // rdi
  unsigned int v17; // eax
  unsigned int Reserved; // eax
  size_t v19; // r8
  _SINGLE_LIST_ENTRY *v20; // rbp
  _SINGLE_LIST_ENTRY *k; // rax
  unsigned int v22; // edx
  struct _NDIS_PACKET_PATTERN_ENTRY *WakeUpPatternEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v24; // r9
  unsigned int Next; // eax
  _SINGLE_LIST_ENTRY *v26; // rax
  char v28[8]; // [rsp+28h] [rbp-70h]
  int v29; // [rsp+40h] [rbp-58h]
  unsigned int v30; // [rsp+A0h] [rbp+8h]
  unsigned int Next_high; // [rsp+A8h] [rbp+10h]
  unsigned int v33; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  NdisReserved = PatternOffset->NdisReserved;
  v5 = 0LL;
  v6 = a3;
  v7 = PatternOffset;
  v9 = 24;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x18u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      PatternOffset);
    NdisReserved = v7->NdisReserved;
  }
  a1->OidContext = 0LL;
  InformationBufferLength = v7->DATA.QUERY_INFORMATION.InformationBufferLength;
  *v6 = 1;
  v7->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  if ( InformationBufferLength < 0x18 )
  {
LABEL_10:
    v3 = -1073676268;
    v7->DATA.QUERY_INFORMATION.BytesNeeded = v9;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(PatternOffset) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)PatternOffset,
        11,
        26,
        (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids);
      goto LABEL_44;
    }
    return v3;
  }
  InformationBuffer = (struct _NDIS_PM_PACKET_PATTERN *)v7->DATA.QUERY_INFORMATION.InformationBuffer;
  MaskSize = InformationBuffer->MaskSize;
  if ( !(_DWORD)MaskSize
    || (PatternOffset = (struct _NDIS_OID_REQUEST *)InformationBuffer->PatternOffset,
        (unsigned __int64)PatternOffset < MaskSize + 24)
    || (v13 = (_DWORD)PatternOffset + InformationBuffer->PatternSize, v13 < (unsigned int)PatternOffset) )
  {
    v3 = -1073676267;
    goto LABEL_44;
  }
  if ( InformationBufferLength < v13 )
  {
    v9 = (_DWORD)PatternOffset + InformationBuffer->PatternSize;
    goto LABEL_10;
  }
  for ( i = (__int64)NdisReserved; _bittest((const signed __int32 *)(i + 16), 0xEu); i = *(_QWORD *)(i + 24) + 72LL )
    ;
  v15 = *(_SINGLE_LIST_ENTRY **)(i + 32);
  for ( j = a1->PatternList.Next; ; j = j->Next )
  {
    if ( !j )
    {
      v20 = 0LL;
      goto LABEL_30;
    }
    if ( InformationBuffer->PatternSize == LODWORD(j[8].Next) && InformationBuffer->MaskSize == LODWORD(j[7].Next) )
      break;
LABEL_21:
    ;
  }
  v17 = InformationBuffer->PatternOffset;
  InformationBuffer->PatternOffset = 0;
  v30 = v17;
  Reserved = InformationBuffer->Reserved;
  InformationBuffer->Reserved = 0;
  v33 = Reserved;
  v19 = LODWORD(j[7].Next) + 24LL;
  Next_high = HIDWORD(j[7].Next);
  v29 = HIDWORD(j[6].Next);
  HIDWORD(j[6].Next) = 0;
  HIDWORD(j[7].Next) = 0;
  if ( memcmp(InformationBuffer, &j[6], v19)
    || memcmp((char *)InformationBuffer + v30, (char *)&j[6] + Next_high, LODWORD(j[8].Next)) )
  {
    InformationBuffer->PatternOffset = v30;
    InformationBuffer->Reserved = v33;
    HIDWORD(j[7].Next) = Next_high;
    HIDWORD(j[6].Next) = v29;
    goto LABEL_21;
  }
  v20 = j;
  InformationBuffer->PatternOffset = v30;
  InformationBuffer->Reserved = v33;
  HIDWORD(j[7].Next) = Next_high;
  HIDWORD(j[6].Next) = v29;
  if ( j[3].Next == v15 )
  {
LABEL_23:
    v3 = -1073676267;
LABEL_24:
    v6 = a3;
    goto LABEL_44;
  }
  v5 = j;
  for ( k = j + 1; k; k = k->Next )
  {
    v5 = k - 1;
    if ( k[2].Next == v15 )
      goto LABEL_23;
  }
LABEL_30:
  v22 = InformationBuffer->Reserved;
  if ( v22 > 0xFFFF && ndisPMPatternIdExist(&a1->PatternList, v22) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v28 = (_DWORD)PatternOffset;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x19u,
        (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
        *(_QWORD *)v28);
    }
    v6 = a3;
    v3 = -1073676267;
  }
  else
  {
    WakeUpPatternEntry = ndisCreateWakeUpPatternEntry(InformationBuffer, v7->PortNumber);
    v24 = WakeUpPatternEntry;
    if ( !WakeUpPatternEntry )
    {
      v3 = -1073741670;
      goto LABEL_24;
    }
    WakeUpPatternEntry->Source = v15;
    a1->OidContext = WakeUpPatternEntry;
    Next = InformationBuffer->Reserved;
    if ( Next <= 0xFFFF )
    {
      if ( v20 )
        Next = (unsigned int)v20[5].Next;
      else
        Next = ndisGetNewPatternEntryId(&a1->PatternList);
    }
    v24->Id = Next;
    *(_DWORD *)&v7->NdisReserved[80] = Next;
    v24->Pattern.Reserved = v24->Id;
    if ( v5 )
    {
      v26 = j + 1;
      v6 = a3;
      v24->DupLink.Next = v26;
      *a3 = 1;
    }
    else
    {
      v6 = a3;
      *a3 = 0;
    }
  }
LABEL_44:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)PatternOffset,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      *v6,
      v3);
  return v3;
}
