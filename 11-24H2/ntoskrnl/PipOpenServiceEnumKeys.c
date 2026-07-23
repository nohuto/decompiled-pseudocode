/*
 * XREFs of PipOpenServiceEnumKeys @ 0x1409B5D44
 * Callers:
 *     PipGetDriverKsrGuid @ 0x140719810 (PipGetDriverKsrGuid.c)
 *     IopGetOriginalServiceName @ 0x14071B258 (IopGetOriginalServiceName.c)
 *     PipApplyFunctionToServiceInstances @ 0x140720650 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140720860 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407281D8 (PiDevCfgMakeServiceBootStart.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140982F18 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiGetServiceNameInfo @ 0x1409B595C (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x1409B5A60 (IoOpenDriverRegistryKey.c)
 *     PiProcessDriverInstance @ 0x1409B69D0 (PiProcessDriverInstance.c)
 *     PiDevCfgVerifyService @ 0x1409C8528 (PiDevCfgVerifyService.c)
 *     PipHardwareConfigActivateService @ 0x140A7F050 (PipHardwareConfigActivateService.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140A84EFC (PipDmgGetDriverDmarCompatLevel.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     PpDevCfgInit @ 0x140C26FC4 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 */

int __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  __int64 v6; // rcx
  _QWORD *v10; // rdx
  int result; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebx
  _QWORD *v14; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  void *v16; // [rsp+40h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-11h] BYREF
  __int128 v18; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  Handle = 0LL;
  v6 = *(_QWORD *)&PiPnpRtlCtx;
  v16 = 0LL;
  v18 = 0LL;
  v10 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 144LL);
  if ( !v10 )
  {
    v10 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
    *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 144LL) = v10;
  }
  result = PnpCtxGetCachedNodeBaseKey(v6, v10, 6, &v16);
  if ( result >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.RootDirectory = v16;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( !v14 )
          v14 = (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL);
        v14 = (_QWORD *)*v14;
        if ( v14 == (_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 8LL) || !v14 )
          return -1073741772;
        result = PnpCtxGetCachedNodeBaseKey(*(__int64 *)&PiPnpRtlCtx, v14, 6, &v16);
        if ( result < 0 )
          break;
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        KeyHandle = 0LL;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.RootDirectory = v16;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a1;
        result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
        if ( result != -1073741772 )
          goto LABEL_5;
      }
      if ( result == -2147483622 )
        return -1073741772;
    }
    else
    {
LABEL_5:
      if ( result >= 0 )
      {
        if ( a4 || a5 )
        {
          LODWORD(v18) = 655368;
          *((_QWORD *)&v18 + 1) = L"Enum";
          if ( a5 )
          {
            v12 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v18, a2, 1, 0LL);
          }
          else
          {
            memset(&ObjectAttributes.Attributes + 1, 0, 20);
            ObjectAttributes.RootDirectory = KeyHandle;
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
            ObjectAttributes.Attributes = 576;
            v12 = ZwOpenKey(&Handle, a2, &ObjectAttributes);
          }
          v13 = v12;
          if ( v12 < 0 )
          {
            ZwClose(KeyHandle);
            return v13;
          }
          if ( a4 )
            *a4 = Handle;
          else
            ZwClose(Handle);
        }
        if ( a3 )
          *a3 = KeyHandle;
        else
          ZwClose(KeyHandle);
        return 0;
      }
    }
  }
  return result;
}
