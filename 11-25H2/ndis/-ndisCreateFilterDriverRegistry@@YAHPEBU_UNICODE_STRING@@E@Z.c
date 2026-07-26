/*
 * XREFs of ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x140097E10
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1400A3F50 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_dd @ 0x1400758B0 (WPP_RECORDER_SF_dd_ea_1400758B0.c)
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x1400A344C (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 */

__int64 __fastcall ndisCreateFilterDriverRegistry(const struct _UNICODE_STRING *a1, unsigned __int8 a2)
{
  int v2; // edi
  int v4; // edx
  unsigned int v6; // esi
  int v7; // eax
  NTSTATUS RegistryValues; // eax
  int v9; // edx
  NTSTATUS v10; // r14d
  __int64 v11; // [rsp+30h] [rbp-59h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _BYTE QueryTable[64]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v14; // [rsp+90h] [rbp+7h]
  __int128 v15; // [rsp+A0h] [rbp+17h]
  __int128 v16; // [rsp+B0h] [rbp+27h]
  int ValueData; // [rsp+100h] [rbp+77h] BYREF

  v2 = a2;
  if ( RtlIsStateSeparationEnabled() )
    return 0LL;
  v6 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  DestinationString.Length = 0;
  ValueData = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      86,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1);
  }
  DestinationString.MaximumLength = ndisParameterStr.Length + a1->Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, DestinationString.MaximumLength, 538985550);
  if ( DestinationString.Buffer )
  {
    RtlCopyUnicodeString(&DestinationString, a1);
    RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
    if ( RtlCheckRegistryKey(1u, (PWSTR)DestinationString.Buffer)
      && RtlCreateRegistryKey(1u, (PWSTR)DestinationString.Buffer) )
    {
      v6 = -1073741823;
    }
    else
    {
      *(_OWORD *)&QueryTable[16] = 0LL;
      v7 = 292;
      if ( !(_BYTE)v2 )
        v7 = 36;
      *(_QWORD *)&QueryTable[16] = L"DefaultFilterSettings";
      *(_OWORD *)QueryTable = 0LL;
      *(_DWORD *)&QueryTable[8] = v7;
      *(_QWORD *)&QueryTable[24] = &ValueData;
      memset(&QueryTable[32], 0, 32);
      *(_DWORD *)&QueryTable[32] = (_BYTE)v2 != 0 ? 0x4000000 : 0;
      v14 = 0uLL;
      v15 = 0LL;
      v16 = 0LL;
      RegistryValues = RtlQueryRegistryValuesEx(
                         1u,
                         (PCWSTR)DestinationString.Buffer,
                         (PRTL_QUERY_REGISTRY_TABLE)QueryTable,
                         0LL,
                         0LL);
      v10 = RegistryValues;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          1u,
          0x57u,
          (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
          RegistryValues,
          v2);
      if ( v10 )
      {
        if ( v10 == -1073741772 )
        {
          v6 = ndisSetAllFilterDefaultParameters(a1, &DestinationString, &ndisFilterDriverParamsStr, v2);
          if ( !v6 )
          {
            ValueData = 1;
            if ( RtlWriteRegistryValue(
                   1u,
                   (PCWSTR)DestinationString.Buffer,
                   L"DefaultFilterSettings",
                   4u,
                   &ValueData,
                   4u) )
            {
              v6 = -1073741823;
            }
          }
        }
        else
        {
          v6 = -1073741823;
        }
      }
    }
  }
  else
  {
    v6 = -1073741670;
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x58u,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1,
      v11);
  }
  return v6;
}
