/*
 * XREFs of PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0
 * Callers:
 *     PpDevCfgProcessDeviceReset @ 0x14088ED30 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiDevCfgResetDeviceKeys @ 0x14071F664 (PiDevCfgResetDeviceKeys.c)
 *     PnpIsNullGuid @ 0x140838480 (PnpIsNullGuid.c)
 *     _PnpCtxRegDeleteTree @ 0x14088F19C (_PnpCtxRegDeleteTree.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     _PnpCtxRegDeleteValue @ 0x140950624 (_PnpCtxRegDeleteValue.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     PiDevCfgSetObjectProperty @ 0x140A740D0 (PiDevCfgSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  char *v5; // rbx
  __int64 v8; // rdi
  int v9; // r15d
  __int64 v10; // r8
  GUID **v11; // rdi
  __int64 v12; // r12
  _QWORD *v13; // rcx
  bool v14; // zf
  const WCHAR *v15; // rdx
  int v16; // ebx
  HANDLE v17; // rcx
  GUID *v18; // r8
  int v19; // eax
  int v20; // ebx
  HANDLE Handle; // [rsp+60h] [rbp-51h] BYREF
  int v23; // [rsp+68h] [rbp-49h] BYREF
  __int64 v24; // [rsp+70h] [rbp-41h]
  int v25; // [rsp+78h] [rbp-39h] BYREF
  HANDLE v26; // [rsp+80h] [rbp-31h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-29h] BYREF
  void *v28; // [rsp+98h] [rbp-19h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-9h] BYREF
  __int128 Source2; // [rsp+B8h] [rbp+7h] BYREF

  v5 = (char *)&off_140FD7E40;
  v29 = a4;
  v24 = a1;
  Handle = 0LL;
  v28 = 0LL;
  v8 = 23LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0;
  UnicodeString.Buffer = 0LL;
  Source2 = 0LL;
  v26 = 0LL;
  DestinationString = 0LL;
  v23 = 0;
  v25 = 0;
  do
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(a2 + 8), 1, *(_QWORD *)(a2 + 16));
    v5 += 8;
    --v8;
  }
  while ( v8 );
  if ( (int)PnpGetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(a2 + 8),
              1,
              *(_QWORD *)(a2 + 16),
              0LL,
              (__int64)&DEVPKEY_Device_BusTypeGuid,
              (__int64)&v23,
              (__int64)&Source2,
              16,
              (__int64)&v25,
              0) < 0
    || v23 != 13 )
  {
    Source2 = 0LL;
  }
  v11 = &off_140B314F8;
  v12 = 4LL;
  do
  {
    v13 = *(v11 - 1);
    if ( v13 )
    {
      if ( a3 && *v13 == *a3 && v13[1] == a3[1] )
        goto LABEL_19;
      if ( a5 && *v13 == *a5 )
      {
        v14 = v13[1] == a5[1];
        goto LABEL_18;
      }
    }
    else
    {
      if ( !*v11 )
        goto LABEL_19;
      if ( !PnpIsNullGuid(&Source2) && *(_QWORD *)&(*v11)->Data1 == (_QWORD)Source2 )
      {
        v14 = *(_QWORD *)(*v11)->Data4 == *((_QWORD *)&Source2 + 1);
LABEL_18:
        if ( !v14 )
          goto LABEL_30;
LABEL_19:
        if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, 983103, *((_DWORD *)v11 + 2) != 18, (__int64)&Handle, 0LL) < 0 )
          goto LABEL_30;
        v15 = (const WCHAR *)v11[2];
        if ( v15 )
        {
          RtlInitUnicodeString(&DestinationString, v15);
          v16 = IopOpenRegistryKeyEx(&v28, Handle, &DestinationString, 983103LL);
          ZwClose(Handle);
          if ( v16 < 0 )
            goto LABEL_30;
          v17 = v28;
          Handle = v28;
        }
        else
        {
          v17 = Handle;
        }
        v18 = v11[3];
        if ( v18 )
        {
          PnpCtxRegDeleteValue(v17, v17, v18);
          goto LABEL_28;
        }
        if ( v11[2] )
        {
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v17, 0LL);
LABEL_28:
          v17 = Handle;
        }
        ZwClose(v17);
      }
    }
LABEL_30:
    v11 += 5;
    --v12;
  }
  while ( v12 );
  if ( !a5 )
  {
    v20 = v24;
    goto LABEL_40;
  }
  if ( a3 && *a5 == *a3 && a5[1] == a3[1] )
  {
    v20 = v24;
LABEL_43:
    if ( v29 )
      v9 = PiDevCfgResetDeviceKeys(v20, a2, v29);
  }
  else
  {
    LOBYTE(v10) = 1;
    v9 = RtlStringFromGUIDEx(a5, &UnicodeString, v10);
    if ( v9 >= 0 )
    {
      v19 = PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 2, 131097, 0, (__int64)&v26);
      v20 = v24;
      if ( v19 < 0 || (v9 = PiDevCfgResetDeviceKeys(v24, a2, (__int64)v26), v9 >= 0) )
      {
LABEL_40:
        if ( a3 )
          goto LABEL_43;
      }
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  if ( v26 )
    ZwClose(v26);
  return (unsigned int)v9;
}
