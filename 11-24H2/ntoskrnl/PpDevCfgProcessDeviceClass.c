/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x14072C4F4
 * Callers:
 *     PiConfigureDevice @ 0x140723EEC (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x140729EB8 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1408CD438 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140964604 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitDeviceContext @ 0x140997624 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x140997788 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409978B4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14099B580 (PiDevCfgSetDeviceRegProp.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A912F4 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140AAF1F8 (PiDevCfgGetDeviceClassConfigFlags.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  wchar_t *Buffer; // rsi
  int v3; // edi
  unsigned __int8 v4; // r14
  int inited; // ebx
  __int64 v6; // rcx
  int v7; // r12d
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  int v11; // eax
  char v12; // al
  int v13; // eax
  int v14; // edi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  _WORD v19[2]; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  const DEVPROPKEY *v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h]
  __int128 *v27; // [rsp+80h] [rbp-88h]
  int v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+8Ch] [rbp-7Ch]
  int v30; // [rsp+94h] [rbp-74h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-70h] BYREF
  __int128 v32; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v33[16]; // [rsp+B8h] [rbp-50h] BYREF
  int v34[16]; // [rsp+C8h] [rbp-40h]
  __int128 v35; // [rsp+108h] [rbp+0h] BYREF

  memset_0(v33, 0, 0x48uLL);
  LODWORD(v23) = 1;
  v22 = 0LL;
  v32 = 0LL;
  Handle = 0LL;
  Buffer = 0LL;
  v35 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v3 = 0;
  UnicodeString.Buffer = 0LL;
  v4 = 0;
  v19[0] = 0;
  v20 = 0;
  v21 = 0LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_38;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
  {
    inited = -1073741808;
    goto LABEL_38;
  }
  inited = PiDevCfgInitDeviceContext(v6, 0LL, v33);
  if ( inited < 0 )
    goto LABEL_38;
  v7 = v34[0];
  v8 = *(_QWORD *)(a1 + 48);
  v25 = &DEVPKEY_Device_ClassGuid;
  v27 = &v35;
  v26 = 13LL;
  v29 = 0LL;
  v30 = 0;
  v28 = 16;
  inited = PiDevCfgQueryObjectProperties(1, v8, 1, v34[0], (__int64)&v25, 1);
  if ( inited < 0 )
    goto LABEL_38;
  if ( v29 < 0 )
    goto LABEL_12;
  LOBYTE(v10) = 1;
  inited = RtlStringFromGUIDEx(&v35, &UnicodeString, v10);
  if ( inited < 0 )
    goto LABEL_38;
  Buffer = UnicodeString.Buffer;
  v11 = PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 2, 131097, 0, (__int64)&v22);
  inited = v11;
  if ( v11 != -1073741772 )
  {
    if ( v11 < 0 )
      goto LABEL_38;
LABEL_12:
    if ( v22 )
    {
      v26 = 17LL;
      v25 = (const DEVPROPKEY *)&DEVPKEY_DeviceClass_Configurable;
      v29 = 0LL;
      v27 = (__int128 *)v19;
      v30 = 0;
      v28 = 1;
      inited = PiDevCfgQueryObjectProperties(v9, (_DWORD)Buffer, 2, (_DWORD)v22, (__int64)&v25, 1);
      if ( inited < 0 )
        goto LABEL_38;
      if ( v29 >= 0 )
      {
        v12 = v19[0];
      }
      else
      {
        v12 = 0;
        LOBYTE(v19[0]) = 0;
      }
      if ( !v12
        && (int)PiDevCfgGetDeviceClassDriverConfigurable(
                  (int)Buffer,
                  (int)v22,
                  *(_QWORD *)(a1 + 48),
                  v7,
                  0LL,
                  0LL,
                  (_BYTE *)v19 + 1) >= 0
        && HIBYTE(v19[0]) )
      {
        LOBYTE(v19[0]) = -1;
      }
      *((_QWORD *)&v32 + 1) = L"Configuration";
      LODWORD(v32) = 1835034;
      v13 = IopOpenRegistryKeyEx(&Handle, v22, &v32, 131097LL);
      inited = v13;
      if ( v13 != -1073741772 )
      {
        if ( v13 < 0 )
          goto LABEL_38;
        inited = PiDevCfgConfigureDeviceKeys(a1, (unsigned int)v33, (_DWORD)Handle, -1, (__int64)&v20, (__int64)&v21);
        if ( inited < 0 )
          goto LABEL_38;
        v3 = v20;
        v4 = v21;
      }
    }
    goto LABEL_25;
  }
  v22 = 0LL;
LABEL_25:
  inited = PiDevCfgConfigureDeviceLocation(a1, v33, &v20, &v21);
  if ( inited < 0 )
    goto LABEL_38;
  v14 = v20 | v3;
  if ( (((unsigned __int8)v21 | v4) & 2) == 0 && LOBYTE(v19[0]) == 0xFF && Buffer && v22 )
  {
    inited = PiDevCfgGetDeviceClassConfigFlags(Buffer, v22, &v20);
    if ( inited < 0 )
      goto LABEL_38;
    v14 |= v20;
  }
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 48);
    HIDWORD(v21) = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v15, v7, 11, (__int64)&v23, (__int64)&v20, (__int64)&v21 + 4, 0) < 0
      || (_DWORD)v23 != 4
      || (v17 = v20, HIDWORD(v21) != 4) )
    {
      v17 = 0;
    }
    v20 = v14 | v17;
    PiDevCfgSetDeviceRegProp(v16, (unsigned int)v33, 11, 4, (__int64)&v20, 4);
  }
LABEL_38:
  RtlFreeAnsiString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v22 )
    ZwClose(v22);
  PiDevCfgFreeDeviceContext(v33);
  return (unsigned int)inited;
}
