/*
 * XREFs of PiDcHandleInterfaceEvent @ 0x140A69D4C
 * Callers:
 *     PiDcHandleObjectEvent @ 0x1408D1C4C (PiDcHandleObjectEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14094E664 (_PnpStringFromGuid.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A9989C (PiDcContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleInterfaceEvent(__int64 a1)
{
  int v1; // eax
  int ObjectProperty; // edx
  int v4; // [rsp+60h] [rbp-88h] BYREF
  int v5; // [rsp+64h] [rbp-84h] BYREF
  int v6[6]; // [rsp+68h] [rbp-80h] BYREF
  wchar_t v7[40]; // [rsp+80h] [rbp-68h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  ObjectProperty = 0;
  v5 = 0;
  v4 = 0;
  *(_OWORD *)v6 = 0LL;
  if ( (v1 & 1) != 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(_QWORD **)&PiPnpRtlCtx,
                       *(const WCHAR **)(*(_QWORD *)(a1 + 8) + 16LL),
                       3u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       &v4,
                       v6,
                       0x10u,
                       (__int64)&v5,
                       0);
    if ( ObjectProperty >= 0 && v4 == 13 && v5 == 16 )
    {
      ObjectProperty = PnpStringFromGuid(v6, v7);
      if ( ObjectProperty >= 0 )
        return (unsigned int)PiDcContainerRequiresConfiguration((int)v7);
    }
  }
  return (unsigned int)ObjectProperty;
}
