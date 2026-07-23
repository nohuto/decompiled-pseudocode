/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x140819F7C
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x140819E3C (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegDeleteKey @ 0x1406F6960 (_PnpCtxRegDeleteKey.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1408B53BC (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A8832C (_PnpCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  wchar_t *pszDest; // rdi
  unsigned __int64 v9; // r14
  int v10; // r9d
  int DeviceContainerRegKeyPath; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  NTSTATUS inited; // ebx
  unsigned __int16 Length; // bx
  wchar_t *v16; // r14
  BOOLEAN v17; // r15
  HANDLE v18; // rdx
  __int64 v19; // r14
  int v20; // eax
  int v22; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v25; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  pszDest = 0LL;
  LODWORD(v27) = 0;
  v25 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_27;
  LODWORD(v9) = 260;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v9, 0x52504E50u);
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_28;
    }
    LODWORD(cchDest) = (unsigned int)v9 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v9 >> 1,
                                  a2,
                                  a3,
                                  v10,
                                  v22,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v27);
    inited = DeviceContainerRegKeyPath;
    if ( DeviceContainerRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v9 = 2LL * (unsigned int)v27;
    if ( v9 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_28;
    }
  }
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_28;
  if ( (a3 & 0x100) != 0 )
  {
    v19 = (__int64)pszDest;
    inited = PnpCtxRegOpenCurrentUserKey(a1, v12, v13, &Handle);
    if ( inited < 0 )
      goto LABEL_28;
    v18 = Handle;
    goto LABEL_20;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( inited < 0 )
    goto LABEL_28;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v9
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_27:
    inited = -1073741811;
    goto LABEL_28;
  }
  v16 = pszDest + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  v17 = RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
          &DestinationString,
          1u);
  inited = PnpCtxGetCachedContextBaseKey(a1, v17 != 0 ? 10 : 4, &v25);
  if ( inited < 0 )
    goto LABEL_28;
  v18 = v25;
  if ( !v17 )
    v16 = pszDest;
  v19 = (__int64)(v16 + 25);
LABEL_20:
  if ( a5 )
    v20 = PnpCtxRegDeleteTree(a1, v18, v19);
  else
    v20 = PnpCtxRegDeleteKey(a1, (__int64)v18, v19);
  if ( v20 != -1073741444 && v20 < 0 )
    inited = v20;
LABEL_28:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
