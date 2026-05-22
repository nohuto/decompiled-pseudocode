/*
 * XREFs of ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180031FEC
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180031D30 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5C00 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180005278 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTempl.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800774A0 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 */

void __fastcall InputTraceLogging::ISM::DeliverInput(const struct InputInfo *a1)
{
  __int64 v1; // rdi
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  const unsigned __int16 *v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v1 = 0LL;
  if ( (*(_DWORD *)a1 & 0x100003B) != 0 )
    v1 = *((_QWORD *)a1 + 8);
  v3 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 4u && tlgKeywordOn((__int64)v3, 512LL) )
  {
    v7 = *((_DWORD *)a1 + 1);
    v4 = *(unsigned int *)a1;
    v8 = v1;
    v9 = (const unsigned __int16 *)InputTraceLogging::InputTypeToString(v4);
    v10 = *((_QWORD *)a1 + 2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v5,
      (__int64)&unk_1802145D8,
      v5,
      v6,
      (__int64)&v10,
      &v9,
      (__int64)&v7,
      (__int64)&v8);
  }
}
