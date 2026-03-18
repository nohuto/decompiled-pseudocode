/*
 * XREFs of ??R_lambda_9000b013b54c5d4fd00007edcb0ed276_@@QEBA@XZ @ 0x140082594
 * Callers:
 *     ??1DXGKCALLONEXIT@?1???$DXGKCALLONEXIT@V_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@@YA?A_PV_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@Z@QEAA@XZ @ 0x140082294 (--1DXGKCALLONEXIT@-1---$DXGKCALLONEXIT@V_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@@YA-A_PV_lam.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@5555@Z @ 0x140004EEC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@U3@U3@U3@.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 */

char __fastcall _lambda_9000b013b54c5d4fd00007edcb0ed276_::operator()(__int64 a1)
{
  _BYTE *v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _BYTE v8[4]; // [rsp+60h] [rbp+27h] BYREF
  int v9; // [rsp+64h] [rbp+2Bh] BYREF
  int v10; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v11[4]; // [rsp+70h] [rbp+37h] BYREF
  bool v12; // [rsp+A0h] [rbp+67h] BYREF
  bool v13; // [rsp+A8h] [rbp+6Fh] BYREF
  bool v14; // [rsp+B0h] [rbp+77h] BYREF
  bool v15; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( !**(_BYTE **)a1 )
  {
    v2 = *(_BYTE **)(a1 + 8);
    if ( !*v2 )
      return (char)v2;
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 185;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"bFailureCase", 185LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v3 + 56) = ((*(_DWORD *)(v3 + 56) ^ ((unsigned __int8)*(_DWORD *)(v3 + 56) ^ (unsigned __int8)(2 * **(_BYTE **)(a1 + 24))) & 2) & 0xFFFFFFFB ^ (4 * (**(_BYTE **)(a1 + 32) & 1))) & 0xFFFFFFDF;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_DWORD *)v3 = 55;
  *(_DWORD *)(v3 + 4) = 64;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_OWORD *)(v3 + 16) = 0LL;
  LOBYTE(v2) = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v3);
  if ( (unsigned int)dword_14015B5B8 > 5 )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)&dword_14015B5B8, 512LL);
    if ( (_BYTE)v2 )
    {
      v6 = *(_DWORD **)(a1 + 16);
      v12 = (v6[14] & 0x10) != 0;
      v13 = (v6[14] & 8) != 0;
      v14 = (v6[14] & 4) != 0;
      v15 = (v6[14] & 2) != 0;
      v8[0] = v6[14] & 1;
      v9 = v6[13];
      v10 = v6[12];
      v11[0] = 2048LL;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                     (__int64)v6,
                     (__int64)&unk_14013CBCE,
                     v4,
                     v5,
                     (__int64)v11,
                     (__int64)&v10,
                     (__int64)&v9,
                     (__int64)v8,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v12);
    }
  }
  return (char)v2;
}
