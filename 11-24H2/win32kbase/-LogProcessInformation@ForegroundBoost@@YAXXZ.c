/*
 * XREFs of ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AC43C
 * Callers:
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401B3CB4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140002FF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     IsServiceSession @ 0x14012AA64 (IsServiceSession.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A23E4 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401A521C (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A5824 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401AC36C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401AC410 (ForegroundBoost--_anonymous_namespace_--IsBoostAllowed.c)
 */

void __fastcall ForegroundBoost::LogProcessInformation(ForegroundBoost *this)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rbx
  char IsBoostAllowed; // si
  __int64 v4; // rcx
  __int64 i; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  BOOL v9; // eax
  __int64 v10; // rcx
  __int64 j; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  BOOL v15; // eax
  int CurrentWin32kSessionId; // r12d
  char v17; // r15
  __int64 v18; // rcx
  HANDLE v19; // rdi
  int NextProcess; // ebx
  NTSTATUS v21; // eax
  PVOID v22; // r14
  _QWORD *ProcessWin32Process; // rax
  __int64 v24; // rbx
  BOOL v25; // esi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  BOOL v29; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v30[3]; // [rsp+44h] [rbp-Ch] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v32; // [rsp+98h] [rbp+48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+50h] BYREF
  int v34; // [rsp+A8h] [rbp+58h] BYREF

  if ( !(unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    UserSessionState = W32GetUserSessionState(v1);
    W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(UserSessionState + 18912), 0);
    IsBoostAllowed = 1;
    if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
      IsBoostAllowed = ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(v4);
    for ( i = *(_QWORD *)(W32GetUserSessionState(v4) + 36424); i; i = *(_QWORD *)(i + 368) )
    {
      if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 4LL) )
      {
        LOBYTE(Handle) = tagPROCESSINFO::GetPsProcessWindowState(i, 0);
        v9 = IsBoostAllowed && ForegroundBoost::_anonymous_namespace_::HasBoostSource(i, 0);
        v32 = v9;
        LODWORD(Object) = *(_DWORD *)(i + 56);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v6,
          (__int64)&unk_140274F93,
          v7,
          v8,
          (__int64)&Object,
          (__int64)&v32,
          (__int64)&Handle);
      }
    }
    if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      for ( j = *(_QWORD *)(W32GetUserSessionState(v10) + 36432); j; j = *(_QWORD *)(j + 1120) )
      {
        if ( *(_BYTE *)(j + 1208) != 1
          && (unsigned int)dword_14029AF48 > 5
          && tlgKeywordOn((__int64)&dword_14029AF48, 4LL) )
        {
          LOBYTE(Handle) = tagPROCESSINFO::GetPsProcessWindowState(j, 0);
          v15 = IsBoostAllowed && ForegroundBoost::_anonymous_namespace_::HasBoostSource(j, 0);
          LODWORD(Object) = v15;
          v34 = *(_DWORD *)(j + 56);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
            v12,
            (__int64)&unk_140274F93,
            v13,
            v14,
            (__int64)&v34,
            (__int64)&Object,
            (__int64)&Handle);
        }
      }
    }
    ExReleasePushLockSharedEx(UserSessionState + 18912, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    if ( !IsServiceSession(CurrentWin32kSessionId) )
    {
      v17 = 1;
      if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
        v17 = ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(v18);
      v19 = 0LL;
      while ( 1 )
      {
        Handle = 0LL;
        NextProcess = ZwGetNextProcess(v19, 1024LL, 512LL, 0LL, &Handle);
        if ( v19 )
          ZwClose(v19);
        if ( NextProcess < 0 )
          break;
        v19 = Handle;
        Object = 0LL;
        v21 = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        v22 = Object;
        if ( v21 >= 0 )
        {
          if ( CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(Object) )
          {
            ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(v22);
            v24 = (__int64)ProcessWin32Process;
            if ( ProcessWin32Process )
            {
              if ( *ProcessWin32Process )
              {
                v25 = v17 && (ProcessWin32Process[102] & 0xFFFFFFFFC0000000uLL) != 0;
                if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 4LL) )
                {
                  LOBYTE(v32) = tagPROCESSINFO::GetPsProcessWindowState(v24, 0);
                  v30[0] = *(_DWORD *)(v24 + 56);
                  v29 = v25;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                    v26,
                    (__int64)&unk_140274F93,
                    v27,
                    v28,
                    (__int64)v30,
                    (__int64)&v29,
                    (__int64)&v32);
                }
              }
            }
          }
          ObfDereferenceObject(v22);
        }
      }
    }
  }
}
