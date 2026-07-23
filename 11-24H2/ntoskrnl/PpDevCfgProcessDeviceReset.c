/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x140A7EC90
 * Callers:
 *     PiConfigureDevice @ 0x140721A7C (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     PiDevCfgInitDeviceContext @ 0x1409C9D7C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1409C9EF4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1409CDCF0 (PiDevCfgSetDeviceRegProp.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A7F31C (PiDevCfgResetDeviceDriverSettings.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int inited; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rsi
  WCHAR *v6; // rdx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int GuidString; // [rsp+50h] [rbp-B8h] BYREF
  int GuidString_4; // [rsp+54h] [rbp-B4h] BYREF
  UNICODE_STRING GuidString_8; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v19[3]; // [rsp+70h] [rbp-98h] BYREF
  int v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+8Ch] [rbp-7Ch]
  int v22; // [rsp+94h] [rbp-74h]
  int v23[4]; // [rsp+98h] [rbp-70h] BYREF
  void *v24; // [rsp+A8h] [rbp-60h]
  GUID Guid; // [rsp+F8h] [rbp-10h] BYREF

  memset_0(v23, 0, 0x58uLL);
  Handle = 0LL;
  Guid = 0LL;
  *(_QWORD *)&GuidString_8.Length = 0LL;
  GuidString_4 = 1;
  GuidString_8.Buffer = 0LL;
  v13 = 0;
  GuidString = 0;
  v14 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_24;
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
  {
    inited = -1073741808;
    goto LABEL_24;
  }
  inited = PiDevCfgInitDeviceContext(v3, 0LL, v23);
  if ( inited >= 0 )
  {
    v5 = (__int64)v24;
    v6 = *(WCHAR **)(a1 + 48);
    v19[0] = &DEVPKEY_Device_ClassGuid;
    v19[2] = &Guid;
    v19[1] = 13LL;
    v21 = 0LL;
    v22 = 0;
    v20 = 16;
    inited = PiDevCfgQueryObjectProperties(v4, v6, 1u, v24, (__int64)v19, 1u);
    if ( inited >= 0 )
    {
      if ( v21 < 0 )
        goto LABEL_11;
      inited = RtlStringFromGUIDEx(&Guid, &GuidString_8, 1u);
      if ( inited >= 0 )
      {
        if ( (int)PnpOpenObjectRegKey(*(_QWORD **)&PiPnpRtlCtx, GuidString_8.Buffer, 2, 131097, 0, (__int64)&Handle) >= 0 )
        {
LABEL_12:
          v7 = PiDevCfgMigrateDevice(
                 a1,
                 (__int64)v23,
                 (unsigned __int16 *)((unsigned __int64)&GuidString_8 & -(__int64)(GuidString_8.Buffer != 0LL)),
                 0LL,
                 &GuidString,
                 0LL);
          v8 = GuidString;
          if ( v7 < 0 )
            v8 = 0;
          PiDevCfgResetDeviceDriverSettings(
            a1,
            (int)v23,
            (unsigned __int64)&Guid & -(__int64)(GuidString_8.Buffer != 0LL),
            (int)Handle,
            0LL);
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Devices");
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Filters");
          if ( v8 )
          {
            v9 = *(_QWORD *)(a1 + 48);
            v14 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v9,
                        v5,
                        0xBu,
                        (__int64)&GuidString_4,
                        (__int64)&v13,
                        (__int64)&v14,
                        0) < 0
              || GuidString_4 != 4
              || (v11 = v13, v14 != 4) )
            {
              v11 = 0;
            }
            v13 = v8 | v11;
            PiDevCfgSetDeviceRegProp(v10, (__int64)v23, 0xBu, 4, (__int64)&v13, 4);
          }
          goto LABEL_20;
        }
        RtlFreeAnsiString(&GuidString_8);
LABEL_11:
        Guid = 0LL;
        goto LABEL_12;
      }
    }
  }
LABEL_20:
  if ( GuidString_8.Buffer )
  {
    ExFreePool(GuidString_8.Buffer);
    GuidString_8 = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
LABEL_24:
  PiDevCfgFreeDeviceContext((__int64)v23);
  return (unsigned int)inited;
}
