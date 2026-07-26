/*
 * XREFs of WPP_RECORDER_SF_Z @ 0x14006CDE0
 * Callers:
 *     NdisWdfReadConfiguration @ 0x140050570 (NdisWdfReadConfiguration.c)
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1400513F0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140090310 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1400A3F50 (NdisFRegisterFilterDriver.c)
 *     ndisHandleProtocolUnloadNotification @ 0x1400AB36C (ndisHandleProtocolUnloadNotification.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400BF8B8 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     NdisRegisterProtocol @ 0x1400BFF60 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400C0320 (NdisRegisterProtocolDriver.c)
 *     NdisOpenFile @ 0x1400DBBC0 (NdisOpenFile.c)
 *     ndisHandleBindNotification @ 0x140143F3C (ndisHandleBindNotification.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x140150CD8 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1401518A4 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140151A14 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisIfUpdateStringIfNeeded @ 0x140152960 (ndisIfUpdateStringIfNeeded.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x1401561EC (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401706C0 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x14017CEA0 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14017D448 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x14017DCF0 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ndisFindRootDevice @ 0x140183630 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
  unsigned __int64 v10; // rdi
  unsigned int v11; // r15d
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  const wchar_t *v18; // r8
  int v19; // [rsp+20h] [rbp-58h]

  v6 = a6;
  v7 = L"NULL";
  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v13, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) < a2 )
    goto LABEL_2;
  if ( !a6 )
  {
    v16 = 8LL;
    goto LABEL_14;
  }
  v16 = *a6;
  if ( !*a6 )
  {
LABEL_14:
    v17 = L"NULL";
    goto LABEL_15;
  }
  v17 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_15:
  v18 = a6;
  if ( !a6 )
    v18 = L"\b";
  ndisWppFastTraceMessage(a5, a4, v18, 2LL, v17, v16, 0LL);
LABEL_2:
  v14 = a6 == 0LL;
  if ( a6 )
  {
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = L"\b";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v19, v6, 2LL, v7);
}
