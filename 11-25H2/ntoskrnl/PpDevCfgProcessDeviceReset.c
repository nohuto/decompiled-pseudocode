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
  NTSTATUS inited; // ebx
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  int v13; // [rsp+48h] [rbp-79h] BYREF
  int v14; // [rsp+4Ch] [rbp-75h] BYREF
  int v15; // [rsp+50h] [rbp-71h] BYREF
  int v16; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v19[3]; // [rsp+70h] [rbp-51h] BYREF
  int v20; // [rsp+88h] [rbp-39h]
  __int64 v21; // [rsp+8Ch] [rbp-35h]
  int v22; // [rsp+94h] [rbp-2Dh]
  int v23[4]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-19h]
  GUID Guid; // [rsp+E8h] [rbp+27h] BYREF

  memset_0(v23, 0, 0x48uLL);
  Handle = 0LL;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  v16 = 1;
  GuidString.Buffer = 0LL;
  v13 = 0;
  v15 = 0;
  v14 = 0;
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
  inited = PiDevCfgInitDeviceContext(v3, 0LL, v23);
  if ( inited >= 0 )
  {
    v5 = v24;
    v6 = *(_QWORD *)(a1 + 48);
    v19[0] = &DEVPKEY_Device_ClassGuid;
    v19[2] = &Guid;
    v19[1] = 13LL;
    v21 = 0LL;
    v22 = 0;
    v20 = 16;
    inited = PiDevCfgQueryObjectProperties(v4, v6, 1, v24, (__int64)v19, 1);
    if ( inited >= 0 )
    {
      if ( v21 < 0 )
        goto LABEL_11;
      inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
      if ( inited >= 0 )
      {
        if ( (int)PnpOpenObjectRegKey(PiPnpRtlCtx, GuidString.Buffer, 2, 131097, 0, (__int64)&Handle) >= 0 )
        {
LABEL_12:
          v7 = PiDevCfgMigrateDevice(
                 a1,
                 (unsigned int)v23,
                 (unsigned __int64)&GuidString & -(__int64)(GuidString.Buffer != 0LL),
                 0,
                 (__int64)&v15,
                 0LL);
          v8 = v15;
          if ( v7 < 0 )
            v8 = 0;
          PiDevCfgResetDeviceDriverSettings(
            a1,
            (__int64)v23,
            (_QWORD *)((unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL)),
            (__int64)Handle,
            0LL);
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Devices");
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v5, L"Filters");
          if ( v8 )
          {
            v9 = *(_QWORD *)(a1 + 48);
            v14 = 4;
            if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v9, v5, 11, (__int64)&v16, (__int64)&v13, (__int64)&v14, 0) < 0
              || v16 != 4
              || (v11 = v13, v14 != 4) )
            {
              v11 = 0;
            }
            v13 = v8 | v11;
            PiDevCfgSetDeviceRegProp(v10, (unsigned int)v23, 11, 4, (__int64)&v13, 4);
          }
          goto LABEL_20;
        }
        RtlFreeAnsiString(&GuidString);
LABEL_11:
        Guid = 0LL;
        goto LABEL_12;
      }
    }
  }
LABEL_20:
  if ( GuidString.Buffer )
  {
    ExFreePool(GuidString.Buffer);
    GuidString = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
LABEL_24:
  PiDevCfgFreeDeviceContext(v23);
  return (unsigned int)inited;
}
