/*
 * XREFs of ??$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x140024B10
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@44@Z @ 0x14000410C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapBuffer@U_.c)
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098600 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098630 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x140098660 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingWriteOidRequestCompletedActivity<0>(__int64 *a1)
{
  __int64 result; // rax
  void *v2; // r8
  __int64 v4; // rcx
  unsigned __int16 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  const struct _NDIS_OID_REQUEST *v8; // rcx
  const struct _NDIS_OID_REQUEST *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // [rsp+70h] [rbp+7h] BYREF
  int v13; // [rsp+74h] [rbp+Bh] BYREF
  int v14; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int RequestFlags; // [rsp+7Ch] [rbp+13h] BYREF
  unsigned int RequestVPortID; // [rsp+80h] [rbp+17h] BYREF
  unsigned int RequestSwitchID; // [rsp+84h] [rbp+1Bh] BYREF
  int v18; // [rsp+88h] [rbp+1Fh] BYREF
  int v19; // [rsp+8Ch] [rbp+23h] BYREF
  unsigned __int16 *v20; // [rsp+90h] [rbp+27h] BYREF
  __int128 *v21; // [rsp+98h] [rbp+2Fh] BYREF
  __int128 v22; // [rsp+A0h] [rbp+37h] BYREF

  result = *a1;
  v2 = &unk_1400FBDC8;
  v22 = 0LL;
  if ( result )
  {
    v22 = *(_OWORD *)(result + 4008);
    v2 = *(void **)(result + 3856);
  }
  else
  {
    v4 = a1[2];
    if ( v4 )
    {
      result = *(_QWORD *)(v4 + 32);
      v22 = *(_OWORD *)(result + 4008);
      v2 = *(void **)(v4 + 48);
    }
  }
  if ( (unsigned int)dword_1401247B0 > 4 )
  {
    result = tlgKeywordOn(&dword_1401247B0, 1024LL, v2, a1);
    if ( (_BYTE)result )
    {
      v7 = *(_QWORD *)(v6 + 32);
      v12 = *(_DWORD *)(v6 + 44);
      v13 = *(_DWORD *)(v6 + 40);
      v14 = *(_DWORD *)(v7 + 88);
      v20 = v5;
      RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)v7);
      RequestVPortID = GetRequestVPortID(v8);
      RequestSwitchID = GetRequestSwitchID(v9);
      v18 = *(_DWORD *)(v10 + 32);
      v19 = *(_DWORD *)(v10 + 4);
      v21 = &v22;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v10,
               (__int64)&unk_14010BD29,
               v10 + 168,
               v11,
               (__int64 *)&v21,
               (__int64)&v19,
               (__int64)&v18,
               (__int64)&RequestSwitchID,
               (__int64)&RequestVPortID,
               (__int64)&RequestFlags,
               (__int64)&v14,
               &v20,
               (__int64)&v13,
               (__int64)&v12);
    }
  }
  return result;
}
