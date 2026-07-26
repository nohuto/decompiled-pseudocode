/*
 * XREFs of ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B6274
 * Callers:
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B3200 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x140057110 (NdisConvertNtStatusToNdisStatus.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x14013FA5C (--$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFre.c)
 *     ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x14013FB4C (--$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA-AV-$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U-$KF.c)
 */

__int64 __fastcall ndisXlateAddPacketPatternToWolPatternOid(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  int v4; // edx
  _QWORD *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // r12d
  unsigned int v8; // edi
  _DWORD *InformationBuffer; // r14
  unsigned int v10; // esi
  unsigned int v11; // ecx
  int v12; // r13d
  UINT v13; // edi
  __int64 v14; // rdx
  int v15; // edx
  _DWORD *v16; // rdi
  int v17; // ecx
  PVOID P; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v20; // [rsp+78h] [rbp+10h] BYREF

  *a2 = 0;
  MakePoolPtr<_NDIS_WOL_XLATION_CONTEXT>(&P);
  v5 = P;
  if ( !P )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        (_DWORD)P + 11,
        (_DWORD)P + 107,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        (char)a1);
    }
    v6 = -1073741670;
    goto LABEL_23;
  }
  v7 = -1;
  *(_DWORD *)P = a1->DATA.QUERY_INFORMATION.Oid;
  v8 = -1;
  v5[1] = a1->DATA.QUERY_INFORMATION.InformationBuffer;
  *((_DWORD *)v5 + 4) = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
  InformationBuffer = a1->DATA.QUERY_INFORMATION.InformationBuffer;
  v10 = InformationBuffer[2];
  if ( v10 < 0xFFFFFFE8 )
    v8 = v10 + 24;
  if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v10 >= 0xFFFFFFE8 ? 0xC0000095 : 0) )
  {
    v11 = InformationBuffer[3];
    if ( v11 >= v8 )
    {
      v12 = InformationBuffer[4];
      v13 = -1;
      if ( v11 + v12 >= v11 )
        v13 = v11 + v12;
      if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v11 + v12 < v11 ? 0xC0000095 : 0) )
      {
        if ( a1->DATA.QUERY_INFORMATION.InformationBufferLength >= v13 )
        {
          if ( v10 + v12 >= v10 )
            v7 = v10 + v12;
          v6 = NdisConvertNtStatusToNdisStatus(v10 + v12 < v10 ? 0xC0000095 : 0);
          if ( !v6 )
          {
            LODWORD(P) = 0;
            MakeExtendedPoolPtr<_NDIS_PM_WOL_PATTERN>(&v20, v14, v7, &P);
            v16 = v20;
            if ( v20 )
            {
              *v20 = 12845440;
              v16[37] = InformationBuffer[1];
              v16[2] = *InformationBuffer;
              v16[3] = 1;
              v16[40] = 196;
              v17 = InformationBuffer[2];
              v16[41] = v17;
              v16[42] = v16[40] + v17;
              v16[43] = InformationBuffer[4];
              memmove((char *)v16 + (unsigned int)v16[40], InformationBuffer + 6, (unsigned int)InformationBuffer[2]);
              memmove(
                (char *)v16 + (unsigned int)v16[42],
                (char *)InformationBuffer + (unsigned int)InformationBuffer[3],
                (unsigned int)InformationBuffer[4]);
              a1->DATA.QUERY_INFORMATION.InformationBufferLength = (unsigned int)P;
              a1->DATA.QUERY_INFORMATION.Oid = -50265846;
              a1->DATA.QUERY_INFORMATION.InformationBuffer = v16;
              v5[3] = v16;
              *(_QWORD *)&a1->NdisReserved[72] = v5;
              return v6;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v15,
                v6 + 11,
                v6 + 108,
                (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
                (char)a1);
            }
            v6 = -1073741670;
            goto LABEL_22;
          }
        }
        else
        {
          a1->DATA.QUERY_INFORMATION.BytesNeeded = v13;
        }
      }
    }
  }
  v6 = -1073676267;
LABEL_22:
  ExFreePoolWithTag(v5, 0);
LABEL_23:
  *a2 = 1;
  return v6;
}
