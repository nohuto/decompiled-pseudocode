/*
 * XREFs of PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A68DF8
 * Callers:
 *     PiDcHandleContainerEvent @ 0x140A68D7C (PiDcHandleContainerEvent.c)
 *     PiDcInit @ 0x140C1323C (PiDcInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiDcGenerateConfigNotificationIfContainerRequiresConfiguration(const WCHAR *a1)
{
  int ObjectProperty; // ebx
  int v4; // eax
  _DWORD v5[4]; // [rsp+60h] [rbp-10h] BYREF
  char v6; // [rsp+A8h] [rbp+38h] BYREF
  int v7; // [rsp+B0h] [rbp+40h] BYREF
  int v8; // [rsp+B8h] [rbp+48h] BYREF

  v7 = 0;
  v8 = 0;
  v5[0] = 0;
  v6 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     *(_QWORD **)&PiPnpRtlCtx,
                     a1,
                     5u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_DeviceContainer_IsConnected,
                     &v7,
                     &v6,
                     1u,
                     (__int64)&v8,
                     0);
  if ( ObjectProperty >= 0 && v6 && v7 == 17 )
  {
    v4 = PnpGetObjectProperty(
           *(_QWORD **)&PiPnpRtlCtx,
           a1,
           5u,
           0LL,
           0LL,
           (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
           &v7,
           v5,
           4u,
           (__int64)&v8,
           0);
    ObjectProperty = v4;
    if ( v4 < 0 )
      goto LABEL_9;
    if ( v7 == 7 )
    {
      if ( !v5[0] )
        return (unsigned int)ObjectProperty;
      if ( v7 == 7 )
      {
LABEL_9:
        if ( v4 != -1073741275 )
        {
LABEL_11:
          ZwUpdateWnfStateData(&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
          return (unsigned int)ObjectProperty;
        }
      }
    }
    ObjectProperty = PnpSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)a1,
                       5,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                       7,
                       (__int64)&unconfiguredConfigFlags,
                       4u,
                       0);
    if ( ObjectProperty >= 0 )
      goto LABEL_11;
  }
  return (unsigned int)ObjectProperty;
}
