/*
 * XREFs of RaidUnitGet1667DeviceRegistryValue @ 0x14009E23C
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x14009E318 (RaidUnitGetCompatibleIds.c)
 * Callees:
 *     PortRegistryReadDeviceKey @ 0x1401B8954 (PortRegistryReadDeviceKey.c)
 */

char __fastcall RaidUnitGet1667DeviceRegistryValue(__int64 a1)
{
  _BYTE *v1; // rax
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v6; // [rsp+60h] [rbp+10h] BYREF
  int KeyHandle; // [rsp+68h] [rbp+18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF

  v1 = *(_BYTE **)(a1 + 112);
  if ( v1 )
  {
    LOBYTE(v1) = *v1 & 0x1F;
    if ( !(_BYTE)v1 || (_BYTE)v1 == 20 )
    {
      v6 = -1;
      v8 = (__int64)&v6;
      KeyHandle = 4;
      DestinationString = 0LL;
      v4 = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Storport");
      RtlInitUnicodeString(&v4, L"Is1667Device");
      LODWORD(v1) = PortRegistryReadDeviceKey(
                      *(_QWORD *)(a1 + 8),
                      (int)&DestinationString,
                      (int)&v4,
                      4,
                      (__int64)&v8,
                      &KeyHandle);
      if ( (int)v1 >= 0 )
      {
        LOBYTE(v1) = v6;
        if ( v6 )
        {
          if ( v6 != -1 )
            *(_WORD *)(a1 + 136) |= 1u;
        }
        else
        {
          LOBYTE(v1) = -2;
          *(_WORD *)(a1 + 136) &= ~1u;
        }
      }
    }
  }
  return (char)v1;
}
