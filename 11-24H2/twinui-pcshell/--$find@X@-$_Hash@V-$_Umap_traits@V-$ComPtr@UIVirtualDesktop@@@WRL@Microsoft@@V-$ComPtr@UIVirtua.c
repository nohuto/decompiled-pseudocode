/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@1@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x180075418
 * Callers:
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180075174 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180497BE0 (-VirtualDesktopDestroyed@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 j; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // edi
  int v19; // eax
  unsigned __int64 k; // rcx
  unsigned __int64 i; // rcx
  __int64 v23; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  __int64 v25; // [rsp+60h] [rbp+40h] BYREF
  __int64 v26; // [rsp+68h] [rbp+48h] BYREF
  __int64 v27; // [rsp+70h] [rbp+50h] BYREF

  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a3;
  v25 = 0LL;
  if ( v6 )
  {
    v7 = **v6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    v8 = v7(v6, &GUID_00000000_0000_0000_c000_000000000046, &v25);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17,
        (int)"desktop\\internal\\shell\\inc\\private\\WrlStlInterop.h",
        (const char *)(unsigned int)v8);
      v26 = *a3;
      v10 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 8; ++i )
        v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v26 + i) ^ (unsigned __int64)v10);
      v23 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 16LL))(v23, 0x100000001B3LL);
      }
    }
    else
    {
      v9 = v25;
      v26 = v25;
      v10 = 0xCBF29CE484222325uLL;
      for ( j = 0LL; j < 8; ++j )
        v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v26 + j) ^ (unsigned __int64)v10);
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, 0x100000001B3LL);
      }
    }
  }
  else
  {
    v10 = 0xCBF29CE484222325uLL;
    for ( k = 0LL; k < 8; ++k )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v25 + k) ^ (unsigned __int64)v10);
  }
  v12 = 2 * (v10 & a1[6]);
  v13 = a1[3];
  v14 = *(_QWORD *)(v13 + 16 * (v10 & a1[6]) + 8);
  if ( v14 != a1[1] )
  {
    v15 = *(_QWORD *)(v13 + 8 * v12);
    while ( 1 )
    {
      v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a3;
      if ( *a3 )
      {
        v17 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 16);
        if ( v17 )
        {
          if ( v16 == v17 )
            goto LABEL_21;
          v27 = 0LL;
          v26 = 0LL;
          if ( (int)(**v16)(v16, &GUID_00000000_0000_0000_c000_000000000046, &v27) < 0 )
            goto LABEL_17;
          v18 = (**v17)(v17, &GUID_00000000_0000_0000_c000_000000000046, &v26);
          if ( v18 >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          if ( v18 >= 0 && v27 == v26 )
            v19 = 1;
          else
LABEL_17:
            v19 = 0;
          if ( v19 )
            goto LABEL_21;
        }
      }
      else if ( !*(_QWORD *)(v14 + 16) )
      {
        goto LABEL_21;
      }
      if ( v14 == v15 )
        break;
      v14 = *(_QWORD *)(v14 + 8);
    }
  }
  v14 = 0LL;
LABEL_21:
  if ( !v14 )
    v14 = a1[1];
  *a2 = v14;
  return a2;
}
