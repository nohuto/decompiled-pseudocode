/*
 * XREFs of ?InputHostHiding@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180229EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Shell::IInputHostLayoutChangesHandler::InputHostHiding(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 264);
  if ( !v3 )
    return 0LL;
  v5 = a3;
  v6 = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v3 + 32LL))(v3, &v6, &v5);
}
