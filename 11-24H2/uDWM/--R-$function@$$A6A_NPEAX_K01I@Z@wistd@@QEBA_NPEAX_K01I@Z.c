/*
 * XREFs of ??R?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEBA_NPEAX_K01I@Z @ 0x1800713F4
 * Callers:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180070D90 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ...)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF
  __int64 v9; // [rsp+70h] [rbp+28h] BYREF
  va_list va; // [rsp+70h] [rbp+28h]
  va_list va1; // [rsp+78h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v9 = va_arg(va1, _QWORD);
  v8 = a4;
  v7 = a3;
  v6 = a2;
  v4 = *(_QWORD *)(a1 + 112);
  if ( !v4 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, char *))(*(_QWORD *)v4 + 32LL))(
           v4,
           &v6,
           &v7,
           &v8,
           (__int64 *)va,
           va1);
}
