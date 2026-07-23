/*
 * XREFs of _CmGetDeviceCompoundFilters @ 0x1409AD640
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7B2F8 (_CmGetDeviceCompoundFiltersWorker.c)
 */

__int64 __fastcall CmGetDeviceCompoundFilters(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        GUID *a6,
        int a7,
        unsigned int *a8)
{
  unsigned int v8; // ebx
  const DEVPROPKEY *v13; // r14
  int DeviceCompoundFiltersWorker; // eax
  HANDLE v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int *v19; // r12
  unsigned int v20; // r13d
  int DeviceMappedPropertyFromRegProp; // eax
  __int64 v23; // rax
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  HANDLE v25; // [rsp+A8h] [rbp+20h] BYREF

  v8 = 0;
  Handle = 0LL;
  v25 = 0LL;
  if ( *(_DWORD *)(a4 + 16) != 22 )
    goto LABEL_2;
  v23 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
    v23 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  v13 = &DEVPKEY_Device_UpperFilters;
  if ( v23 )
LABEL_2:
    v13 = &DEVPKEY_Device_LowerFilters;
  if ( a3 )
  {
    v15 = a3;
    Handle = a3;
  }
  else
  {
    DeviceCompoundFiltersWorker = CmOpenDeviceRegKey(a1, a2, 16, 0, 33554433, 0, (__int64)&Handle, 0LL);
    if ( DeviceCompoundFiltersWorker < 0 )
    {
LABEL_22:
      v8 = DeviceCompoundFiltersWorker;
      goto LABEL_12;
    }
    v15 = Handle;
  }
  if ( a1 && (v16 = *(_QWORD *)(a1 + 224)) != 0 )
    v17 = *(_QWORD *)(v16 + 8);
  else
    v17 = 0LL;
  v18 = RegRtlOpenKeyTransacted((__int64)v15, L"Filters", 0, 0x2001Fu, &v25, v17);
  v19 = a8;
  v20 = a7;
  if ( v18 < 0
    || (DeviceCompoundFiltersWorker = CmGetDeviceCompoundFiltersWorker(
                                        a1,
                                        a4,
                                        (__int64)v13,
                                        (__int64)a5,
                                        (__int64)a6,
                                        a7,
                                        (__int64)a8),
        DeviceCompoundFiltersWorker == -1073741772)
    || DeviceCompoundFiltersWorker == -1073741444
    || DeviceCompoundFiltersWorker == -1073741275 )
  {
    DeviceMappedPropertyFromRegProp = CmGetDeviceMappedPropertyFromRegProp(
                                        a1,
                                        a2,
                                        (__int64)Handle,
                                        (__int64)v13,
                                        a5,
                                        a6,
                                        v20,
                                        v19,
                                        0);
    if ( DeviceMappedPropertyFromRegProp < 0 )
      v8 = DeviceMappedPropertyFromRegProp;
  }
  else if ( DeviceCompoundFiltersWorker < 0 )
  {
    goto LABEL_22;
  }
LABEL_12:
  if ( v25 )
    ZwClose(v25);
  if ( Handle && !a3 )
    ZwClose(Handle);
  return v8;
}
