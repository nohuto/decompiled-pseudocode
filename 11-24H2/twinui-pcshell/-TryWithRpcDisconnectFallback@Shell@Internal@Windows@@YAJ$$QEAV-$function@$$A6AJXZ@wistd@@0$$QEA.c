/*
 * XREFs of ?TryWithRpcDisconnectFallback@Shell@Internal@Windows@@YAJ$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180015638
 * Callers:
 *     ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180015250 (-TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV-$function@$$A6AJXZ@wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$function@$$A6AJXZ@wistd@@QEBAJXZ @ 0x180200B48 (--R-$function@$$A6AJXZ@wistd@@QEBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Shell::TryWithRpcDisconnectFallback(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = ((__int64 (*)(void))wistd::function<long (void)>::operator())();
  v12 = v5;
  v6 = *(_QWORD *)(a3 + 112);
  if ( !v6 )
    __fastfail(7u);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 32LL))(v6, &v12) )
  {
    v8 = wistd::function<long (void)>::operator()(a2);
    v9 = v8;
    if ( v8 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\restartabilityhelpers.h",
      (const char *)(unsigned int)v8,
      v10);
    return v9;
  }
  else
  {
    if ( v5 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\restartabilityhelpers.h",
      (const char *)(unsigned int)v5,
      v10);
    return (unsigned int)v5;
  }
}
