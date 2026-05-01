/*
 * XREFs of ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x180083C20
 * Callers:
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008DAD8 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@44@Z @ 0x180002A04 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U2@@-$_tl.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800566A4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 */

void __fastcall HAM_ACTIVITY_RM_CONTEXT::RequestStop(HAM_ACTIVITY_RM_CONTEXT *this, __int64 a2)
{
  __int64 v4; // rbp
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD v9[7]; // [rsp+50h] [rbp-38h] BYREF
  char v10; // [rsp+90h] [rbp+8h] BYREF
  int v11; // [rsp+98h] [rbp+10h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D616E);
  HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)this + 1) + 80LL), 0);
  v4 = *((_QWORD *)this + 2);
  if ( a2 == v4 )
  {
    HampActRequestStopEx(*((_QWORD *)this + 1), 1u, 1LL, 0LL, 6912, 0, 0LL);
    v5 = 0;
  }
  else
  {
    v5 = -1073740007;
  }
  HampHostReleaseLockExclusive(*(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)this + 1) + 80LL));
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 8LL) )
  {
    v8 = *((_QWORD *)this + 1);
    v12 = v4;
    v13 = a2;
    v10 = *(_BYTE *)(v8 + 562);
    v9[0] = *(_QWORD *)(v8 + 40);
    v11 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v8,
      (__int64)&unk_1800D61FC,
      v6,
      v7,
      (__int64)&v11,
      (__int64)v9,
      (__int64)&v10,
      (__int64)&v13,
      (__int64)&v12);
  }
}
