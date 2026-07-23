/*
 * XREFs of PiDcHandleDeviceEvent @ 0x140A37CEC
 * Callers:
 *     PiDcHandleObjectEvent @ 0x140A37C9C (PiDcHandleObjectEvent.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A99C50 (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleDeviceEvent(__int64 a1)
{
  int ObjectProperty; // ebx
  unsigned int v3; // edi
  __int64 v4; // r14
  __int128 v5; // xmm0
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  wchar_t v9[2]; // [rsp+68h] [rbp-59h] BYREF
  int v10; // [rsp+6Ch] [rbp-55h] BYREF
  int v11; // [rsp+70h] [rbp-51h] BYREF
  __int128 Buffer; // [rsp+78h] [rbp-49h] BYREF
  __int64 v13; // [rsp+88h] [rbp-39h]
  __int128 v14; // [rsp+90h] [rbp-31h] BYREF
  wchar_t Str2[40]; // [rsp+A8h] [rbp-19h] BYREF

  ObjectProperty = 0;
  v11 = 0;
  v10 = 0;
  v3 = 0;
  LOBYTE(v9[0]) = 0;
  v14 = 0LL;
  v13 = 0LL;
  Buffer = 0LL;
  while ( v3 < *(_DWORD *)(a1 + 76) )
  {
    v4 = 32LL * v3;
    v5 = *(_OWORD *)(v4 + a1 + 80);
    LODWORD(v13) = *(_DWORD *)(v4 + a1 + 96);
    Buffer = v5;
    v6 = RtlLookupElementGenericTableAvl(&PiDcUpdateProperties, &Buffer);
    v7 = v6;
    if ( !*(_DWORD *)(v4 + a1 + 100) && !*(_QWORD *)(v4 + a1 + 104) && v6 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         *(_QWORD **)&PiPnpRtlCtx,
                         *(WCHAR **)(*(_QWORD *)(a1 + 8) + 16LL),
                         1u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         &v10,
                         (const wchar_t *)&v14,
                         0x10u,
                         (__int64)&v11,
                         0);
      if ( ObjectProperty >= 0 && v10 == 13 && v11 == 16 )
      {
        ObjectProperty = PnpStringFromGuid((int *)&v14, Str2);
        if ( ObjectProperty >= 0 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             *(_QWORD **)&PiPnpRtlCtx,
                             Str2,
                             5u,
                             0LL,
                             0LL,
                             (__int64)&DEVPKEY_DeviceContainer_IsLocalMachine,
                             &v10,
                             v9,
                             1u,
                             (__int64)&v11,
                             0);
          if ( ObjectProperty >= 0 && v10 == 17 && v11 == 1 && (LOBYTE(v9[0]) != 0xFF || (v7[5] & 1) != 0) )
            return (unsigned int)PiDcContainerRequiresConfiguration(Str2);
        }
      }
      return (unsigned int)ObjectProperty;
    }
    ++v3;
  }
  return (unsigned int)ObjectProperty;
}
