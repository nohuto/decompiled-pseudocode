/*
 * XREFs of RaidAdapterHack @ 0x140039D6C
 * Callers:
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 * Callees:
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     RaGetBusData @ 0x14006901C (RaGetBusData.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaDeleteBus @ 0x140181334 (RaDeleteBus.c)
 *     PortRegistryWriteDeviceKey @ 0x1401BB6D4 (PortRegistryWriteDeviceKey.c)
 *     RaInitializeBus @ 0x1401BC2BC (RaInitializeBus.c)
 */

__int64 __fastcall RaidAdapterHack(__int64 a1)
{
  __int64 result; // rax
  int v3; // r9d
  int v4; // eax
  int v5; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING v6; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  char v8; // [rsp+60h] [rbp-49h] BYREF
  int v9; // [rsp+61h] [rbp-48h]
  __int16 v10; // [rsp+65h] [rbp-44h]
  char v11; // [rsp+67h] [rbp-42h]
  __int16 v12; // [rsp+B0h] [rbp+7h] BYREF
  __int16 v13; // [rsp+B2h] [rbp+9h]

  v5 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  DestinationString = 0LL;
  v6 = 0LL;
  memset_0(&v8, 0, 0x41uLL);
  memset_0(&v12, 0, 0x40uLL);
  result = RaInitializeBus(&v8, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)RaGetBusData((unsigned int)&v8, 4, (unsigned int)&v12, v3, 64) >= 0xF )
    {
      if ( v12 == 5197 )
      {
        if ( v13 != 5632 && (unsigned __int16)(v13 + 22528) > 1u )
          return RaDeleteBus(&v8);
        RtlInitUnicodeString(&DestinationString, L"Interrupt Management\\MessageSignaledInterruptProperties");
        RtlInitUnicodeString(&v6, L"MSISupported");
        v4 = PortRegistryWriteDeviceKey(
               *(_QWORD *)(a1 + 32),
               (unsigned int)&DestinationString,
               (unsigned int)&v6,
               4,
               (__int64)&v5,
               4);
        if ( v4 < 0
          && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            64LL,
            &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
            (unsigned int)v4);
        }
      }
      if ( v12 == 4318 )
        *(_BYTE *)(a1 + 5360) = 1;
    }
    return RaDeleteBus(&v8);
  }
  return result;
}
