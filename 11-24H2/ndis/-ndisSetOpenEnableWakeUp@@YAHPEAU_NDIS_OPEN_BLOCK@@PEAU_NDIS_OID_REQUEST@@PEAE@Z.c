/*
 * XREFs of ?ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B5A40
 * Callers:
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B5474 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqDd @ 0x14004B090 (WPP_RECORDER_SF_qqDd.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x14006C3E0 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z @ 0x1400B253C (-ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z.c)
 */

__int64 __fastcall ndisSetOpenEnableWakeUp(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  unsigned __int8 *v4; // r14
  struct _NDIS_OID_REQUEST *v5; // rdi
  bool v7; // cf
  unsigned int v8; // ebx
  int v9; // ecx
  char v11; // [rsp+30h] [rbp-38h]
  char v12[4]; // [rsp+40h] [rbp-28h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      16,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v11);
  }
  v7 = v5->DATA.QUERY_INFORMATION.InformationBufferLength < 4;
  *v4 = 1;
  if ( v7 )
  {
    v5->DATA.QUERY_INFORMATION.BytesNeeded = 4;
    v5->DATA.QUERY_INFORMATION.BytesWritten = 0;
    v8 = -1073741823;
  }
  else
  {
    LODWORD(a3) = 2;
    v9 = *(_DWORD *)v5->DATA.QUERY_INFORMATION.InformationBuffer;
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
      v5->DATA.QUERY_INFORMATION.BytesWritten = 4;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = *v4;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      (int)a3,
      0x11u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)v5,
      v8,
      *(_DWORD *)v12);
  }
  return v8;
}
