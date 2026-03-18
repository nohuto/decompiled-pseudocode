/*
 * XREFs of ?PlatformRetrieveConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEAIPEA_N_K@Z @ 0x14021E048
 * Callers:
 *     ?InitializeMaxCrashCount@UmfdHostLifeTimeManager@@SAXXZ @ 0x14021DFE4 (-InitializeMaxCrashCount@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall NSInstrumentation::PlatformRetrieveConfig32(
        NSInstrumentation *this,
        PCWSTR *a2,
        const unsigned __int16 **a3,
        unsigned int *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-31h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+80h] [rbp+1Fh] BYREF
  int v14; // [rsp+8Ch] [rbp+2Bh]

  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION\\GRE_Initialize");
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    v8 = 0LL;
    do
    {
      *((_BYTE *)a4 + v8) = 0;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( !(_DWORD)v8 );
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, *a2);
    ResultLength = 0;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x10u,
           &ResultLength) >= 0
      && ResultLength == 16 )
    {
      v7 = v14;
      *(_BYTE *)a4 = 1;
      *(_DWORD *)a3 = v7;
    }
    else
    {
      *(_BYTE *)a4 = 0;
    }
    ZwClose(KeyHandle);
  }
}
