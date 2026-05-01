/*
 * XREFs of ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068C000
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x18021305C (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4094 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C40B8 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068A8C0 (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18068B0C0 (--1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayoutType@@@Z @ 0x1806958F8 (-StartActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayout.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806959A4 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPinnedList::ApplyReorderTaskbarLayout(__int64 a1, unsigned int a2, int a3)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  int v9; // eax
  int v10; // edi
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // rax
  int v15; // ebx
  int PinSourceForPinnedItem; // eax
  __int64 v17; // rdx
  __int64 i; // rbx
  __int64 v19; // rdi
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  struct _ITEMIDLIST **v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+48h] [rbp-B8h]
  LPVOID *v31; // [rsp+50h] [rbp-B0h]
  char v32; // [rsp+58h] [rbp-A8h]
  LPVOID pv[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+80h] [rbp-80h] BYREF
  struct _ITEMIDLIST *v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37[2]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v38[42]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  memset_0(v38, 0, sizeof(v38));
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v38,
    (__int64)"TaskbarLayoutReorderActivity");
  v38[0] = (volatile signed __int32 *)&TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::StartActivity(v38, a2);
  v35 = 0;
  pv[0] = 0LL;
  pv[1] = 0LL;
  v34 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, pv, &v35, 0LL);
  v7 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4B,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
LABEL_12:
    pv[1] = 0LL;
    *((_QWORD *)&v34 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity(v38);
    return v7;
  }
  v31 = pv;
  v32 = 1;
  if ( v35 )
  {
    v37[0] = 0LL;
    v36 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
    v9 = v8(a1, v37);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA59,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v9);
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v36,
        0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
      v11 = 0;
      if ( pv[1] )
      {
        v12 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[0] + v12));
          v12 = ++v11;
        }
        while ( (LPVOID)v11 < pv[1] );
      }
      if ( pv[0] )
      {
        CoTaskMemFree(pv[0]);
        pv[0] = 0LL;
      }
      v7 = v10;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v14 = *(_QWORD *)v37[0];
      v28 = &v36;
      v29 = 0LL;
      v30 = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v14 + 24))(v37[0], 1LL, &v29);
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v28);
      if ( v15 )
        break;
      v27 = 0;
      PinSourceForPinnedItem = GetPinSourceForPinnedItem(v36, (enum TaskbarPinningSource *)&v27);
      if ( PinSourceForPinnedItem < 0 )
      {
        v17 = 2655LL;
        goto LABEL_21;
      }
      if ( v27 && (v27 != 1 || !a2) )
      {
        PinSourceForPinnedItem = CPinnedList::InternalModify(a1 - 16, v36, 0LL, 14LL);
        if ( PinSourceForPinnedItem < 0 )
        {
          v17 = 2660LL;
LABEL_21:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v17,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)PinSourceForPinnedItem);
        }
      }
    }
    if ( a3 )
    {
      for ( i = LODWORD(pv[1]) - 1; i >= 0; --i )
      {
        v19 = *((_QWORD *)pv[0] + i);
        if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, v19) )
        {
          v20 = CPinnedList::InternalModify(a1 - 16, 0LL, v19, 14LL);
          v21 = retaddr;
          if ( v20 < 0 )
          {
            v22 = 2672LL;
LABEL_29:
            wil::details::in1diag3::_Log_Hr(
              v21,
              (void *)v22,
              (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
              (const char *)(unsigned int)v20);
            continue;
          }
          v20 = CPinnedList::InternalModify(a1 - 16, v19, 1LL, 14LL);
          v21 = retaddr;
          if ( v20 < 0 )
          {
            v22 = 2674LL;
            goto LABEL_29;
          }
        }
      }
    }
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v38);
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v36,
      0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v37);
    v23 = 0;
    if ( pv[1] )
    {
      v24 = 0LL;
      do
      {
        ILFree(*((LPITEMIDLIST *)pv[0] + v24));
        v24 = ++v23;
      }
      while ( (LPVOID)v23 < pv[1] );
    }
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v34 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity(v38);
    return 0LL;
  }
  else
  {
    v25 = 0;
    if ( pv[1] )
    {
      v26 = 0LL;
      do
      {
        ILFree(*((LPITEMIDLIST *)pv[0] + v26));
        v26 = ++v25;
      }
      while ( (LPVOID)v25 < pv[1] );
    }
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v34 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity(v38);
    return 2147947423LL;
  }
}
