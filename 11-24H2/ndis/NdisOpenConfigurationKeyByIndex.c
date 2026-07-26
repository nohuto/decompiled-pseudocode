/*
 * XREFs of NdisOpenConfigurationKeyByIndex @ 0x140090F90
 * Callers:
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x14018E438 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationKeyByName @ 0x14005B220 (NdisOpenConfigurationKeyByName.c)
 *     ndisOpenProtocolSubkey @ 0x14005B460 (ndisOpenProtocolSubkey.c)
 */

void __stdcall NdisOpenConfigurationKeyByIndex(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        ULONG Index,
        PNDIS_STRING KeyName,
        PNDIS_HANDLE KeyHandle)
{
  _QWORD *v7; // rbx
  PVOID *v9; // r14
  int v10; // eax
  int v11; // edx
  void *v12; // rbp
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v14; // rsi
  NTSTATUS v15; // eax
  unsigned __int16 v16; // ax
  char ResultLength; // [rsp+28h] [rbp-40h]
  UNICODE_STRING SubKeyName; // [rsp+30h] [rbp-38h] BYREF
  ULONG Length; // [rsp+78h] [rbp+10h] BYREF

  Length = 0;
  SubKeyName = 0LL;
  v7 = ConfigurationHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ResultLength = (char)ConfigurationHandle;
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      26,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      ResultLength);
  }
  v9 = KeyHandle;
  *KeyHandle = 0LL;
  if ( (*(_DWORD *)(v7[2] + 16LL) & 2) == 0
    || v7[4]
    || (v10 = ndisOpenProtocolSubkey((__int64)v7), *Status = v10, v10 >= 0) )
  {
    v12 = (void *)v7[4];
    Length = 280;
    Pool2 = (unsigned __int16 *)ExAllocatePool2(64LL, 280LL, 538985550LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      v15 = ZwEnumerateKey(v12, Index, KeyBasicInformation, Pool2, Length, &Length);
      *Status = v15;
      if ( v15 >= 0 )
      {
        SubKeyName.MaximumLength = v14[6];
        SubKeyName.Length = SubKeyName.MaximumLength;
        SubKeyName.Buffer = v14 + 8;
        NdisOpenConfigurationKeyByName(Status, v7, &SubKeyName, v9);
        if ( !*Status )
        {
          v16 = SubKeyName.Length;
          KeyName->MaximumLength = SubKeyName.Length;
          KeyName->Length = v16;
          KeyName->Buffer = (wchar_t *)((char *)*v9 + 176);
        }
      }
      ExFreePoolWithTag(v14, 0);
    }
    else
    {
      *Status = -1073741670;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      8,
      27,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (char)v7);
  }
}
