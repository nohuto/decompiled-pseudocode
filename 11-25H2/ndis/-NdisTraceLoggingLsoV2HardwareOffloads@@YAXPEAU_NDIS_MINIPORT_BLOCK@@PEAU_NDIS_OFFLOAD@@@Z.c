/*
 * XREFs of ?NdisTraceLoggingLsoV2HardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400B6864
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1400B7000 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x140001E3C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingLsoV2HardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+70h] [rbp+37h] BYREF
  int v6; // [rsp+74h] [rbp+3Bh] BYREF
  int v7; // [rsp+78h] [rbp+3Fh] BYREF
  int v8; // [rsp+7Ch] [rbp+43h] BYREF
  int v9; // [rsp+80h] [rbp+47h] BYREF
  int v10; // [rsp+84h] [rbp+4Bh] BYREF
  __int64 v11; // [rsp+88h] [rbp+4Fh] BYREF
  char v12; // [rsp+B0h] [rbp+77h] BYREF
  char v13; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1401247E8 > 5 && tlgKeywordOn((__int64)&dword_1401247E8, 0x200000000000LL) )
  {
    v12 = (v3[26] >> 2) & 3;
    v13 = v3[26] & 3;
    v5 = v3[25];
    v6 = v3[24];
    v7 = v3[23];
    v8 = v3[22];
    v9 = v3[21];
    v10 = v3[20];
    v11 = v4 + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v2,
      (__int64)&unk_14010A3DB,
      (__int64)v3,
      v4,
      &v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v13,
      (__int64)&v12);
  }
}
