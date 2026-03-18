/*
 * XREFs of ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046F04
 * Callers:
 *     DxgkReportMonitorPowerRapidHpdTriggerEvent @ 0x140046E90 (DxgkReportMonitorPowerRapidHpdTriggerEvent.c)
 *     DxgkReportAdapterPowerRapidHpdTriggerEvent @ 0x140046ED4 (DxgkReportAdapterPowerRapidHpdTriggerEvent.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4434AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x14003F6C8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U-$_tlgWrapperByRef@$0BA@.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByRef@$0BA@@@33@Z @ 0x14004A1D0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z @ 0x14004C284 (-InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall RAPID_HPD_MANAGER::ReportTriggerEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+70h] [rbp-19h] BYREF
  int v14; // [rsp+74h] [rbp-15h] BYREF
  int v15; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v16; // [rsp+7Ch] [rbp-Dh] BYREF
  int v17; // [rsp+80h] [rbp-9h] BYREF
  int v18; // [rsp+84h] [rbp-5h] BYREF
  int v19; // [rsp+88h] [rbp-1h] BYREF
  int v20; // [rsp+8Ch] [rbp+3h] BYREF
  int v21; // [rsp+90h] [rbp+7h] BYREF
  int v22; // [rsp+94h] [rbp+Bh] BYREF
  __int64 v23; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+B0h] [rbp+27h] BYREF
  _QWORD v27[5]; // [rsp+B8h] [rbp+2Fh] BYREF
  unsigned __int8 v28; // [rsp+F0h] [rbp+67h] BYREF
  unsigned __int8 v29; // [rsp+F8h] [rbp+6Fh] BYREF
  int v30; // [rsp+108h] [rbp+7Fh] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(a1 + 8) = KeGetCurrentThread();
  if ( a2 == 4 )
    *(_BYTE *)(a1 + 32) = 1;
  v28 = 0;
  v29 = 0;
  RAPID_HPD_MANAGER::InRapidHPDPeriod(a1, 1LL, &v28, &v29);
  v9 = v28;
  if ( !v28 )
  {
    if ( ExUuidCreate((UUID *)(a1 + 36)) < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 35;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create new activity ID, hack to just increment current Id to make new",
        35LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ++*(_BYTE *)(a1 + 44);
    }
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 80) = a2;
  }
  *(_DWORD *)(a1 + 52) = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned int)dword_14015B5F0 > 5 )
    {
      v18 = v29;
      v20 = *(unsigned __int8 *)(a1 + 32);
      v21 = *(_DWORD *)(a1 + 80);
      v19 = v9;
      v26 = a1 + 36;
      v27[0] = a3;
      v22 = 3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_14013B97B,
        v7,
        v8,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)v27,
        (__int64)&v20,
        (__int64)&v26,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  else if ( (unsigned int)dword_14015B5F0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_14015B5F0, 0x400000000002LL) )
  {
    v30 = v29;
    v14 = *(unsigned __int8 *)(a1 + 32);
    v15 = *(_DWORD *)(a1 + 80);
    v13 = v9;
    v23 = a1 + 36;
    v24 = a3;
    v16 = a2;
    v17 = 2;
    v25 = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (__int64)&unk_14013B9FE,
      v11,
      v12,
      (__int64)&v25,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v24,
      (__int64)&v14,
      &v23,
      (__int64)&v13,
      (__int64)&v30);
  }
  if ( g_IsInternalRelease && a2 != 3 )
    DxgkLogCodePointPacket(
      117LL,
      a2,
      *(_DWORD *)(a1 + 88) + (v9 << 16) + (*(unsigned __int8 *)(a1 + 32) << 8),
      *(unsigned int *)(a1 + 36),
      a3);
  *(_DWORD *)(a1 + 64) = a2;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
