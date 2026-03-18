/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x1408C7B60
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408201E0 (_SysCtxOpenControlSet.c)
 *     _SysCtxOpenMachine @ 0x140820404 (_SysCtxOpenMachine.c)
 *     _RegRtlCopyTreeInternal @ 0x140820BA0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408210F4 (_RegRtlOpenPredefinedKey.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140831268 (PiDevCfgQueryDeviceMigrationNode.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B6960 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1408BC098 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _SysCtxRegOpenKey @ 0x1408C5B50 (_SysCtxRegOpenKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C6A30 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpCtxRegOpenKey @ 0x1408C7AFC (_PnpCtxRegOpenKey.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C7EF0 (_PnpGetGenericStoreProperty.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C8D6C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408CAE98 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CD660 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PiDqOpenUserObjectRegKey @ 0x14090A064 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbLoadNode @ 0x140925F40 (PiDrvDbLoadNode.c)
 *     _CmIsDeviceInContainer @ 0x14098FEA4 (_CmIsDeviceInContainer.c)
 *     PiCreateDriverSwDevices @ 0x140990734 (PiCreateDriverSwDevices.c)
 *     _RegRtlDeleteTreeInternal @ 0x140991230 (_RegRtlDeleteTreeInternal.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409920EC (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpOpenPropertiesKey @ 0x1409937F0 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409B62B0 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409B6D74 (_CmGetInstallerClassCompoundFilters.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409FF930 (DrvDbGetObjectSubKeyCallback.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A6A994 (PiDevCfgClearDeviceMigrationNode.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AD38 (_RegRtlDeletePathInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A6AF3C (_RegRtlDeleteKeyTransacted.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140AA227C (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x1406A8970 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x1406F9914 (NtOpenKeyTransactedEx_Stub.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408210F4 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        __int64 a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        PHANDLE KeyHandle,
        __int64 a6)
{
  HANDLE v8; // rdi
  int inited; // ebx
  __int64 v11; // r9
  __int64 v12; // rdi
  ULONG v13; // eax
  PHANDLE v15; // rsi
  NTSTATUS (__stdcall *v16)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v8 = (HANDLE)a1;
  DestinationString = 0LL;
  if ( (unsigned __int64)(a1 - 0x80000000LL) > 7
    || (inited = RegRtlOpenPredefinedKey(a1, (__int64)&Handle), inited >= 0) )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      if ( Handle )
        v8 = Handle;
      v11 = a3;
      ObjectAttributes.RootDirectory = v8;
      v12 = a6;
      v13 = 832;
      if ( (a3 & 8) == 0 )
        v13 = 576;
      ObjectAttributes.Attributes = v13;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( a6 )
      {
        v15 = KeyHandle;
        inited = NtOpenKeyTransactedEx_Stub((__int64)KeyHandle, a4, (__int64)&ObjectAttributes, v11);
        if ( inited == -1073741702 )
        {
          if ( byte_140EEFBB0 )
          {
            v16 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_140EEFBB8;
          }
          else
          {
            v16 = ZwOpenKeyTransacted;
            byte_140EEFBB0 = 1;
            qword_140EEFBB8 = (__int64)ZwOpenKeyTransacted;
          }
          if ( !v16
            || (inited = guard_dispatch_icall_no_overrides(v15, a4, &ObjectAttributes, v12), inited == -1073741702) )
          {
            inited = -1072103420;
          }
        }
      }
      else
      {
        inited = ZwOpenKeyEx(KeyHandle, a4, &ObjectAttributes, a3);
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
