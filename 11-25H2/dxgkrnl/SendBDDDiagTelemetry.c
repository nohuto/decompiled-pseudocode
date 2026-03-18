/*
 * XREFs of SendBDDDiagTelemetry @ 0x14007CC28
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@U1@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU_tlgWrapperBinary@@AEBU?$_tlgWrapperByVal@$03@@55533335@Z @ 0x140004814 (--$Write@U-$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U1@U1@U1.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall SendBDDDiagTelemetry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  char v10; // [rsp+80h] [rbp-29h] BYREF
  char v11; // [rsp+81h] [rbp-28h] BYREF
  char v12; // [rsp+82h] [rbp-27h] BYREF
  char v13; // [rsp+83h] [rbp-26h] BYREF
  char v14[4]; // [rsp+84h] [rbp-25h] BYREF
  int v15; // [rsp+88h] [rbp-21h] BYREF
  int v16; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v17; // [rsp+90h] [rbp-19h] BYREF
  int v18; // [rsp+94h] [rbp-15h] BYREF
  int v19; // [rsp+98h] [rbp-11h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v21; // [rsp+A8h] [rbp-1h]
  __int64 v22; // [rsp+B0h] [rbp+7h] BYREF
  int v23; // [rsp+B8h] [rbp+Fh]
  int v24; // [rsp+BCh] [rbp+13h]
  __int64 v25; // [rsp+C0h] [rbp+17h]
  int v26; // [rsp+C8h] [rbp+1Fh]
  int v27; // [rsp+CCh] [rbp+23h]
  __int64 v28; // [rsp+D0h] [rbp+27h]
  __int64 v29; // [rsp+D8h] [rbp+2Fh]
  GUID ActivityId; // [rsp+E0h] [rbp+37h] BYREF

  Pool2 = ExAllocatePool2(256LL, 34536LL, 1953656900LL, a4);
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    v24 = 0;
    v27 = 0;
    v29 = 0LL;
    v22 = 0LL;
    v23 = 0;
    v28 = 0LL;
    v25 = Pool2;
    v26 = 34536;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(v7 + 408))(v7, &v22) >= 0 )
    {
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_14015B660 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_14015B660, 0x400000000000LL) )
        {
          v15 = *(_DWORD *)(v6 + 34528);
          v10 = *(_BYTE *)(v6 + 34524);
          v11 = *(_BYTE *)(v6 + 34520);
          v12 = *(_BYTE *)(v6 + 34516);
          v13 = *(_BYTE *)(v6 + 34504);
          v16 = *(_DWORD *)(v6 + 34512);
          v17 = *(_DWORD *)(v6 + 34508);
          v18 = *(_DWORD *)(v6 + 34500);
          v19 = *(_DWORD *)(v6 + 34496);
          v20 = v6 + 34432;
          v21 = 64;
          v14[0] = 1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperBinary,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
            v8,
            (__int64)&unk_14013BF2D,
            (__int64)&ActivityId,
            v9,
            (__int64)v14,
            &v20,
            (__int64)&v19,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v16,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v10,
            (__int64)&v15);
        }
      }
    }
    ExFreePoolWithTag((PVOID)v6, 0x74727044u);
  }
}
