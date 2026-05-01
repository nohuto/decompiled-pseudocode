/*
 * XREFs of ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayoutType@@@Z @ 0x180165F5C (-StartActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXW4TaskbarLayout.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x18021305C (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068A8C0 (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068AEEC (--1CPinList@@QEAA@XZ.c)
 *     ??1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18068B068 (--1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068DAA8 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180692D90 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806959A4 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPinnedList::ApplyInPlaceTaskbarLayout(__int64 a1, unsigned int a2)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  int PinSourceForPinnedItem; // eax
  int v10; // eax
  int v11; // eax
  struct PINENTRY *PidlOrAppID; // r14
  LPCITEMIDLIST *v13; // rbx
  LPCITEMIDLIST *v14; // r12
  const struct _ITEMIDLIST *v15; // rsi
  struct PINENTRY *v16; // rax
  ITEMIDLIST **v17; // rbx
  ITEMIDLIST **v18; // rsi
  ITEMIDLIST *v19; // r14
  int v20; // eax
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  LPITEMIDLIST pidl; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B0h]
  int v25; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int128 v28; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v29[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v29, 0, sizeof(v29));
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"TaskbarLayoutInPlaceActivity");
  v29[0] = (volatile signed __int32 *)&TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::StartActivity((__int64)v29, a2);
  v25 = 0;
  v26 = 0;
  pv[0] = 0LL;
  pv[1] = 0LL;
  v24 = 0uLL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(a2, pv, &v25, &v26);
  v5 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x993,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
LABEL_6:
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v24 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::~TaskbarLayoutInPlaceActivity(v29);
    return v5;
  }
  if ( v25 )
  {
    v27 = 0LL;
    pidl = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    v7 = v6(a1, &v27);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x998,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      goto LABEL_6;
    }
    while ( !(*(unsigned int (__fastcall **)(__int64, __int64, LPITEMIDLIST *))(*(_QWORD *)v27 + 24LL))(v27, 1LL, &pidl) )
    {
      v21 = 0;
      PinSourceForPinnedItem = GetPinSourceForPinnedItem(pidl, (enum TaskbarPinningSource *)&v21);
      if ( PinSourceForPinnedItem >= 0 )
      {
        if ( v21 )
        {
          v28 = 0LL;
          if ( v26 || v21 != 1 )
          {
            v10 = CPinList::Load((CPinList *)&v28, (struct CPinnedList *)(a1 - 16));
            if ( v10 >= 0 )
            {
              PidlOrAppID = CPinList::FindPidlOrAppID((CPinList *)&v28, pidl, 0, 0LL);
              v13 = (LPCITEMIDLIST *)pv[0];
              v14 = (LPCITEMIDLIST *)((char *)pv[0] + 8 * (__int64)pv[1]);
              while ( v13 != v14 )
              {
                v15 = *v13;
                if ( ILIsEqual(pidl, *v13) )
                  goto LABEL_19;
                v16 = CPinList::FindPidlOrAppID((CPinList *)&v28, v15, 0, 0LL);
                if ( PidlOrAppID )
                {
                  if ( PidlOrAppID == v16 )
                    goto LABEL_19;
                }
                ++v13;
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x9A8,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v10);
            }
            v11 = CPinnedList::InternalModify(a1 - 16, pidl, 0LL, 12LL);
            if ( v11 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x9C6,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v11);
          }
LABEL_19:
          CPinList::~CPinList((CPinList *)&v28);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x99E,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)PinSourceForPinnedItem);
      }
      ILFree(pidl);
    }
    v17 = (ITEMIDLIST **)pv[0];
    v18 = (ITEMIDLIST **)((char *)pv[0] + 8 * (__int64)pv[1]);
    while ( v17 != v18 )
    {
      v19 = *v17;
      if ( (*(unsigned int (__fastcall **)(__int64, ITEMIDLIST *))(*(_QWORD *)a1 + 72LL))(a1, *v17) == 1 )
      {
        v20 = CPinnedList::InternalModify(a1 - 16, 0LL, v19, 12LL);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9D1,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v20);
      }
      ILFree(v19);
      ++v17;
    }
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v24 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::~TaskbarLayoutInPlaceActivity(v29);
    return 0LL;
  }
  else
  {
    if ( pv[0] )
    {
      CoTaskMemFree(pv[0]);
      pv[0] = 0LL;
    }
    pv[1] = 0LL;
    *((_QWORD *)&v24 + 1) = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::~TaskbarLayoutInPlaceActivity(v29);
    return 2147947423LL;
  }
}
