/*
 * XREFs of ?HampSystemWerUploadLiveDump@@YAJPEBG0@Z @ 0x1800904EC
 * Callers:
 *     ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007DB84 (-HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800036C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 */

__int64 __fastcall HampSystemWerUploadLiveDump(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-2Ch] BYREF
  HREPORT phReportHandle; // [rsp+58h] [rbp-28h] BYREF
  const wchar_t *v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  const wchar_t *v16; // [rsp+70h] [rbp-10h] BYREF
  _WER_SUBMIT_RESULT pSubmitResult; // [rsp+A0h] [rbp+20h] BYREF
  _WER_SUBMIT_RESULT v18; // [rsp+A8h] [rbp+28h] BYREF

  phReportHandle = 0LL;
  v14 = 0LL;
  pSubmitResult = -1;
  v4 = WerReportCreate(L"HamLkd", WerReportApplicationHang, 0LL, &phReportHandle);
  if ( v4 < 0
    || (v4 = WerpAddFile(phReportHandle, a1, 5LL, 134217729LL, 0LL, 0LL), v4 < 0)
    || (v4 = WerReportSetParameter(phReportHandle, 0, L"AppId", a2), v4 < 0)
    || (v4 = WerpCreateIntegratorReportId(&v14, v6, (unsigned int)v4), v4 < 0)
    || (v4 = WerpSetIntegratorReportId(phReportHandle, v14, (unsigned int)v4), v4 < 0)
    || (v4 = WerReportSubmit(phReportHandle, WerConsentNotAsked, 0x804u, &pSubmitResult), v4 < 0) )
  {
    v5 = v4 | 0xC0000000;
  }
  else
  {
    v5 = 0;
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 0x400000000008LL) )
  {
    v18 = pSubmitResult;
    v16 = v14;
    v15 = 0x1000000LL;
    v11 = v8;
    v12 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v7,
      (__int64)&unk_1800D9DD2,
      v8,
      v9,
      (__int64)&v12,
      &v16,
      (__int64)&v11,
      (__int64)&v18,
      (__int64)&v15);
  }
  WerReportCloseHandle(phReportHandle);
  if ( v14 )
    WerpFreeString();
  return v5;
}
