/*
 * XREFs of ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1401606E0
 * Callers:
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006F10 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140029E70 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14002A7C0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisNsiQueuedIfBlockRodChangeNotification @ 0x14005AE50 (ndisNsiQueuedIfBlockRodChangeNotification.c)
 *     ndisIfRegisterInterfaceEx @ 0x140087DB0 (ndisIfRegisterInterfaceEx.c)
 *     ndisIfUpdateSingleField @ 0x1400C8CA0 (ndisIfUpdateSingleField.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1400C92F0 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400CC0E8 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1400CC31C (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1401478B8 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z @ 0x140147948 (-ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ndisIfUpdateStringIfNeeded @ 0x140147C98 (ndisIfUpdateStringIfNeeded.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x140160640 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140160690 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1401663A0 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x14004DBF0 (-ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

char __fastcall ndisNsiNotifyClientInterfaceChange(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // xmm1_8
  __int64 v11; // [rsp+30h] [rbp-68h]
  __int64 v12; // [rsp+40h] [rbp-58h] BYREF
  __int16 v13; // [rsp+48h] [rbp-50h]
  __int16 v14; // [rsp+4Ah] [rbp-4Eh]
  int v15; // [rsp+4Ch] [rbp-4Ch]
  __int64 v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+58h] [rbp-40h]
  _BYTE v18[28]; // [rsp+5Ch] [rbp-3Ch] BYREF
  int v19; // [rsp+78h] [rbp-20h]
  int v20; // [rsp+7Ch] [rbp-1Ch]

  result = ndisIsCompartmentEnumerable(*(const struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 1376));
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x20u,
        (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
        a1,
        a2);
      v9 = *(_QWORD *)(a1 + 1376);
    }
    v13 = a4;
    v14 = 0;
    memset(v18, 0, sizeof(v18));
    v20 = 0;
    v12 = ndisNsiSavedClientNpi;
    v16 = a1 + 1312;
    v15 = a2;
    v17 = 8;
    if ( !a2 )
    {
      v10 = *(_QWORD *)(a3 + 16);
      *(_OWORD *)&v18[4] = *(_OWORD *)a3;
      *(_QWORD *)&v18[20] = v10;
    }
    v19 = *(_DWORD *)(v9 + 16);
    result = (*(__int64 (__fastcall **)(__int64 *))(qword_14011D548 + 8))(&v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = a2;
      return WPP_RECORDER_SF_qL(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               4u,
               0x16u,
               0x21u,
               (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
               a1,
               v11);
    }
  }
  return result;
}
