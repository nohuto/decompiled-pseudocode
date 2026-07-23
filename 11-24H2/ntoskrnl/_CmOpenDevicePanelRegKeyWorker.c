/*
 * XREFs of _CmOpenDevicePanelRegKeyWorker @ 0x140A7C058
 * Callers:
 *     _CmOpenDevicePanelRegKey @ 0x14081DFE0 (_CmOpenDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x14081DC9C (_CmGetDevicePanelRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A8832C (_PnpCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKeyWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        ULONG *a8)
{
  wchar_t *pszDest; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // r9
  int inited; // ebx
  unsigned __int16 Length; // bx
  BOOLEAN v17; // r12
  HANDLE v18; // rdx
  const wchar_t *v19; // rsi
  NTSTATUS DevicePanelRegKeyPath; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int Tree; // eax
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
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_23;
  LODWORD(v12) = 317;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)v12, 0x52504E50u);
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_6;
    }
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath((unsigned int)v12 >> 1, a2, a3, v13, v24, pszDest, cchDest, &v29);
    inited = DevicePanelRegKeyPath;
    if ( DevicePanelRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v12 = 2LL * (unsigned int)v29;
    if ( v12 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_6;
    }
  }
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_6;
  if ( (a3 & 0x100) == 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_6;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v12
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v17 = RtlPrefixUnicodeString(
              &`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix,
              &DestinationString,
              1u);
      inited = PnpCtxGetCachedContextBaseKey(a1, v17 != 0 ? 11 : 4, &v27);
      if ( inited < 0 )
        goto LABEL_6;
      v18 = v27;
      v19 = pszDest + 46;
      if ( !v17 )
        v19 = pszDest + 25;
      goto LABEL_27;
    }
LABEL_23:
    inited = -1073741811;
    goto LABEL_6;
  }
  v19 = pszDest;
  inited = PnpCtxRegOpenCurrentUserKey(a1, v21, v22, &Handle);
  if ( inited < 0 )
    goto LABEL_6;
  v18 = Handle;
LABEL_27:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, v18, v19, 0, a5, 0LL, a7, a8);
  }
  else
  {
    Tree = PnpCtxRegOpenKey(a1, (__int64)v18, (__int64)v19, 0, a5, (__int64)a7);
    if ( Tree >= 0 )
    {
      *a8 = 2;
      goto LABEL_6;
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
LABEL_6:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
