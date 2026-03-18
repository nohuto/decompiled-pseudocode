/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x14025DCCC
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x14025F3B0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3444@Z @ 0x140004AF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025DFE4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBEC (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z @ 0x140349BD4 (-UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403A2910 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

void __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        DMMVIDEOPRESENTTARGETSET **this,
        unsigned int a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v10; // rdi
  unsigned __int8 *v11; // r15
  DMMVIDEOPRESENTTARGETSET *v12; // rcx
  struct _LUID *v13; // rdx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // [rsp+50h] [rbp-51h] BYREF
  int v24; // [rsp+58h] [rbp-49h] BYREF
  int v25; // [rsp+5Ch] [rbp-45h] BYREF
  int v26; // [rsp+60h] [rbp-41h] BYREF
  struct _DXGK_CONNECTION_CHANGE v27; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-21h] BYREF
  __int64 v29; // [rsp+88h] [rbp-19h] BYREF
  __int64 v30; // [rsp+90h] [rbp-11h] BYREF
  __int64 v31; // [rsp+98h] [rbp-9h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-1h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v33[9]; // [rsp+A8h] [rbp+7h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v34; // [rsp+100h] [rbp+5Fh] BYREF
  int v35; // [rsp+108h] [rbp+67h] BYREF
  int v36; // [rsp+118h] [rbp+77h] BYREF

  v6 = a2;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  LOBYTE(v33[0]) = 0;
  v10 = ContainingAdapter;
  CDisplayScenarioContextScope::ContextScopeConstructor(v33, 0LL, 0x3Du, 0);
  v34 = v33[1];
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5217;
  }
  v11 = a5;
  v12 = this[15];
  *a4 = 0;
  *v11 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(v12, v6);
  if ( TargetById )
  {
    if ( a3 )
    {
      v28 = 0LL;
      DXGADAPTER::IsAdapterSessionized(v10, v13, 0LL, &v28);
      DxgkLogCodePointPacketForSession(88, v28, v6, 0xFFFFFFEu, 0, v15);
      if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 0x4000LL) )
      {
        v29 = *(_QWORD *)((char *)v10 + 412);
        v35 = 268435454;
        LODWORD(a5) = 0;
        LODWORD(v34) = v6;
        v36 = 1;
        v30 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v16,
          (__int64)&unk_1401401BE,
          v17,
          v18,
          (__int64)&v30,
          (__int64)&v36,
          (__int64)&v29,
          (__int64)&v34,
          (__int64)&a5,
          (__int64)&v35);
      }
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(v10) )
      {
        *a4 = 1;
      }
      else
      {
        memset(&v27, 0, sizeof(v27));
        DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, &v27);
        DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(TargetById, v27.ConnectionChangeId, 13LL);
        WdLogSingleEntry2(7LL, v6, v10);
        WdLogGlobalForLineNumber = 5301;
        *v11 = 1;
      }
    }
    else
    {
      v23 = 0LL;
      DXGADAPTER::IsAdapterSessionized(v10, v13, 0LL, &v23);
      DxgkLogCodePointPacketForSession(88, v23, v6, 0xFFFFFFFu, 0, v19);
      if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 0x4000LL) )
      {
        v31 = *(_QWORD *)((char *)v10 + 412);
        v24 = 0xFFFFFFF;
        v25 = 0;
        v26 = v6;
        LODWORD(v23) = 1;
        v32 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v20,
          (__int64)&unk_1401401BE,
          v21,
          v22,
          (__int64)&v32,
          (__int64)&v23,
          (__int64)&v31,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24);
      }
      memset(&v27, 0, sizeof(v27));
      DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, &v27);
      *((_DWORD *)&v27 + 2) = *((_DWORD *)&v27 + 2) & 0xFD000000 | v6 & 0xFFFFFF | 0xD000000;
      VIDPN_MGR::UpdateTargetLinkTrainingStatus((VIDPN_MGR *)this, &v27, 0, v34, 0);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 5232;
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v33);
}
