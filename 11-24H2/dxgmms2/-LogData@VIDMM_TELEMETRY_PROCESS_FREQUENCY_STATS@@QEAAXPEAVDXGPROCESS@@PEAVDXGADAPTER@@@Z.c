/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PROCESS_FREQUENCY_STATS@@QEAAXPEAVDXGPROCESS@@PEAVDXGADAPTER@@@Z @ 0x1401014A0
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140100F38 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U5@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@7777@Z @ 0x1400018F8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

void __fastcall VIDMM_TELEMETRY_PROCESS_FREQUENCY_STATS::LogData(
        VIDMM_TELEMETRY_PROCESS_FREQUENCY_STATS *this,
        struct DXGPROCESS *a2,
        struct DXGADAPTER *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  int *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  _WORD v9[2]; // [rsp+70h] [rbp+7h] BYREF
  int v10; // [rsp+74h] [rbp+Bh] BYREF
  int v11; // [rsp+78h] [rbp+Fh] BYREF
  int v12; // [rsp+7Ch] [rbp+13h] BYREF
  int v13; // [rsp+80h] [rbp+17h] BYREF
  int v14; // [rsp+84h] [rbp+1Bh] BYREF
  unsigned __int16 *v15; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 *v16; // [rsp+90h] [rbp+27h] BYREF
  __int64 v17; // [rsp+98h] [rbp+2Fh] BYREF
  __int128 v18; // [rsp+A0h] [rbp+37h] BYREF

  if ( *((_BYTE *)this + 20) && (unsigned int)dword_140081048 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v10 = v5[4];
      v11 = v5[3];
      v12 = v5[2];
      v13 = v5[1];
      v14 = *v5;
      v15 = *(unsigned __int16 **)(v6 + 1928);
      v8 = *(_OWORD *)(*(_QWORD *)(v7 + 64) + 140LL);
      v9[0] = 0;
      v16 = &v18;
      v18 = v8;
      v17 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        (__int64)&unk_140074603,
        v4,
        (__int64)v5,
        (__int64)&v17,
        (__int64)v9,
        (__int64 *)&v16,
        &v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
