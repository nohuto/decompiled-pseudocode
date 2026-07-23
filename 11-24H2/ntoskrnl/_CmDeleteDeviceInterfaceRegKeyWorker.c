/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140818C3C
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140818B04 (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegDeleteKey @ 0x1406F6960 (_PnpCtxRegDeleteKey.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1408C7D90 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1408C8EE4 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A8832C (_PnpCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v7; // rbx
  unsigned int v8; // r15d
  wchar_t *Pool2; // rsi
  unsigned int i; // edi
  int DeviceInterfaceRegKeyPath; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  NTSTATUS inited; // ebx
  unsigned __int16 Length; // bx
  __int64 v17; // rdi
  int v18; // r9d
  HANDLE v19; // r15
  NTSTATUS v20; // eax
  HANDLE v22; // [rsp+40h] [rbp-30h] BYREF
  void *v23; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  v7 = a2;
  Handle = 0LL;
  v8 = 4;
  Pool2 = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_30;
  for ( i = (a3 & 0x200) != 0 ? 600 : 480; ; i = 0 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, i, 0x52504E50u);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_31;
    }
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(i >> 1, v7, a3, a4);
    inited = DeviceInterfaceRegKeyPath;
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
    v7 = a2;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_31;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = (__int64)Pool2;
    inited = PnpCtxRegOpenCurrentUserKey(a1, v13, v14, &v22);
    if ( inited < 0 )
      goto LABEL_31;
    v19 = v22;
    goto LABEL_21;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited < 0 )
    goto LABEL_31;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= i
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_30:
    inited = -1073741811;
    goto LABEL_31;
  }
  v17 = (__int64)(Pool2 + 25);
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = Pool2 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
         &DestinationString,
         1u) )
  {
    v8 = 9;
    v17 = (__int64)(Pool2 + 47);
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v8 = 14;
    v17 = (__int64)(Pool2 + 43);
  }
  inited = PnpCtxGetCachedContextBaseKey(a1, v8, &v23);
  if ( inited >= 0 )
  {
    v19 = v23;
LABEL_21:
    if ( a3 == 49 || (inited = CmOpenDeviceInterfaceRegKey(a1, a2, 48, v18, 1, 0, (__int64)&Handle, 0LL), inited >= 0) )
    {
      v20 = a5 ? PnpCtxRegDeleteTree(a1, v19, v17) : PnpCtxRegDeleteKey(a1, (__int64)v19, v17);
      if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741444 )
        inited = v20;
    }
  }
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( v22 )
    ZwClose(v22);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
