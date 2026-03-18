/*
 * XREFs of ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x140141984
 * Callers:
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14000907C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 */

void __fastcall CBaseInput::OnInputSuppressedValueChanged(__int64 a1)
{
  char v1; // si
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 *v9; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 3072), 0);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v3) + 3080); i; i = *(_QWORD *)(i + 56) )
  {
    if ( v1 )
    {
      *(_DWORD *)(i + 2304) = 0;
    }
    else if ( *(_DWORD *)(i + 2304)
           && (unsigned int)dword_14029AF48 > 5
           && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL) )
    {
      v8 = v6;
      v9 = (unsigned __int16 *)(i + 192);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>>(
        v5,
        (__int64)&unk_14027D16C,
        v6,
        v7,
        &v9,
        (__int64)&v8);
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 3072), 0LL);
}
