/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x140A84170
 * Callers:
 *     PiConfigureDevice @ 0x140723EEC (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1408CD438 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgInitDeviceContext @ 0x140997624 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x140997788 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409978B4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14099B580 (PiDevCfgSetDeviceRegProp.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     _PnpCtxRegDeleteTree @ 0x140A845DC (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
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
  int v13; // [rsp+48h] [rbp-79h] BYREF
  int v14; // [rsp+4Ch] [rbp-75h] BYREF
  int v15; // [rsp+50h] [rbp-71h] BYREF
  int v16; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v19[3]; // [rsp+70h] [rbp-51h] BYREF
  int v20; // [rsp+88h] [rbp-39h]
  __int64 v21; // [rsp+8Ch] [rbp-35h]
  int v22; // [rsp+94h] [rbp-2Dh]
  _QWORD v23[2]; // [rsp+98h] [rbp-29h] BYREF
  void *v24; // [rsp+A8h] [rbp-19h]
  __int128 v25; // [rsp+E8h] [rbp+27h] BYREF

  memset_0(v23, 0, 0x48uLL);
  Handle = 0LL;
  v25 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v16 = 1;
  UnicodeString.Buffer = 0LL;
  v13 = 0;
  v15 = 0;
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
    v19[2] = &v25;
    v19[1] = 13LL;
    v21 = 0LL;
    v22 = 0;
    v20 = 16;
    inited = PiDevCfgQueryObjectProperties(v4, v6, 1u, v24, (__int64)v19, 1u);
    if ( inited >= 0 )
    {
      if ( v21 < 0 )
        goto LABEL_11;
      inited = RtlStringFromGUIDEx((unsigned int *)&v25, (__int64)&UnicodeString, 1);
      if ( inited >= 0 )
      {
        if ( (int)PnpOpenObjectRegKey(*(_QWORD **)&PiPnpRtlCtx, UnicodeString.Buffer, 2, 131097, 0, (__int64)&Handle) >= 0 )
        {
LABEL_12:
          v7 = PiDevCfgMigrateDevice(
                 a1,
                 (__int64)v23,
                 (unsigned __int16 *)((unsigned __int64)&UnicodeString & -(__int64)(UnicodeString.Buffer != 0LL)),
                 0LL,
                 &v15,
                 0LL);
          v8 = v15;
          if ( v7 < 0 )
            v8 = 0;
          PiDevCfgResetDeviceDriverSettings(
            a1,
            (unsigned int)v23,
            (unsigned __int64)&v25 & -(__int64)(UnicodeString.Buffer != 0LL),
            (_DWORD)Handle,
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
                        (__int64)&v16,
                        (__int64)&v13,
                        (__int64)&v14,
                        0) < 0
              || v16 != 4
              || (v11 = v13, v14 != 4) )
            {
              v11 = 0;
            }
            v13 = v8 | v11;
            PiDevCfgSetDeviceRegProp(v10, (__int64)v23, 0xBu, 4, (__int64)&v13, 4);
          }
          goto LABEL_20;
        }
        RtlFreeAnsiString(&UnicodeString);
LABEL_11:
        v25 = 0LL;
        goto LABEL_12;
      }
    }
  }
LABEL_20:
  if ( UnicodeString.Buffer )
  {
    ExFreePool(UnicodeString.Buffer);
    UnicodeString = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
LABEL_24:
  PiDevCfgFreeDeviceContext((__int64)v23);
  return (unsigned int)inited;
}
