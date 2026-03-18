/*
 * XREFs of PiDevCfgResetDeviceDriverSettings @ 0x140A847DC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A84170 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     PiDevCfgResetDeviceKeys @ 0x14072B5E4 (PiDevCfgResetDeviceKeys.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B84A0 (PiPnpRtlSetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x1408CD438 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x1408D3190 (PnpIsNullGuid.c)
 *     _PnpCtxRegDeleteValue @ 0x14098FA7C (_PnpCtxRegDeleteValue.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x140A845DC (_PnpCtxRegDeleteTree.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  __int64 v8; // rdi
  PVOID v9; // r12
  int v10; // r15d
  __int64 v11; // rax
  GUID **v12; // rdi
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  const WCHAR *v18; // rdx
  NTSTATUS v19; // ebx
  HANDLE v20; // rcx
  const WCHAR *v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // ebx
  __int64 v27; // [rsp+60h] [rbp-61h]
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  int v29; // [rsp+70h] [rbp-51h] BYREF
  __int64 v30; // [rsp+78h] [rbp-49h]
  int v31; // [rsp+80h] [rbp-41h] BYREF
  HANDLE v32; // [rsp+88h] [rbp-39h] BYREF
  __int64 v33; // [rsp+90h] [rbp-31h] BYREF
  PVOID P; // [rsp+98h] [rbp-29h]
  HANDLE v35; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-11h] BYREF
  __int128 Source2; // [rsp+C0h] [rbp-1h] BYREF

  v5 = (__int64 *)&off_140FD7E10;
  v36 = a4;
  v30 = a1;
  Handle = 0LL;
  v35 = 0LL;
  v8 = 23LL;
  v33 = 0LL;
  Source2 = 0LL;
  v9 = 0LL;
  P = 0LL;
  v32 = 0LL;
  DestinationString = 0LL;
  v29 = 0;
  v31 = 0;
  do
  {
    PiPnpRtlSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(const WCHAR **)(a2 + 8),
      1,
      *(_QWORD *)(a2 + 16),
      0LL,
      *v5++,
      0,
      0LL,
      0,
      (*(_DWORD *)a2 & 1) << 17);
    --v8;
  }
  while ( v8 );
  v10 = 0;
  if ( (int)PnpGetObjectProperty(
              *(_QWORD **)&PiPnpRtlCtx,
              *(WCHAR **)(a2 + 8),
              1u,
              *(void **)(a2 + 16),
              0LL,
              (__int64)&DEVPKEY_Device_BusTypeGuid,
              &v29,
              (const wchar_t *)&Source2,
              0x10u,
              (__int64)&v31,
              0) < 0
    || v29 != 13 )
  {
    Source2 = 0LL;
  }
  v11 = 4LL;
  v12 = &off_140B407C8;
  v27 = 4LL;
  do
  {
    v13 = *(v12 - 1);
    if ( v13 )
    {
      if ( !a3 )
        goto LABEL_13;
      v14 = *v13 - *a3;
      if ( *v13 == *a3 )
        v14 = v13[1] - a3[1];
      if ( v14 )
      {
        v11 = v27;
LABEL_13:
        if ( !a5 )
          goto LABEL_35;
        v15 = *v13 - *(_QWORD *)a5;
        if ( *v13 == *(_QWORD *)a5 )
          v15 = v13[1] - *(_QWORD *)(a5 + 8);
        v16 = v15 == 0;
LABEL_22:
        if ( !v16 )
          goto LABEL_34;
      }
    }
    else if ( *v12 )
    {
      if ( PnpIsNullGuid(&Source2) )
        goto LABEL_34;
      v17 = *(_QWORD *)&(*v12)->Data1 - Source2;
      if ( !v17 )
        v17 = *(_QWORD *)(*v12)->Data4 - *((_QWORD *)&Source2 + 1);
      v16 = v17 == 0;
      goto LABEL_22;
    }
    if ( (int)CmOpenDeviceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a2 + 8),
                *((_DWORD *)v12 + 2),
                0,
                983103,
                *((_DWORD *)v12 + 2) != 18,
                (__int64)&Handle,
                0LL) >= 0 )
    {
      v18 = (const WCHAR *)v12[2];
      if ( !v18 )
      {
        v20 = Handle;
LABEL_28:
        v21 = (const WCHAR *)v12[3];
        if ( v21 )
        {
          PnpCtxRegDeleteValue((__int64)v20, v20, v21);
        }
        else
        {
          if ( !v12[2] )
          {
LABEL_33:
            ZwClose(v20);
            goto LABEL_34;
          }
          PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v20, 0LL);
        }
        v20 = Handle;
        goto LABEL_33;
      }
      RtlInitUnicodeString(&DestinationString, v18);
      v19 = IopOpenRegistryKeyEx(&v35, Handle, &DestinationString, 0xF003Fu);
      ZwClose(Handle);
      if ( v19 >= 0 )
      {
        v20 = v35;
        Handle = v35;
        goto LABEL_28;
      }
    }
LABEL_34:
    v11 = v27;
LABEL_35:
    v12 += 5;
    v27 = --v11;
  }
  while ( v11 );
  if ( !a5 )
  {
    v25 = v30;
    goto LABEL_46;
  }
  if ( !a3 )
    goto LABEL_41;
  v22 = *(_QWORD *)a5 - *a3;
  if ( *(_QWORD *)a5 == *a3 )
    v22 = *(_QWORD *)(a5 + 8) - a3[1];
  if ( !v22 )
  {
    v25 = v30;
  }
  else
  {
LABEL_41:
    v23 = RtlStringFromGUIDEx((unsigned int *)a5, (__int64)&v33, 1);
    v9 = P;
    v10 = v23;
    if ( v23 < 0 )
      goto LABEL_51;
    v24 = PnpOpenObjectRegKey(*(_QWORD **)&PiPnpRtlCtx, (WCHAR *)P, 2, 131097, 0, (__int64)&v32);
    v25 = v30;
    if ( v24 >= 0 )
    {
      v10 = PiDevCfgResetDeviceKeys(v30, a2, (__int64)v32);
      if ( v10 < 0 )
        goto LABEL_51;
    }
LABEL_46:
    if ( !a3 )
      goto LABEL_51;
  }
  if ( v36 )
    v10 = PiDevCfgResetDeviceKeys(v25, a2, v36);
LABEL_51:
  if ( v9 )
    ExFreePool(v9);
  if ( v32 )
    ZwClose(v32);
  return (unsigned int)v10;
}
