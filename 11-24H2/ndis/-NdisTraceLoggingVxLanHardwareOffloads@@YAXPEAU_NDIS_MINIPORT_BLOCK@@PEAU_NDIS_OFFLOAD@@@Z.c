/*
 * XREFs of ?NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AF898
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1400AF070 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@444AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x140001CBC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U-$_tlgWrapperByVal@$03@@U.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingVxLanHardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ecx
  char v5; // al
  __int64 v6; // rcx
  char v7; // al
  char v8; // [rsp+60h] [rbp-20h] BYREF
  char v9; // [rsp+61h] [rbp-1Fh] BYREF
  _BYTE v10[2]; // [rsp+62h] [rbp-1Eh] BYREF
  __int16 v11; // [rsp+64h] [rbp-1Ch] BYREF
  int v12; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  char v14; // [rsp+A0h] [rbp+20h] BYREF
  char v15; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14011A7E8 > 5 && tlgKeywordOn((__int64)&dword_14011A7E8, 0x200000000000LL) )
  {
    v4 = *(_DWORD *)(v2 + 156);
    v14 = *(_BYTE *)(v2 + 166) & 1;
    v11 = *(_WORD *)(v2 + 164);
    v12 = *(_DWORD *)(v2 + 160);
    v15 = BYTE2(v4) & 0xF;
    v5 = BYTE1(v4) & 0xF;
    v6 = v4 >> 4;
    v8 = v5;
    LOBYTE(v6) = v6 & 0xF;
    v7 = *(_BYTE *)(v2 + 156) & 0xF;
    v9 = v6;
    v10[0] = v7;
    v13 = v3 + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>>(
      v6,
      (__int64)&unk_140100F7F,
      v2,
      v3,
      &v13,
      (__int64)v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v15,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v14);
  }
}
