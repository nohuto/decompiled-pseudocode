/*
 * XREFs of ?AppendChainLinkInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIChainLink@2345@AEAVChainLinkNotifier@12345@@Z @ 0x180302120
 * Callers:
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x180301F70 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180302040 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV234@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180301188 (--$_Emplace_reallocate@AEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@-$vector@V-$ComPtr@UI.c)
 *     ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@PEAUIChainLink@3456@1W4ChainLinkEventType@3456@@Z @ 0x180301C98 (-AddNotification@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Wind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::AppendChainLinkInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct IUnknown ***v3; // rsi
  __int64 v5; // rax
  struct IUnknown *v7; // rbp
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  struct IUnknown **v11; // r14
  struct IUnknown **i; // rbx
  struct IUnknown **v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v18; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = (struct IUnknown *)a2;
  v3 = (struct IUnknown ***)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 32);
  v7 = (struct IUnknown *)a2;
  v8 = (*(_QWORD *)(a1 + 40) - v5) >> 3;
  if ( v8 )
  {
    v18 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v5 + 8 * v8 - 8) + 48LL))(
           *(_QWORD *)(v5 + 8 * v8 - 8),
           &v18);
    if ( v9 < 0 )
    {
      v10 = 287LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    if ( !v18 )
    {
      v10 = 288LL;
LABEL_18:
      v9 = -2147024811;
      goto LABEL_19;
    }
  }
  v11 = *(struct IUnknown ***)(a1 + 40);
  for ( i = *v3; i != v11 && !SHIsSameObject(*i, v7); ++i )
    ;
  if ( i != *(struct IUnknown ***)(a1 + 40) )
  {
    v10 = 297LL;
    goto LABEL_18;
  }
  v13 = v3[1];
  if ( v13 == v3[2] )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>::_Emplace_reallocate<Windows::Internal::Shell::Chaining::IChainLink * &>(
      (__int64)v3,
      v13,
      (__int64 *)&v19);
    v7 = v19;
  }
  else
  {
    v14 = (__int64 *)v3[1];
    *v13 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    ++v3[1];
  }
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
      a3,
      a1,
      v15,
      (__int64)v7,
      2u);
  ++*(_DWORD *)(a1 + 64);
  return 0LL;
}
