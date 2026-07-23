/*
 * XREFs of PnpInitializeSessionId @ 0x140A76300
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     IopGetSessionIdFromPDO @ 0x1409BFB14 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpInitializeSessionId(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v7; // r9d
  int v8; // r11d
  int v9; // r10d
  struct _DEVICE_OBJECT *v10; // rcx
  ULONG v11; // eax
  int *v12; // rcx
  int v13; // edx
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = -1;
  result = *(_QWORD *)(a1 + 16);
  v7 = -1;
  v8 = -1;
  v9 = -1;
  if ( result )
  {
    v10 = *(struct _DEVICE_OBJECT **)(result + 32);
    result = (__int64)v10->DeviceObjectExtension;
    if ( (*(_DWORD *)(result + 32) & 0x400) != 0 )
    {
      result = IopGetSessionIdFromPDO(v10);
      v7 = result;
      v14 = result;
      v8 = result;
      v9 = result;
    }
  }
  if ( !a3 || v7 != -1 )
  {
    if ( !a3 )
      v9 = v8;
    if ( v9 == -1 )
    {
      v11 = 0;
      v12 = 0LL;
      v13 = 0;
    }
    else
    {
      v11 = 4;
      v12 = &v14;
      v13 = 7;
    }
    return PnpSetObjectProperty(
             *(__int64 *)&PiPnpRtlCtx,
             *(_QWORD *)(a1 + 48),
             1,
             a2,
             0LL,
             (__int64)&DEVPKEY_Device_SessionId,
             v13,
             (__int64)v12,
             v11,
             a3 != 0 ? 0x20000 : 0);
  }
  return result;
}
