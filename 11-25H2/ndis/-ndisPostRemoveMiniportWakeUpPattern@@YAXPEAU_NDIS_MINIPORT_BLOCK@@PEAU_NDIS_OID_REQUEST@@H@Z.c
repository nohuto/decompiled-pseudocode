/*
 * XREFs of ?ndisPostRemoveMiniportWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BBBDC
 * Callers:
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14007F250 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BBFF0 (-ndisPostSetRemoveWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

void __fastcall ndisPostRemoveMiniportWakeUpPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  char v6; // r14
  UCHAR *i; // rcx
  _SINGLE_LIST_ENTRY *v8; // rdi
  _SINGLE_LIST_ENTRY *Next; // rbx
  _DWORD *InformationBuffer; // rsi
  __int64 Next_high; // r13
  PVOID v12; // rcx
  int v13; // eax
  __int64 Next_low; // r8
  _SINGLE_LIST_ENTRY *v15; // rcx
  _SINGLE_LIST_ENTRY *v16; // rcx
  _SINGLE_LIST_ENTRY *v17; // rax
  _SINGLE_LIST_ENTRY *v18; // rcx
  _SINGLE_LIST_ENTRY *j; // rax
  __int64 v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+40h] [rbp-48h]
  _SINGLE_LIST_ENTRY *v22; // [rsp+48h] [rbp-40h]
  unsigned int v23; // [rsp+A0h] [rbp+18h]
  int v24; // [rsp+A8h] [rbp+20h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x25u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( !a3 )
  {
    v6 = 0;
    for ( i = a2->NdisReserved; _bittest((const signed __int32 *)i + 4, 0xEu); i = (UCHAR *)(*((_QWORD *)i + 3) + 72LL) )
      ;
    v8 = 0LL;
    Next = a1->PatternList.Next;
    v22 = (_SINGLE_LIST_ENTRY *)*((_QWORD *)i + 4);
    while ( Next )
    {
      InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      if ( InformationBuffer[4] == LODWORD(Next[8].Next) && InformationBuffer[2] == LODWORD(Next[7].Next) )
      {
        Next_high = HIDWORD(Next[7].Next);
        v12 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        v23 = InformationBuffer[3];
        v24 = InformationBuffer[1];
        v13 = HIDWORD(Next[6].Next);
        InformationBuffer[1] = 0;
        HIDWORD(Next[6].Next) = 0;
        InformationBuffer[3] = 0;
        Next_low = LODWORD(Next[7].Next);
        HIDWORD(Next[7].Next) = 0;
        v21 = v13;
        if ( !memcmp(v12, &Next[6], Next_low + 24)
          && !memcmp((char *)InformationBuffer + v23, (char *)&Next[6] + Next_high, LODWORD(Next[8].Next)) )
        {
          v15 = Next + 1;
          if ( v22 == Next[3].Next )
          {
            v16 = v15->Next;
            v6 = 1;
            if ( v16 )
            {
              v18 = v16 - 1;
              if ( v8 )
                v8->Next = v18;
              else
                a1->PatternList.Next = v18;
              v18->Next = Next->Next;
            }
            else
            {
              v17 = Next->Next;
              if ( v8 )
                v8->Next = v17;
              else
                a1->PatternList.Next = v17;
            }
          }
          else
          {
            HIDWORD(Next[7].Next) = Next_high;
            for ( j = v15->Next; j; j = j->Next )
            {
              if ( j[2].Next == v22 )
              {
                v6 = 1;
                v15->Next = j->Next;
                Next = j - 1;
                break;
              }
              v15 = j;
            }
          }
          InformationBuffer[3] = v23;
          if ( v6 )
            ExFreePoolWithTag(Next, 0);
          break;
        }
        InformationBuffer[3] = v23;
        HIDWORD(Next[7].Next) = Next_high;
        InformationBuffer[1] = v24;
        HIDWORD(Next[6].Next) = v21;
      }
      v8 = Next;
      Next = Next->Next;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = a3;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x26u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      (char)a2,
      v20);
  }
}
