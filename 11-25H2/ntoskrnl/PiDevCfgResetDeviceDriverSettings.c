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

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, PGUID Guid)
{
  char *v5; // rbx
  __int64 v8; // rdi
  int v9; // r15d
  GUID **v10; // rdi
  __int64 v11; // r12
  _QWORD *v12; // rcx
  bool v13; // zf
  const WCHAR *v14; // rdx
  int v15; // ebx
  HANDLE v16; // rcx
  GUID *v17; // r8
  int v18; // eax
  int v19; // ebx
  HANDLE Handle; // [rsp+60h] [rbp-51h] BYREF
  int v22; // [rsp+68h] [rbp-49h] BYREF
  __int64 v23; // [rsp+70h] [rbp-41h]
  int v24; // [rsp+78h] [rbp-39h] BYREF
  HANDLE v25; // [rsp+80h] [rbp-31h] BYREF
  UNICODE_STRING GuidString; // [rsp+88h] [rbp-29h] BYREF
  void *v27; // [rsp+98h] [rbp-19h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-9h] BYREF
  __int128 Source2; // [rsp+B8h] [rbp+7h] BYREF

  v5 = (char *)&off_140FD7E40;
  v28 = a4;
  v23 = a1;
  Handle = 0LL;
  v27 = 0LL;
  v8 = 23LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  v9 = 0;
  GuidString.Buffer = 0LL;
  Source2 = 0LL;
  v25 = 0LL;
  DestinationString = 0LL;
  v22 = 0;
  v24 = 0;
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
              (__int64)&v22,
              (__int64)&Source2,
              16,
              (__int64)&v24,
              0) < 0
    || v22 != 13 )
  {
    Source2 = 0LL;
  }
  v10 = &off_140B314F8;
  v11 = 4LL;
  do
  {
    v12 = *(v10 - 1);
    if ( v12 )
    {
      if ( a3 && *v12 == *a3 && v12[1] == a3[1] )
        goto LABEL_19;
      if ( Guid && *v12 == *(_QWORD *)&Guid->Data1 )
      {
        v13 = v12[1] == *(_QWORD *)Guid->Data4;
        goto LABEL_18;
      }
    }
    else
    {
      if ( !*v10 )
        goto LABEL_19;
      if ( !PnpIsNullGuid(&Source2) && *(_QWORD *)&(*v10)->Data1 == (_QWORD)Source2 )
      {
        v13 = *(_QWORD *)(*v10)->Data4 == *((_QWORD *)&Source2 + 1);
LABEL_18:
        if ( !v13 )
          goto LABEL_30;
LABEL_19:
        if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, 983103, *((_DWORD *)v10 + 2) != 18, (__int64)&Handle, 0LL) < 0 )
          goto LABEL_30;
        v14 = (const WCHAR *)v10[2];
        if ( v14 )
        {
          RtlInitUnicodeString(&DestinationString, v14);
          v15 = IopOpenRegistryKeyEx(&v27, Handle, &DestinationString, 983103LL);
          ZwClose(Handle);
          if ( v15 < 0 )
            goto LABEL_30;
          v16 = v27;
          Handle = v27;
        }
        else
        {
          v16 = Handle;
        }
        v17 = v10[3];
        if ( v17 )
        {
          PnpCtxRegDeleteValue(v16, v16, v17);
          goto LABEL_28;
        }
        if ( v10[2] )
        {
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v16, 0LL);
LABEL_28:
          v16 = Handle;
        }
        ZwClose(v16);
      }
    }
LABEL_30:
    v10 += 5;
    --v11;
  }
  while ( v11 );
  if ( !Guid )
  {
    v19 = v23;
    goto LABEL_40;
  }
  if ( a3 && *(_QWORD *)&Guid->Data1 == *a3 && *(_QWORD *)Guid->Data4 == a3[1] )
  {
    v19 = v23;
LABEL_43:
    if ( v28 )
      v9 = PiDevCfgResetDeviceKeys(v19, a2, v28);
  }
  else
  {
    v9 = RtlStringFromGUIDEx(Guid, &GuidString, 1u);
    if ( v9 >= 0 )
    {
      v18 = PnpOpenObjectRegKey(PiPnpRtlCtx, GuidString.Buffer, 2, 131097, 0, (__int64)&v25);
      v19 = v23;
      if ( v18 < 0 || (v9 = PiDevCfgResetDeviceKeys(v23, a2, (__int64)v25), v9 >= 0) )
      {
LABEL_40:
        if ( a3 )
          goto LABEL_43;
      }
    }
  }
  RtlFreeAnsiString(&GuidString);
  if ( v25 )
    ZwClose(v25);
  return (unsigned int)v9;
}
