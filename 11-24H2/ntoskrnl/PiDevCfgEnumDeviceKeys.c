/*
 * XREFs of PiDevCfgEnumDeviceKeys @ 0x14094C14C
 * Callers:
 *     PiDevCfgResetDeviceKeys @ 0x1407295D4 (PiDevCfgResetDeviceKeys.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmIsStateSeparationEnabled @ 0x1404941EC (CmIsStateSeparationEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpCtxOpenContextNodeBaseKey @ 0x140817D34 (_PnpCtxOpenContextNodeBaseKey.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14094C0C4 (_PnpCtxOpenContextBaseKey.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PiDevCfgEnumDeviceKeys(__int64 a1, __int64 a2, void *a3, int a4, char a5, __int64 a6, __int64 a7)
{
  unsigned int v10; // edi
  unsigned int v11; // esi
  wchar_t **v12; // rbx
  int DeviceRegProp; // eax
  int v14; // r8d
  int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  WCHAR *v20; // rdx
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  void *v28; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  void *v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+C0h] [rbp-40h] BYREF

  v32 = a6;
  v31 = a7;
  v30 = a3;
  v10 = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  v11 = 0;
  Handle = 0LL;
  v28 = 0LL;
  v26 = 0;
  v27 = 0;
  while ( v11 < 7 )
  {
    v12 = &(&off_140B3F810)[4 * v11];
    if ( (a4 & (_DWORD)v12[1]) == 0 )
      goto LABEL_14;
    RtlInitUnicodeString(&DestinationString, *v12);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v30;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp == -1073741772 )
      goto LABEL_14;
    if ( DeviceRegProp < 0 )
      goto LABEL_15;
    v14 = *((_DWORD *)v12 + 4);
    if ( v14 )
    {
      DeviceRegProp = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(_QWORD *)(a2 + 8),
                        v14,
                        0,
                        983103,
                        a5,
                        (__int64)&Handle,
                        0LL);
      goto LABEL_8;
    }
    if ( !CmIsStateSeparationEnabled() || (_DWORD)v17 == 4 )
    {
      DeviceRegProp = PnpCtxOpenContextBaseKey(v18, v17, v19, 0xF003Fu, (__int64)&Handle);
    }
    else
    {
      if ( (_DWORD)v17 == 6 )
        goto LABEL_27;
      DeviceRegProp = PnpCtxOpenContextNodeBaseKey(v18, v17, v19, v17, v22, v23, (__int64)&Handle);
    }
    if ( DeviceRegProp < 0 )
      goto LABEL_8;
    if ( *((_DWORD *)v12 + 3) == 7 )
    {
      v21 = *(_QWORD *)(a2 + 8);
      v26 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v21,
                        0LL,
                        9u,
                        (__int64)&v27,
                        (__int64)SourceString,
                        (__int64)&v26,
                        0);
      if ( DeviceRegProp >= 0 )
      {
        if ( v27 != 1 )
        {
LABEL_27:
          ZwClose(KeyHandle);
          KeyHandle = 0LL;
          goto LABEL_14;
        }
        SourceString[38] = 0;
        v20 = SourceString;
LABEL_34:
        RtlInitUnicodeString(&DestinationString, v20);
        DeviceRegProp = IopOpenRegistryKeyEx(&v28, Handle, &DestinationString, 983103LL);
        if ( DeviceRegProp >= 0 )
        {
          ZwClose(Handle);
          v15 = (int)v28;
          Handle = v28;
          goto LABEL_11;
        }
      }
LABEL_8:
      if ( DeviceRegProp == -1073741772 )
        goto LABEL_27;
      if ( DeviceRegProp < 0 )
        goto LABEL_15;
      goto LABEL_10;
    }
    v20 = v12[3];
    if ( v20 )
      goto LABEL_34;
LABEL_10:
    v15 = (int)Handle;
LABEL_11:
    v23 = v15;
    v22 = (int)KeyHandle;
    DeviceRegProp = guard_dispatch_icall_no_overrides(a1, a2);
    if ( DeviceRegProp == -1073741248 )
      break;
    if ( DeviceRegProp < 0 )
    {
LABEL_15:
      v10 = DeviceRegProp;
      break;
    }
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
LABEL_14:
    ++v11;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return v10;
}
