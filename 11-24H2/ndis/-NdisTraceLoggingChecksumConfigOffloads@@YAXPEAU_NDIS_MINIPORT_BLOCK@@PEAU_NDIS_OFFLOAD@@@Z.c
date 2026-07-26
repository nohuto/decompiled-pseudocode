/*
 * XREFs of ?NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400739C0
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1400AF070 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@U3@U3@U3@U3@U3@U2@U3@U3@U3@U3@U2@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@55554555554555545555@Z @ 0x140001010 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U.c)
 */

void __fastcall NdisTraceLoggingChecksumConfigOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        __int64 a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rcx
  char v10; // [rsp+E8h] [rbp-80h] BYREF
  char v11; // [rsp+E9h] [rbp-7Fh] BYREF
  char v12; // [rsp+EAh] [rbp-7Eh] BYREF
  char v13; // [rsp+EBh] [rbp-7Dh] BYREF
  char v14; // [rsp+ECh] [rbp-7Ch] BYREF
  char v15; // [rsp+EDh] [rbp-7Bh] BYREF
  char v16; // [rsp+EEh] [rbp-7Ah] BYREF
  char v17; // [rsp+EFh] [rbp-79h] BYREF
  char v18; // [rsp+F0h] [rbp-78h] BYREF
  char v19; // [rsp+F1h] [rbp-77h] BYREF
  char v20; // [rsp+F2h] [rbp-76h] BYREF
  char v21; // [rsp+F3h] [rbp-75h] BYREF
  char v22; // [rsp+F4h] [rbp-74h] BYREF
  char v23; // [rsp+F5h] [rbp-73h] BYREF
  char v24; // [rsp+F6h] [rbp-72h] BYREF
  char v25; // [rsp+F7h] [rbp-71h] BYREF
  unsigned int Encapsulation; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v27; // [rsp+FCh] [rbp-6Ch] BYREF
  unsigned int v28; // [rsp+100h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+104h] [rbp-64h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+108h] [rbp-60h] BYREF
  char v31; // [rsp+138h] [rbp-30h] BYREF
  char v32; // [rsp+140h] [rbp-28h] BYREF

  if ( (unsigned int)dword_14011A7E8 > 5
    && (qword_14011A7F8 & 0x200000000000LL) != 0
    && (qword_14011A800 & 0x200000000000LL) == qword_14011A800 )
  {
    v4 = *((_DWORD *)&a2->Checksum.IPv6Receive + 1);
    v31 = (v4 >> 6) & 3;
    v32 = (v4 >> 4) & 3;
    v11 = v4 & 3;
    v10 = (v4 >> 2) & 3;
    v5 = *((_DWORD *)&a2->Checksum.IPv6Transmit + 1);
    Encapsulation = a2->Checksum.IPv6Receive.Encapsulation;
    v12 = (v5 >> 6) & 3;
    v13 = (v5 >> 4) & 3;
    v6 = v5 >> 2;
    v15 = v5 & 3;
    v7 = *((_DWORD *)&a2->Checksum.IPv4Receive + 1);
    v14 = v6 & 3;
    v27 = a2->Checksum.IPv6Transmit.Encapsulation;
    v16 = BYTE1(v7) & 3;
    v17 = (v7 >> 6) & 3;
    v18 = (v7 >> 4) & 3;
    v8 = v7 >> 2;
    v20 = v7 & 3;
    v9 = *((unsigned int *)&a2->Checksum.IPv4Transmit + 1);
    v19 = v8 & 3;
    v28 = a2->Checksum.IPv4Receive.Encapsulation;
    v21 = BYTE1(v9) & 3;
    v22 = ((unsigned int)v9 >> 6) & 3;
    v23 = ((unsigned int)v9 >> 4) & 3;
    v24 = ((unsigned int)v9 >> 2) & 3;
    LOBYTE(v9) = v9 & 3;
    v29 = a2->Checksum.IPv4Transmit.Encapsulation;
    p_InterfaceGuid = &a1->InterfaceGuid;
    v25 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v9,
      (__int64)&unk_140101443,
      a3,
      (__int64)a1,
      (__int64 *)&p_InterfaceGuid,
      (__int64)&v29,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v28,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v27,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&Encapsulation,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v32,
      (__int64)&v31);
  }
}
