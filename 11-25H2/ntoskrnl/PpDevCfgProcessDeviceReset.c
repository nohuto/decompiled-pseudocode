/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x14088ED30
 * Callers:
 *     PiConfigureDevice @ 0x140717DEC (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     _PnpCtxRegDeleteTree @ 0x14088F19C (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgInitDeviceContext @ 0x140890EB0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x140891014 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14094EE3C (PiDevCfgSetDeviceRegProp.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int inited; // ebx
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // r14d
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax
  int v14; // [rsp+48h] [rbp-79h] BYREF
  int v15; // [rsp+4Ch] [rbp-75h] BYREF
  int v16; // [rsp+50h] [rbp-71h] BYREF
  int v17; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v20[3]; // [rsp+70h] [rbp-51h] BYREF
  int v21; // [rsp+88h] [rbp-39h]
  __int64 v22; // [rsp+8Ch] [rbp-35h]
  int v23; // [rsp+94h] [rbp-2Dh]
  _BYTE v24[16]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-19h]
  __int128 v26; // [rsp+E8h] [rbp+27h] BYREF

  memset_0(v24, 0, 0x48uLL);
  Handle = 0LL;
  v26 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v17 = 1;
  UnicodeString.Buffer = 0LL;
  v14 = 0;
  v16 = 0;
  v15 = 0;
  if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 7) )
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
  inited = PiDevCfgInitDeviceContext(v3, 0LL, v24);
  if ( inited >= 0 )
  {
    v5 = v25;
    v6 = *(_QWORD *)(a1 + 48);
    v20[0] = &DEVPKEY_Device_ClassGuid;
    v20[2] = &v26;
    v20[1] = 13LL;
    v22 = 0LL;
    v23 = 0;
    v21 = 16;
    inited = PiDevCfgQueryObjectProperties(v4, v6, 1, v25, (__int64)v20, 1);
    if ( inited >= 0 )
    {
      if ( v22 < 0 )
        goto LABEL_11;
      LOBYTE(v7) = 1;
      inited = RtlStringFromGUIDEx(&v26, &UnicodeString, v7);
      if ( inited >= 0 )
      {
        if ( (int)PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 2, 131097, 0, (__int64)&Handle) >= 0 )
        {
LABEL_12:
          v8 = PiDevCfgMigrateDevice(
                 a1,
                 (unsigned int)v24,
                 (unsigned __int64)&UnicodeString & -(__int64)(UnicodeString.Buffer != 0LL),
                 0,
                 (__int64)&v16,
                 0LL);
          v9 = v16;
          if ( v8 < 0 )
            v9 = 0;
          PiDevCfgResetDeviceDriverSettings(
            a1,
            (__int64)v24,
            (_QWORD *)((unsigned __int64)&v26 & -(__int64)(UnicodeString.Buffer != 0LL)),
            (__int64)Handle,
            0LL);
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Devices");
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Filters");
          if ( v9 )
          {
            v10 = *(_QWORD *)(a1 + 48);
            v15 = 4;
            if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v10, v5, 11, (__int64)&v17, (__int64)&v14, (__int64)&v15, 0) < 0
              || v17 != 4
              || (v12 = v14, v15 != 4) )
            {
              v12 = 0;
            }
            v14 = v9 | v12;
            PiDevCfgSetDeviceRegProp(v11, (unsigned int)v24, 11, 4, (__int64)&v14, 4);
          }
          goto LABEL_20;
        }
        RtlFreeAnsiString(&UnicodeString);
LABEL_11:
        v26 = 0LL;
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
  PiDevCfgFreeDeviceContext(v24);
  return (unsigned int)inited;
}
