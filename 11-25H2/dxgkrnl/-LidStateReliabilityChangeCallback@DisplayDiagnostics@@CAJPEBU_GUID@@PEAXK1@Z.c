/*
 * XREFs of ?LidStateReliabilityChangeCallback@DisplayDiagnostics@@CAJPEBU_GUID@@PEAXK1@Z @ 0x14006E710
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DisplayDiagnostics::LidStateReliabilityChangeCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        _BYTE *Context)
{
  __int64 v7; // rax

  if ( ValueLength < 4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"ValueLength >= sizeof(LONG)", 68LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *Value > 1u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 69;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(*(LONG*)pValue == 0) || (*(LONG*)pValue == 1)",
      69LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 )
    v7 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4;
  if ( !v7 )
    Context[160] = *Value != 0;
  return 0LL;
}
