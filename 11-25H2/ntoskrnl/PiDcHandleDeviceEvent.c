/*
 * XREFs of PiDcHandleDeviceEvent @ 0x140A45E74
 * Callers:
 *     PiDcHandleObjectEvent @ 0x1408D1C4C (PiDcHandleObjectEvent.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14094E664 (_PnpStringFromGuid.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A9989C (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleDeviceEvent(__int64 a1)
{
  int ObjectProperty; // ebx
  unsigned int v3; // edi
  __int64 v4; // r14
  __int128 v5; // xmm0
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  char v9[4]; // [rsp+68h] [rbp-59h] BYREF
  int v10; // [rsp+6Ch] [rbp-55h] BYREF
  int v11; // [rsp+70h] [rbp-51h] BYREF
  __int128 Buffer; // [rsp+78h] [rbp-49h] BYREF
  __int64 v13; // [rsp+88h] [rbp-39h]
  __int128 v14; // [rsp+90h] [rbp-31h] BYREF
  WCHAR v15[40]; // [rsp+A8h] [rbp-19h] BYREF

  ObjectProperty = 0;
  v11 = 0;
  v10 = 0;
  v3 = 0;
  v9[0] = 0;
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
                         *(const WCHAR **)(*(_QWORD *)(a1 + 8) + 16LL),
                         1u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         &v10,
                         &v14,
                         0x10u,
                         (__int64)&v11,
                         0);
      if ( ObjectProperty >= 0 && v10 == 13 && v11 == 16 )
      {
        ObjectProperty = PnpStringFromGuid((int *)&v14, v15);
        if ( ObjectProperty >= 0 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             *(_QWORD **)&PiPnpRtlCtx,
                             v15,
                             5u,
                             0LL,
                             0LL,
                             (__int64)&DEVPKEY_DeviceContainer_IsLocalMachine,
                             &v10,
                             v9,
                             1u,
                             (__int64)&v11,
                             0);
          if ( ObjectProperty >= 0 && v10 == 17 && v11 == 1 && (v9[0] != -1 || (v7[5] & 1) != 0) )
            return (unsigned int)PiDcContainerRequiresConfiguration((int)v15);
        }
      }
      return (unsigned int)ObjectProperty;
    }
    ++v3;
  }
  return (unsigned int)ObjectProperty;
}
