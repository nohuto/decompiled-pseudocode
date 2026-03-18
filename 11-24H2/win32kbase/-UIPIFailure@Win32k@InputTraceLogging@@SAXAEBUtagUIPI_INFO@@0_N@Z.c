/*
 * XREFs of ?UIPIFailure@Win32k@InputTraceLogging@@SAXAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5E20
 * Callers:
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x1400027D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Win32k::UIPIFailure(const struct tagUIPI_INFO *a1, const struct tagUIPI_INFO *a2)
{
  __int64 v2; // r8
  int *v3; // r9
  _DWORD *v4; // r10
  int v5; // [rsp+60h] [rbp-20h] BYREF
  int v6; // [rsp+64h] [rbp-1Ch] BYREF
  int v7; // [rsp+68h] [rbp-18h] BYREF
  int v8; // [rsp+6Ch] [rbp-14h] BYREF
  int v9; // [rsp+70h] [rbp-10h] BYREF
  _DWORD v10[3]; // [rsp+74h] [rbp-Ch] BYREF
  int v11; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && tlgKeywordOn((__int64)&dword_14029AE30, 2LL) )
  {
    v11 = (unsigned __int8)v2;
    v5 = v3[2];
    v6 = v3[1];
    v7 = *v3;
    v8 = v4[2];
    v9 = v4[1];
    v10[0] = *v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029AE30,
      (__int64)&unk_1402749C9,
      v2,
      (__int64)v3,
      (__int64)v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v11);
  }
}
