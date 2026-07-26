/*
 * XREFs of ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x140199470
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1401998DC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1400513F0 (NdisOpenProtocolConfiguration.c)
 *     NdisCloseConfiguration @ 0x140051840 (NdisCloseConfiguration.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x14006FFB0 (NdisConvertNdisStatusToNtStatus.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x14009C300 (NdisOpenConfigurationKeyByIndex.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

NTSTATUS ndisIfLuidAllocatorSubsystemInitialize(void)
{
  NTSTATUS result; // eax
  ULONG v1; // r12d
  unsigned __int16 Length; // r13
  wchar_t *Buffer; // r15
  size_t v4; // rbx
  __int64 Pool2; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  PVOID v8; // rcx
  int v9; // ebx
  UNICODE_STRING Keyword; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  UNICODE_STRING KeyName; // [rsp+60h] [rbp-18h] BYREF
  int Status; // [rsp+B0h] [rbp+38h] BYREF
  PVOID KeyHandle; // [rsp+B8h] [rbp+40h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+C0h] [rbp+48h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+C8h] [rbp+50h] BYREF

  Status = 0;
  qword_140126AB0 = (__int64)&qword_140126AA8;
  qword_140126AA8 = (__int64)&qword_140126AA8;
  KeInitializeMutex(&Mutex, 0xFFFFu);
  if ( !RtlCheckRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes")
    || (result = RtlCreateRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes"), result >= 0) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes");
    ConfigurationHandle = 0LL;
    NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &DestinationString);
    if ( Status )
    {
      return NdisConvertNdisStatusToNtStatus(Status);
    }
    else
    {
      KeyHandle = 0LL;
      NdisOpenConfigurationKeyByIndex(&Status, ConfigurationHandle, 0, &KeyName, &KeyHandle);
      v1 = 1;
      while ( !Status )
      {
        Keyword.Buffer = (wchar_t *)L"IfType";
        ParameterValue = 0LL;
        *(_QWORD *)&Keyword.Length = 917516LL;
        NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &Keyword, NdisParameterInteger);
        if ( Status )
        {
          NdisCloseConfiguration(KeyHandle);
        }
        else
        {
          Length = ParameterValue->ParameterData.StringData.Length;
          v11.Buffer = (wchar_t *)L"IfUsedNetLuidIndices";
          *(_QWORD *)&v11.Length = 2752552LL;
          NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &v11, NdisParameterBinary);
          if ( Status )
          {
            Buffer = 0LL;
            v4 = 0LL;
          }
          else
          {
            Buffer = ParameterValue->ParameterData.StringData.Buffer;
            v4 = ParameterValue->ParameterData.StringData.Length;
          }
          Pool2 = ExAllocatePool2(64LL, (unsigned int)(2 * v4 + 64), 1718174798);
          v6 = Pool2;
          *(_WORD *)(Pool2 + 16) = Length;
          if ( (_DWORD)v4 )
          {
            *(_DWORD *)(Pool2 + 40) = v4;
            *(_QWORD *)(Pool2 + 48) = Pool2 + 64;
            *(_QWORD *)(Pool2 + 56) = v4 + Pool2 + 64;
            memmove((void *)(Pool2 + 64), Buffer, v4);
            memmove(*(void **)(v6 + 56), Buffer, v4);
          }
          v7 = qword_140126AA8;
          if ( *(__int64 **)(qword_140126AA8 + 8) != &qword_140126AA8 )
            __fastfail(3u);
          v8 = KeyHandle;
          *(_QWORD *)v6 = qword_140126AA8;
          *(_QWORD *)(v6 + 8) = &qword_140126AA8;
          *(_QWORD *)(v7 + 8) = v6;
          qword_140126AA8 = v6;
          NdisCloseConfiguration(v8);
        }
        KeyHandle = 0LL;
        NdisOpenConfigurationKeyByIndex(&Status, ConfigurationHandle, v1++, &KeyName, &KeyHandle);
      }
      v9 = NdisConvertNdisStatusToNtStatus(Status);
      if ( ConfigurationHandle )
        NdisCloseConfiguration(ConfigurationHandle);
      return v9;
    }
  }
  return result;
}
