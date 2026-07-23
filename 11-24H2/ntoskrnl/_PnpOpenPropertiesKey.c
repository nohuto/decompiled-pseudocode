/*
 * XREFs of _PnpOpenPropertiesKey @ 0x14097E830
 * Callers:
 *     _CmSetInstallerClassRegPropWorker @ 0x140819A14 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14081E990 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14081EB28 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140820468 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpDeletePropertyWorker @ 0x14097C4B0 (_PnpDeletePropertyWorker.c)
 *     _PnpSetPropertyWorker @ 0x14097C9BC (_PnpSetPropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14097F250 (_CmGetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14097F518 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409AE4D8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A937F0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegCreateKey @ 0x140A496BC (_SysCtxRegCreateKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A73678 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        ACCESS_MASK a4,
        char a5,
        __int64 a6,
        HANDLE *a7)
{
  __int64 v8; // rcx
  NTSTATUS v11; // edi
  wchar_t *Pool2; // rbx
  HANDLE v13; // r12
  const wchar_t *v14; // rax
  __int64 v15; // rcx
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  char v21; // si
  __int64 v22; // rax
  int Key; // eax
  void *v24; // rsi
  ACCESS_MASK v25; // esi
  HANDLE v26; // rdx
  int Tree; // eax
  void *PropertiesSecurityDescriptor; // rax
  __int64 v29; // rcx
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-120h]
  const wchar_t *v31; // [rsp+30h] [rbp-118h]
  ACCESS_MASK v32; // [rsp+50h] [rbp-F8h]
  PVOID P; // [rsp+60h] [rbp-E8h]
  wchar_t pszDest[64]; // [rsp+70h] [rbp-D8h] BYREF

  v8 = 0LL;
  v32 = a4;
  P = 0LL;
  *a7 = 0LL;
  v11 = 0;
  Pool2 = 0LL;
  v13 = 0LL;
  if ( a3 )
  {
    v14 = a3;
    v15 = 512LL;
    while ( *v14 )
    {
      ++v14;
      if ( !--v15 )
        return 3221225485LL;
    }
    if ( (unsigned __int64)(512 - v15) >= 0x30 )
    {
      v17 = 512 - v15 + 12;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v17, 0x52504E50u);
      if ( !Pool2 )
        return 3221225495LL;
    }
    else
    {
      Pool2 = pszDest;
      v17 = 59;
    }
    v31 = L"Properties";
    v11 = RtlStringCchPrintfExW(Pool2, v17, 0LL, 0LL, 0x800u, L"%s\\%s");
    if ( v11 < 0 )
      goto LABEL_15;
    if ( a1 && (v18 = *(_QWORD *)(a1 + 224)) != 0 )
      v19 = *(_QWORD *)(v18 + 8);
    else
      v19 = 0LL;
    v20 = RegRtlOpenKeyTransacted(a2, Pool2, 0, v32, a7, v19);
    if ( v20 == -1073741444 )
    {
      v11 = -1073741772;
      goto LABEL_15;
    }
    if ( v20 != -1073741772 || (v21 = a5) == 0 )
    {
      v11 = v20;
      goto LABEL_15;
    }
    a4 = v32;
    v8 = 0LL;
  }
  else
  {
    v21 = a5;
  }
  if ( a1 )
  {
    v22 = *(_QWORD *)(a1 + 224);
    if ( v22 )
      v8 = *(_QWORD *)(v22 + 8);
  }
  Key = RegRtlOpenKeyTransacted(a2, L"Properties", 0, a4, a7, v8);
  if ( Key != -1073741772 )
  {
    v25 = v32;
    goto LABEL_33;
  }
  if ( !v21 )
  {
LABEL_28:
    v11 = Key;
    goto LABEL_29;
  }
  PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
  P = PropertiesSecurityDescriptor;
  v24 = PropertiesSecurityDescriptor;
  if ( PropertiesSecurityDescriptor )
  {
    if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
    {
      v11 = -1073741595;
LABEL_43:
      ExFreePoolWithTag(v24, 0);
      goto LABEL_15;
    }
    if ( a1 )
      v29 = *(_QWORD *)(a1 + 224);
    else
      LODWORD(v29) = 0;
    pszFormat = (NTSTRSAFE_PCWSTR)v24;
    v25 = v32;
    Key = SysCtxRegCreateKey(
            v29,
            a2,
            (unsigned int)L"Properties",
            0,
            v32,
            (__int64)pszFormat,
            (_DWORD)v31,
            (__int64)a7,
            0LL);
LABEL_33:
    if ( Key == -1073741444 )
    {
      v11 = -1073741772;
    }
    else
    {
      if ( Key < 0 )
        goto LABEL_28;
      if ( a3 )
      {
        v13 = *a7;
        v26 = *a7;
        *a7 = 0LL;
        Tree = PnpCtxRegCreateTree(a1, v26, a3, 0, v25, 0LL, a7, 0LL);
        if ( Tree == -1073741444 )
        {
          v11 = -1073741772;
        }
        else if ( Tree < 0 )
        {
          v11 = Tree;
        }
      }
    }
LABEL_29:
    v24 = P;
    if ( !P )
      goto LABEL_15;
    goto LABEL_43;
  }
  v11 = -1073741595;
LABEL_15:
  if ( Pool2 && Pool2 != pszDest )
    ExFreePoolWithTag(Pool2, 0);
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v11;
}
