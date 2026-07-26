/*
 * XREFs of WPP_RECORDER_SF_Z @ 0x1400511B0
 * Callers:
 *     NdisWdfReadConfiguration @ 0x1400444D0 (NdisWdfReadConfiguration.c)
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x14005BF80 (NdisOpenProtocolConfiguration.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1400744D0 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1400A31BC (ndisHandleProtocolUnloadNotification.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400B85B8 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     NdisRegisterProtocol @ 0x1400B8C40 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400B9070 (NdisRegisterProtocolDriver.c)
 *     NdisOpenFile @ 0x1400D4880 (NdisOpenFile.c)
 *     ndisHandleBindNotification @ 0x140138F3C (ndisHandleBindNotification.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x140146018 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x140146BE4 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140146D54 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisIfUpdateStringIfNeeded @ 0x140147C98 (ndisIfUpdateStringIfNeeded.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x14014B51C (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401698A0 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140171ED0 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140172478 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140172D30 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisFindRootDevice @ 0x140175C60 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Z(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6)
{
  const wchar_t *v6; // rbx
  const wchar_t *v7; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned int v12; // r15d
  int v14; // eax
  bool v15; // zf
  __int64 v17; // rax
  const wchar_t *v18; // rcx
  const wchar_t *v19; // r8
  int v20; // [rsp+20h] [rbp-58h]

  v6 = a6;
  v7 = L"NULL";
  v10 = 8LL;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v14, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) < a2 )
    goto LABEL_2;
  if ( !a6 )
  {
    v17 = 8LL;
    goto LABEL_14;
  }
  v17 = *a6;
  if ( !*a6 )
  {
LABEL_14:
    v18 = L"NULL";
    goto LABEL_15;
  }
  v18 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v19 = a6;
  if ( !a6 )
    v19 = L"\b";
  ndisWppFastTraceMessage(a5, a4, v19, 2LL, v18, v17, 0LL);
LABEL_2:
  v15 = a6 == 0LL;
  if ( a6 )
  {
    v10 = *a6;
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v6 = L"\b";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, v12, a3, a5, v20, v6, 2LL, v7, v10, 0LL);
}
