/*
 * XREFs of ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x1806928D8
 * Callers:
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x180697BBC (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180065EE0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180065FB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4094 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C40B8 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z @ 0x1806914BC (-ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z.c)
 */

__int64 __fastcall CBackupLocationManager::IsTombstoneLink(char **this, const struct _ITEMIDLIST *a2)
{
  int v3; // ebx
  __int64 v4; // r11
  __int64 v5; // rdx
  HRESULT v6; // eax
  HRESULT v7; // edi
  LPCITEMIDLIST *p_pidl1; // [rsp+38h] [rbp-D0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h]
  LPCITEMIDLIST pidl1; // [rsp+50h] [rbp-B8h] BYREF
  IUnknown *punk[2]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR pszItem[264]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]

  v3 = StringCchCopyW((char *)pszItem, 260LL, *this);
  if ( v3 < 0 )
  {
    v5 = 4199LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = StringCchCatW(pszItem, v4, (char *)L"\\Tombstones");
  if ( v3 < 0 )
  {
    v5 = 4200LL;
    goto LABEL_3;
  }
  punk[0] = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)punk);
  v6 = SHCreateItemInKnownFolder(
         &FOLDERID_UserPinned,
         0x1000u,
         pszItem,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)punk);
  v3 = v6;
  if ( v6 >= 0 )
  {
    pidl1 = 0LL;
    ppidl = 0LL;
    v3 = 1;
    p_pidl1 = &pidl1;
    LOBYTE(v11) = 1;
    v7 = SHGetIDListFromObject(punk[0], &ppidl);
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pidl1);
    if ( v7 >= 0 )
    {
      if ( ILIsParent(pidl1, a2, 0) || (unsigned int)CPinnedList::ILIsParentByPath(pidl1, a2, 1u) )
        v3 = 0;
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pidl1,
        0LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x106E,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&pidl1,
        0LL);
      v3 = v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106B,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)punk);
  return (unsigned int)v3;
}
