/*
 * XREFs of ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140054C90
 * Callers:
 *     ?ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140054B20 (-ndisMValidatePMWakePacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140054E50 (-ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@.c)
 *     WPP_RECORDER_SF_SqZ @ 0x1400692B0 (WPP_RECORDER_SF_SqZ.c)
 *     memcpy_s @ 0x14008F190 (memcpy_s.c)
 *     WPP_RECORDER_SF_dqZ @ 0x1400B70EC (WPP_RECORDER_SF_dqZ_ea_1400B70EC.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E4F80 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ndisMUpdateNameOnPMWakePacket(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PM_WAKE_PACKET *a2)
{
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  _SINGLE_LIST_ENTRY *i; // rbx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx
  int v9; // eax

  *((_WORD *)a2 + 6) = 0;
  if ( !ndisMValidatePMWakePacketForMagicPacket(a1, a2) )
  {
    for ( i = a1->WOLPatternList.Next; i; i = i->Next )
    {
      if ( HIDWORD(i[24].Next) == *((_DWORD *)a2 + 2) )
      {
        *((_WORD *)a2 + 6) = i[8].Next;
        *(_OWORD *)((char *)a2 + 14) = 0LL;
        *(_OWORD *)((char *)a2 + 30) = 0LL;
        *(_OWORD *)((char *)a2 + 46) = 0LL;
        *(_OWORD *)((char *)a2 + 62) = 0LL;
        *(_OWORD *)((char *)a2 + 78) = 0LL;
        *(_OWORD *)((char *)a2 + 94) = 0LL;
        *(_OWORD *)((char *)a2 + 110) = 0LL;
        *(_OWORD *)((char *)a2 + 126) = 0LL;
        memcpy_s((char *)a2 + 14, 0x7EuLL, (char *)&i[8].Next + 2, LOWORD(i[8].Next));
        AoAc = a1->AoAc;
        if ( AoAc )
          *((_DWORD *)AoAc + 271) = i[5].Next;
        break;
      }
    }
    v9 = *((_DWORD *)a2 + 2);
    if ( v9 == 131073 || v9 == 65532 )
    {
      if ( !i )
        goto LABEL_15;
    }
    else if ( !i )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_15:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqZ(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v5, v6);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SqZ(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v5, v6);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      0xEu,
      0x7Eu,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      &a1->pAdapterInstanceName->Length);
}
