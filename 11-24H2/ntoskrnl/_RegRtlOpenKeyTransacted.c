/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x1408C5590
 * Callers:
 *     _SysCtxOpenControlSet @ 0x140820920 (_SysCtxOpenControlSet.c)
 *     _SysCtxOpenMachine @ 0x140820B44 (_SysCtxOpenMachine.c)
 *     _RegRtlCopyTreeInternal @ 0x1408212E0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlOpenPredefinedKey @ 0x140821834 (_RegRtlOpenPredefinedKey.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B42D0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1408B99E8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _SysCtxRegOpenKey @ 0x1408C3580 (_SysCtxRegOpenKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C4460 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1408C679C (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1408C88C8 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 *     _CmIsDeviceInContainer @ 0x14097AEDC (_CmIsDeviceInContainer.c)
 *     PiCreateDriverSwDevices @ 0x14097B774 (PiCreateDriverSwDevices.c)
 *     _RegRtlDeleteTreeInternal @ 0x14097C270 (_RegRtlDeleteTreeInternal.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409AD640 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x1409AE104 (_CmGetInstallerClassCompoundFilters.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1409D1CC4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409F8880 (DrvDbGetObjectSubKeyCallback.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A640A4 (PiDevCfgClearDeviceMigrationNode.c)
 *     _RegRtlDeletePathInternal @ 0x140A64448 (_RegRtlDeletePathInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A6464C (_RegRtlDeleteKeyTransacted.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140A9D60C (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x1406A9910 (ZwOpenKeyEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     NtOpenKeyTransactedEx_Stub @ 0x1406F7554 (NtOpenKeyTransactedEx_Stub.c)
 *     _RegRtlOpenPredefinedKey @ 0x140821834 (_RegRtlOpenPredefinedKey.c)
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
  ULONG v11; // eax
  PHANDLE v13; // rsi
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
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
      ObjectAttributes.RootDirectory = v8;
      v11 = 832;
      if ( (a3 & 8) == 0 )
        v11 = 576;
      ObjectAttributes.Attributes = v11;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( a6 )
      {
        v13 = KeyHandle;
        inited = NtOpenKeyTransactedEx_Stub((__int64)KeyHandle, a4);
        if ( inited == -1073741702 )
        {
          if ( byte_140EEFDF8 )
          {
            v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_140EEFE00;
          }
          else
          {
            v14 = ZwOpenKeyTransacted;
            byte_140EEFDF8 = 1;
            qword_140EEFE00 = (__int64)ZwOpenKeyTransacted;
          }
          if ( !v14 || (inited = guard_dispatch_icall_no_overrides(v13, a4), inited == -1073741702) )
            inited = -1072103420;
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
