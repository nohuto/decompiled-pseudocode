/*
 * XREFs of NdisReadNetworkAddress @ 0x140050620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     NdisReadConfiguration @ 0x140050D30 (NdisReadConfiguration.c)
 */

void __stdcall NdisReadNetworkAddress(
        PNDIS_STATUS Status,
        PVOID *NetworkAddress,
        PUINT NetworkAddressLength,
        NDIS_HANDLE ConfigurationHandle)
{
  int v7; // edx
  unsigned int v8; // r14d
  CHAR *Buffer; // rbx
  CHAR *v10; // r12
  CHAR *v11; // rdi
  CHAR *v12; // rbp
  PNDIS_CONFIGURATION_PARAMETER v13; // rax
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-58h] BYREF
  CHAR String; // [rsp+90h] [rbp+8h] BYREF
  CHAR v16; // [rsp+91h] [rbp+9h]
  char v17; // [rsp+92h] [rbp+Ah]
  PVOID *v18; // [rsp+98h] [rbp+10h]
  ULONG Value; // [rsp+A0h] [rbp+18h] BYREF
  NTSTATUS v20; // [rsp+A8h] [rbp+20h]

  v18 = NetworkAddress;
  ParameterValue = 0LL;
  Value = 0;
  v20 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NetworkAddress) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NetworkAddress,
      8,
      35,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)ConfigurationHandle);
  }
  *Status = -1073741823;
  *NetworkAddressLength = 0;
  NdisReadConfiguration(Status, &ParameterValue, ConfigurationHandle, (PNDIS_STRING)&Keyword, NdisParameterString);
  if ( *Status
    || ParameterValue->ParameterType != NdisParameterString
    || ParameterValue->ParameterData.StringData.Length < 4u )
  {
    goto LABEL_10;
  }
  v17 = 0;
  v8 = 0;
  Buffer = (CHAR *)ParameterValue->ParameterData.StringData.Buffer;
  v10 = Buffer;
  v11 = Buffer + 4;
  v12 = &Buffer[2 * ((unsigned __int64)ParameterValue->ParameterData.StringData.Length >> 1)];
  while ( v11 <= v12 )
  {
    String = *Buffer;
    v16 = Buffer[2];
    Buffer += 4;
    v11 += 4;
    v20 = RtlCharToInteger(&String, 0x10u, &Value);
    if ( v20 < 0 )
      goto LABEL_10;
    ++v8;
    *v10++ = Value;
    if ( Buffer < v12 && *(_WORD *)Buffer == 45 )
    {
      Buffer += 2;
      v11 += 2;
    }
  }
  if ( v20 >= 0 )
  {
    v13 = ParameterValue;
    *Status = 0;
    *v18 = v13->ParameterData.StringData.Buffer;
    *NetworkAddressLength = v8;
    if ( !v8 )
LABEL_10:
      *Status = -1073741823;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      8,
      36,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)ConfigurationHandle);
  }
}
