/*
 * XREFs of ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18069732C
 * Callers:
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x180694180 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4094 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C40B8 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x18068A6FC (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x18068B434 (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068CFE4 (-CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x18069136C (-ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinList::_CreateTombstone(
        CPinList *this,
        struct CPinnedList *a2,
        const unsigned __int16 *a3,
        const struct _ITEMIDLIST **a4)
{
  char v7; // si
  unsigned int v8; // edi
  HRESULT v9; // eax
  __int64 v10; // rdx
  char v11; // di
  LPITEMIDLIST v12; // rax
  void *v13; // rdx
  struct _ITEMIDLIST *v14; // rax
  void **v16; // [rsp+28h] [rbp-D8h] BYREF
  struct _ITEMIDLIST *v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+38h] [rbp-C8h]
  struct _ITEMIDLIST *Src; // [rsp+40h] [rbp-C0h] BYREF
  void *v20; // [rsp+48h] [rbp-B8h] BYREF
  LPWSTR *ppwsz; // [rsp+50h] [rbp-B0h] BYREF
  struct _ITEMIDLIST **p_Src; // [rsp+58h] [rbp-A8h] BYREF
  struct _ITEMIDLIST *v23; // [rsp+60h] [rbp-A0h] BYREF
  char v24; // [rsp+68h] [rbp-98h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+70h] [rbp-90h] BYREF
  WCHAR psz[264]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v7 = 0;
  wil::make_unique_nothrow<CBackupLocationManager,>(&ppwsz);
  if ( ppwsz )
  {
    v9 = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a2 + 104LL))(a2, psz, 260LL);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v9 = SHStrDupW(psz, ppwsz);
      v8 = v9;
      if ( v9 >= 0 )
      {
        Src = 0LL;
        if ( !*a3
          || (p_Src = &Src,
              v23 = 0LL,
              v24 = 1,
              v7 = 1,
              v11 = 0,
              (int)CBackupLocationManager::CreateTombstoneLnk((CBackupLocationManager *)ppwsz, *a4, &v23) < 0) )
        {
          v11 = 1;
        }
        if ( (v7 & 1) != 0 )
          wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
        if ( !v11
          || (v12 = ILClone(*a4),
              wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
                (void **)&Src,
                v12),
              Src) )
        {
          SystemTimeAsFileTime = 0LL;
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          p_Src = (struct _ITEMIDLIST **)0xBEEF002C00000010LL;
          v23 = (struct _ITEMIDLIST *)SystemTimeAsFileTime;
          v20 = 0LL;
          v16 = &v20;
          v17 = 0LL;
          v18 = 1;
          v8 = ILCloneWithHiddenID(Src, (const struct _HIDDENITEMID *)&p_Src, &v17);
          wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v16);
          if ( (v8 & 0x80000000) == 0 )
          {
            v13 = v20;
            v20 = 0LL;
            wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              (void **)&Src,
              v13);
            ILFree((LPITEMIDLIST)*a4);
            v14 = Src;
            Src = 0LL;
            *a4 = v14;
            wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              &v20,
              0LL);
            wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              (void **)&Src,
              0LL);
            v8 = 0;
            goto LABEL_20;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC40,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)v8);
          wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &v20,
            0LL);
        }
        else
        {
          v8 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC38,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)0x8007000ELL);
        }
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&Src,
          0LL);
LABEL_20:
        CBackupLocationManager::`scalar deleting destructor'((LPVOID *)ppwsz);
        return v8;
      }
      v10 = 3120LL;
    }
    else
    {
      v10 = 3119LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_20;
  }
  v8 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2C,
    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)0x8007000ELL);
  return v8;
}
