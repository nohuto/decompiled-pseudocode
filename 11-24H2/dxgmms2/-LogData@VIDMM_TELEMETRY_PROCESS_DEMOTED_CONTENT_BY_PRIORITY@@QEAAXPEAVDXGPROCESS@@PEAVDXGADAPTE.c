/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_PRIORITY@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x140101184
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140100F38 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@7@Z @ 0x14003F14C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA_ea_14003F14C.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

void __fastcall VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_PRIORITY::LogData(
        VIDMM_TELEMETRY_PROCESS_DEMOTED_CONTENT_BY_PRIORITY *this,
        struct DXGPROCESS *a2,
        struct DXGADAPTER *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int16 v10; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int16 *v11; // [rsp+58h] [rbp-1h] BYREF
  __int128 *v12; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+17h] BYREF
  int v15; // [rsp+78h] [rbp+1Fh]
  __int64 v16; // [rsp+80h] [rbp+27h] BYREF
  int v17; // [rsp+88h] [rbp+2Fh]
  __int128 v18; // [rsp+90h] [rbp+37h] BYREF

  if ( *((_BYTE *)this + 60) && (unsigned int)dword_140081048 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v14 = v5;
      v16 = v5 + 40;
      v11 = *(unsigned __int16 **)(v6 + 1928);
      v8 = *(_QWORD *)(v7 + 64);
      v15 = 40;
      v17 = 20;
      v9 = *(_OWORD *)(v8 + 140);
      v13 = 0x1000000LL;
      v12 = &v18;
      v10 = 1;
      v18 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v3,
        (__int64)&unk_140074A97,
        v4,
        v5,
        (__int64)&v13,
        (__int64)&v10,
        (__int64 *)&v12,
        &v11,
        &v16,
        &v14);
    }
  }
}
