/*
 * XREFs of PopInitializePowerButtonHold @ 0x140C34230
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopInitializeWorkItem @ 0x140747708 (PopInitializeWorkItem.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14075BB4C (PopPowerButtonBugcheckConfigure.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 *     RtlIsStateSeparationEnabled @ 0x140A579B0 (RtlIsStateSeparationEnabled.c)
 */

void __fastcall PopInitializePowerButtonHold(int a1)
{
  char v1; // bl
  __int64 v2; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES KeyHandle_8; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  ULONG BufferLengthOut[4]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+A8h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  v1 = 0;
  LOBYTE(v2) = 0;
  DestinationString = 0LL;
  memset(&KeyHandle_8, 0, 44);
  if ( !a1 )
  {
    PopPowerButtonBugcheckConfig = 0;
    PopPowerButtonLiveDumpConfig = 0;
    PopPowerButtonBugcheckLock = 0LL;
    memset_0(&unk_140F07A48, 0, 0xE8uLL);
    memset_0(&PopPowerButtonTriageBlock, 0, 0xA0uLL);
    LODWORD(PopPowerButtonTriageBlock) = 2;
    qword_140F07BD0 = (__int64)&PopBlackBoxEntries;
    qword_140F07BB0 = 0LL;
    word_140F07BB8 = 0;
    dword_140F07BBC = 0;
    byte_140F07BC0 = 0;
    qword_140F07BC4 = 0LL;
    dword_140F07BD8 = 25;
    PopPowerButtonHold = 0LL;
    PopInitializeWorkItem((__int64)&unk_140F07AD0, (__int64)PopPowerButtonWorkCallback, 0LL);
    return;
  }
  if ( a1 == 1 )
  {
    if ( RtlIsStateSeparationEnabled() )
    {
      if ( RtlGetPersistedStateLocation(
             L"PowerButton",
             0LL,
             0LL,
             LocationTypeRegistry,
             SourceString,
             0x208u,
             BufferLengthOut) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyHandle_8.Length = 48;
        KeyHandle_8.ObjectName = &DestinationString;
        KeyHandle_8.RootDirectory = 0LL;
        KeyHandle_8.Attributes = 576;
        *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x11u, &KeyHandle_8) >= 0 )
        {
          qword_140F07A38 = (__int64)KeyHandle;
          qword_140F07A30 = (__int64)PopPowerButtonBugcheckWatchCallback;
          *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
          PopPowerButtonBugcheckConfigure(KeyHandle, 1, &v2);
          if ( (_BYTE)v2 )
            return;
        }
      }
    }
    else
    {
      v1 = 1;
    }
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER");
    KeyHandle_8.Length = 48;
    KeyHandle_8.ObjectName = &DestinationString;
    KeyHandle_8.RootDirectory = 0LL;
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x11u, &KeyHandle_8) >= 0 )
    {
      if ( v1 )
      {
        qword_140F07A30 = (__int64)PopPowerButtonBugcheckWatchCallback;
        qword_140F07A38 = (__int64)KeyHandle;
        *(_QWORD *)PopPowerButtonBugcheckWatchWorkItem = 0LL;
      }
      PopPowerButtonBugcheckConfigure(KeyHandle, v1, &v2);
    }
  }
}
