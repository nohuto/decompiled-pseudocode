/*
 * XREFs of ?ApplicationViewShown@VirtualDesktopWindowMoveManager@@UEAAJPEAUIApplicationView@@_K@Z @ 0x18002B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K@Z @ 0x180566F80 (-RemoveAt@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTPolicyCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopWindowMoveManager::ApplicationViewShown(
        VirtualDesktopWindowMoveManager *this,
        struct IApplicationView *a2,
        unsigned __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(struct IApplicationView *, GUID *, __int64 *); // rbx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, char *, __int64 *); // rbx
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-39h] BYREF
  __int64 v27; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v28[6]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v29; // [rsp+60h] [rbp+7h] BYREF
  __int128 v30; // [rsp+70h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 8) )
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)0x8007139FLL);
    return v9;
  }
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
  {
    v7 = 32 * v6;
    do
    {
      if ( *(_QWORD *)(v7 + *((_QWORD *)this + 11) - 8) + 500LL < a3 )
      {
        v17 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
                (char *)this + 88,
                v6 - 1);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x81,
            (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v17,
            v26);
      }
      v7 -= 32LL;
      --v6;
    }
    while ( v6 );
  }
  v26 = 0LL;
  v8 = **(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  v9 = v8(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v26);
  if ( (v9 & 0x80000000) != 0 )
  {
    v16 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v9;
  }
  v28[0] = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 24LL))(v26, v28);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
      (const char *)(unsigned int)v10);
    v15 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v9;
  }
  v11 = 0LL;
  v12 = 0LL;
  while ( v11 < *((_QWORD *)this + 12) )
  {
    if ( *(_QWORD *)(v12 + *((_QWORD *)this + 11)) == v28[0] )
    {
      v18 = *((_QWORD *)this + 11);
      v29 = *(_OWORD *)(32 * v11 + v18);
      v30 = *(_OWORD *)(32 * v11 + v18 + 16);
      CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::RemoveAt(
        (char *)this + 88,
        v11);
      v19 = *((_QWORD *)&v29 + 1) - 0x4CF966F2C2DDEA68LL;
      if ( *((_QWORD *)&v29 + 1) == 0x4CF966F2C2DDEA68LL )
        v19 = v30 + 0x534404FF02E49B7ELL;
      if ( !v19 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 216LL))(
                *((_QWORD *)this + 6),
                a2);
        v9 = v20;
        if ( v20 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6E,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
            (const char *)(unsigned int)v20);
        goto LABEL_33;
      }
      v27 = 0LL;
      v21 = *((_QWORD *)this + 7);
      v22 = *(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v21 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      v23 = v22(v21, (char *)&v29 + 8, &v27);
      v9 = v23;
      if ( v23 < 0 )
      {
        v24 = (unsigned int)v23;
        v25 = 115LL;
        goto LABEL_31;
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 6) + 200LL))(
             *((_QWORD *)this + 6),
             a2,
             v27);
      if ( (v9 & 0x80000000) != 0 )
      {
        v24 = v9;
        v25 = 116LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopwindowmovemanager.cpp",
          (const char *)v24);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
LABEL_33:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
      return v9;
    }
    ++v11;
    v12 += 32LL;
  }
  v13 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 2147647531LL;
}
