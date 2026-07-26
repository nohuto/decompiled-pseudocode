/*
 * XREFs of ?ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BD7D0
 * Callers:
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD204 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1400279F0 (WPP_RECORDER_SF_qqDd.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140088540 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z @ 0x1400BA36C (-ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z.c)
 */

__int64 __fastcall ndisSetOpenEnableWakeUp(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  unsigned __int8 *v4; // r14
  bool v7; // cf
  unsigned int v8; // ebx
  int v9; // ecx
  char v11[4]; // [rsp+40h] [rbp-28h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      a2);
  v7 = a2->DATA.QUERY_INFORMATION.InformationBufferLength < 4;
  *v4 = 1;
  if ( v7 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 0;
    v8 = -1073741823;
  }
  else
  {
    LODWORD(a3) = 2;
    v9 = *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( (v9 & 1) != 0 && (unsigned int)(MiniportHandle->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) > 2
      || (v9 & 2) != 0 && (unsigned int)(MiniportHandle->PMAdvertisedCapabilities.MinPatternWakeUp - 2) > 2
      || (v9 & 4) != 0 && (unsigned int)(MiniportHandle->PMAdvertisedCapabilities.MinLinkChangeWakeUp - 2) > 2 )
    {
      v8 = -1073741811;
    }
    else
    {
      ndisConvertWakeUpEnableToPMConfig(a1->WakeUpEnable, &a1->PMCurrentParameters, 2);
      ndisGetCombinedPMConfig(MiniportHandle, &MiniportHandle->PMCurrentParameters);
      v8 = 0;
      a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *v4;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      0x11u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      (char)a2,
      v8,
      *(_DWORD *)v11);
  }
  return v8;
}
