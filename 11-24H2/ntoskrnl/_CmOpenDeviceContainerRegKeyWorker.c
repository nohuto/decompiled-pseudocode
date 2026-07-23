/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x1408B5110
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x1408B3C14 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1408B53BC (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  unsigned __int64 v12; // r14
  int v13; // r9d
  int DeviceContainerRegKeyPath; // eax
  NTSTATUS inited; // ebx
  unsigned __int16 Length; // bx
  wchar_t *v17; // r14
  BOOLEAN v18; // r15
  HANDLE v19; // rdx
  wchar_t *v20; // r14
  int Tree; // eax
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  pszDest = 0LL;
  LODWORD(v29) = 0;
  v27 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_24;
  LODWORD(v12) = 260;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v12, 0x52504E50u);
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_19;
    }
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v12 >> 1,
                                  a2,
                                  a3,
                                  v13,
                                  v24,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v29);
    inited = DeviceContainerRegKeyPath;
    if ( DeviceContainerRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v12 = 2LL * (unsigned int)v29;
    if ( v12 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_19;
    }
  }
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_19;
  if ( (a3 & 0x100) == 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_19;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v12
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v17 = pszDest + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v18 = RtlPrefixUnicodeString(
              &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
              &DestinationString,
              1u);
      inited = PnpCtxGetCachedContextBaseKey(a1, v18 != 0 ? 10 : 4, &v27);
      if ( inited < 0 )
        goto LABEL_19;
      v19 = v27;
      if ( !v18 )
        v17 = pszDest;
      v20 = v17 + 25;
      goto LABEL_16;
    }
LABEL_24:
    inited = -1073741811;
    goto LABEL_19;
  }
  v20 = pszDest;
  if ( a1 )
    v23 = *(_QWORD *)(a1 + 224);
  else
    v23 = 0LL;
  inited = SysCtxRegOpenCurrentUserKey(v23, 0LL, 0x2000000LL, &Handle);
  if ( inited < 0 )
    goto LABEL_19;
  v19 = Handle;
LABEL_16:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, v19, v20, 0LL, a5, 0LL, a7, a8);
  }
  else
  {
    Tree = PnpCtxRegOpenKey(a1, (_DWORD)v19, (_DWORD)v20, 0, a5, a7);
    if ( Tree >= 0 )
    {
      *a8 = 2;
      goto LABEL_19;
    }
  }
  if ( Tree == -1073741444 )
  {
    inited = -1073741595;
  }
  else if ( Tree < 0 )
  {
    inited = Tree;
  }
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
