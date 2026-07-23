/*
 * XREFs of _CmGetDeviceParent @ 0x140928AD8
 * Callers:
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408B9CCC (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BC0A0 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceSiblings @ 0x1409AB1F4 (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB0634 (_CmGetParentDeviceContainerId.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmIsRootDevice @ 0x140928D54 (_CmIsRootDevice.c)
 */

__int64 __fastcall CmGetDeviceParent(_QWORD *a1, WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  size_t v4; // rdi
  unsigned int inited; // ecx
  int v10; // eax
  unsigned int v11; // eax
  size_t v12; // rdx
  wchar_t *v13; // rcx
  wchar_t v14; // ax
  wchar_t *v15; // rax
  unsigned int v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  wchar_t v20[200]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *a4;
  v17 = 0;
  v18 = 0;
  *a4 = 0;
  DestinationString = 0LL;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return (unsigned int)-1073741810;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  if ( !a1[34] )
    return (unsigned int)-1073741822;
  v10 = guard_dispatch_icall_no_overrides(a1, &DestinationString);
  if ( v10 == -2147483643 )
    return (unsigned int)-1073741789;
  if ( v10 == -1073741810 )
  {
    if ( (int)PnpGetObjectProperty(
                a1,
                a2,
                1u,
                0LL,
                0LL,
                (__int64)DEVPKEY_Device_LastKnownParent,
                &v18,
                v20,
                0x190u,
                (__int64)&v17,
                0) < 0 )
    {
      *a4 = 13;
      if ( (unsigned int)v4 >= 0xD )
        return (unsigned int)RtlStringCchCopyExW(a3, v4, L"HTREE\\ROOT\\0", 0LL, 0LL, 0x900u);
      return (unsigned int)-1073741789;
    }
    v11 = v17 >> 1;
  }
  else
  {
    inited = v10;
    if ( v10 < 0 )
      return inited;
    v11 = v17;
  }
  *a4 = v11;
  if ( (unsigned int)v4 < v11 )
    return (unsigned int)-1073741789;
  v12 = v4;
  if ( !a3 && (_DWORD)v4 || v4 > 0x7FFFFFFF )
  {
    inited = -1073741811;
    goto LABEL_26;
  }
  inited = 0;
  if ( (_DWORD)v4 )
  {
    v13 = a3;
    do
    {
      if ( !(2147483646 - v4 + v12) )
        break;
      v14 = *(wchar_t *)((char *)v13 + (char *)v20 - (char *)a3);
      if ( !v14 )
        break;
      *v13++ = v14;
      --v12;
    }
    while ( v12 );
    v15 = v13 - 1;
    if ( v12 )
      v15 = v13;
    *v15 = 0;
    inited = v12 == 0 ? 0x80000005 : 0;
    if ( v12 )
      return inited;
LABEL_26:
    *a3 = 0;
    return inited;
  }
  if ( v20[0] )
    return a3 != 0LL ? -2147483643 : -1073741811;
  return inited;
}
