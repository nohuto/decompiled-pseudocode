/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140164034
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401AC8F8 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400FBA74 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0x1400FFE58 (ForegroundBoost--_anonymous_namespace_--IsProcessForegroundBoostedNoSpin.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1400FFE74 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A23E4 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource @ 0x1401ABF68 (ForegroundBoost--_anonymous_namespace_--AddProcessBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401AC36C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource @ 0x1401AC854 (ForegroundBoost--_anonymous_namespace_--RemoveProcessBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy @ 0x1401ACAE4 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClassWithPolicy.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // ebp
  int v7; // eax
  __int64 v8; // r14
  int v9; // edi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v11; // rdx
  char v12; // r14
  char v13; // r15
  int v14; // edi
  int v15; // ebx
  __int64 UserSessionState; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD v20[4]; // [rsp+50h] [rbp-38h] BYREF
  int HasBoostSource; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = 0;
  if ( !(unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline()
    || !_bittest64(a1 + 102, 0x29u) )
  {
    v8 = *a1;
    if ( a2 )
    {
      v9 = a2 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          goto LABEL_40;
        if ( ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin() )
        {
          if ( (_DWORD)v3 )
          {
            HasBoostSource = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 372LL);
          }
          IsEnabledDeviceUsageNoInline = Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline();
          v11 = 2LL;
          if ( IsEnabledDeviceUsageNoInline )
            goto LABEL_35;
LABEL_39:
          PsSetProcessPriorityByClass(v8, v11);
          goto LABEL_40;
        }
        if ( !(_DWORD)v3 )
        {
          HasBoostSource = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 385LL);
        }
        if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
        {
          if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
          {
            v4 = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(a1, 1LL);
            if ( v4 == 1 )
              v4 = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(a1, 2LL);
          }
          else
          {
            PsSetProcessPriorityByClass(v8, 1LL);
            PsSetProcessPriorityByClass(v8, 2LL);
          }
        }
        goto LABEL_20;
      }
      if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
      {
        if ( !(_DWORD)v3 )
        {
          HasBoostSource = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 308LL);
        }
      }
      else if ( (_DWORD)v3 )
      {
LABEL_20:
        if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
          ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource(a1, (unsigned int)v3);
        else
          a1[102] = (a1[102] | (v3 << 30)) ^ (a1[102] ^ (a1[102] | (v3 << 30))) & 0xFFFFFFC03FFFFFFFuLL;
        goto LABEL_40;
      }
      if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
        v4 = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(a1, 1LL);
      else
        PsSetProcessPriorityByClass(v8, 1LL);
      if ( (_DWORD)v3 )
        goto LABEL_20;
    }
    else if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (unsigned int)ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource(a1, (unsigned int)v3) == 1 )
      {
        v11 = 0LL;
LABEL_35:
        v4 = ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(a1, v11);
      }
    }
    else if ( !ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    {
      a1[102] &= ((__int64)~(_DWORD)v3 << 30) | 0xFFFFFFC03FFFFFFFuLL;
      if ( ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
      {
        v11 = 0LL;
        goto LABEL_39;
      }
    }
LABEL_40:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *((_DWORD *)a1 + 14);
      v15 = (unsigned __int8)((unsigned __int64)a1[102] >> 30);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v13,
        *(_QWORD *)(UserSessionState + 69400),
        4u,
        0xDu,
        0xDu,
        (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
        v14,
        v15);
    }
    v7 = Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline();
    if ( v7 )
    {
      if ( v4 != 1 )
        return v7;
      if ( (unsigned int)dword_14029AF48 <= 5 )
        return v7;
      LOBYTE(v7) = tlgKeywordOn((__int64)&dword_14029AF48, 4LL);
      if ( !(_BYTE)v7 )
        return v7;
    }
    else
    {
      if ( (unsigned int)dword_14029AF48 <= 5 )
        return v7;
      LOBYTE(v7) = tlgKeywordOn((__int64)&dword_14029AF48, 4LL);
      if ( !(_BYTE)v7 )
        return v7;
    }
    HasBoostSource = (unsigned __int8)ForegroundBoost::_anonymous_namespace_::HasBoostSource(a1, 0LL);
    v20[0] = *((_DWORD *)a1 + 14);
    LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                   (__int64)&dword_14029AF48,
                   byte_140274FE9,
                   v17,
                   v18,
                   (__int64)v20,
                   (__int64)&HasBoostSource);
    return v7;
  }
  LOBYTE(v7) = ForegroundBoost::_anonymous_namespace_::IsProcessBackground();
  if ( !(_BYTE)v7 )
  {
    HasBoostSource = 0x20000;
    LOBYTE(v7) = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 295LL);
  }
  return v7;
}
