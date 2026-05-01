/*
 * XREFs of ??R?$function@$$A6AJXZ@wistd@@QEBAJXZ @ 0x180200B48
 * Callers:
 *     ?TryWithRpcDisconnectFallback@Shell@Internal@Windows@@YAJ$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180015638 (-TryWithRpcDisconnectFallback@Shell@Internal@Windows@@YAJ$$QEAV-$function@$$A6AJXZ@wistd@@0$$QEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function<long (void)>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  if ( !v1 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
}
