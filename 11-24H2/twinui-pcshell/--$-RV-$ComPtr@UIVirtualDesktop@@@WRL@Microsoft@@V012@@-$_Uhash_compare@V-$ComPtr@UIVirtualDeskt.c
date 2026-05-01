/*
 * XREFs of ??$?RV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V012@@?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@QEBA_NAEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x1801A72C4
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180497E90 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UI.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>::operator()<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<IVirtualDesktop>>(
        __int64 a1,
        int (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        _QWORD *a3)
{
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  char v4; // bl
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  int v7; // edi
  bool v8; // zf
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = a1;
  v3 = *a2;
  v4 = 0;
  if ( !*a2 )
  {
    v8 = *a3 == 0LL;
    goto LABEL_9;
  }
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a3;
  if ( !*a3 )
    return 1;
  if ( v3 != (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v5 )
  {
    v6 = *v3;
    v11 = 0LL;
    v10 = 0LL;
    if ( (*v6)(v3, &GUID_00000000_0000_0000_c000_000000000046, &v11) < 0 )
      return 1;
    v7 = (**v5)(v5, &GUID_00000000_0000_0000_c000_000000000046, &v10);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v7 < 0 )
      return 1;
    v8 = v11 == v10;
LABEL_9:
    if ( !v8 )
      return 1;
  }
  return v4;
}
