/*
 * XREFs of ?ndisPreRemoveOpenWakeUpPattern@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B45AC
 * Callers:
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B38B0 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     memcmp @ 0x1400E7A20 (memcmp.c)
 */

unsigned __int8 __fastcall ndisPreRemoveOpenWakeUpPattern(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rsi
  unsigned __int8 v4; // bp
  _SINGLE_LIST_ENTRY *i; // rbx
  _DWORD *InformationBuffer; // rdi
  int Next_high; // eax
  __int64 v8; // r15
  PVOID v9; // rcx
  __int64 v10; // r12
  int v11; // r13d
  __int64 Next_low; // r8
  char v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+70h] [rbp+8h]

  v2 = a2;
  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      31,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v14);
  }
  for ( i = a1->PatternList.Next; i; i = i->Next )
  {
    InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( InformationBuffer[4] == LODWORD(i[8].Next) && InformationBuffer[2] == LODWORD(i[7].Next) )
    {
      Next_high = HIDWORD(i[6].Next);
      v8 = (unsigned int)InformationBuffer[3];
      v9 = v2->DATA.QUERY_INFORMATION.InformationBuffer;
      v10 = HIDWORD(i[7].Next);
      InformationBuffer[3] = 0;
      v11 = InformationBuffer[1];
      HIDWORD(i[7].Next) = 0;
      InformationBuffer[1] = 0;
      Next_low = LODWORD(i[7].Next);
      HIDWORD(i[6].Next) = 0;
      v15 = Next_high;
      if ( !memcmp(v9, &i[6], Next_low + 24)
        && !memcmp((char *)InformationBuffer + v8, (char *)&i[6] + v10, LODWORD(i[8].Next)) )
      {
        InformationBuffer[3] = v8;
        HIDWORD(i[7].Next) = v10;
        *(_DWORD *)&v2->NdisReserved[80] = i[5].Next;
        goto LABEL_13;
      }
      InformationBuffer[3] = v8;
      HIDWORD(i[7].Next) = v10;
      InformationBuffer[1] = v11;
      HIDWORD(i[6].Next) = v15;
    }
  }
  v4 = 0;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x20u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)v2,
      v4);
  return v4;
}
