/*
 * XREFs of ApiSetEditionGetCompositionInputWindowUIOwner @ 0x140094A94
 * Callers:
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x140093DB0 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14009477C (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetCompositionInputWindowUIOwner(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64); // rax

  v3 = 0LL;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5328LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 5336LL);
      if ( v7 )
        return v7(a1);
    }
  }
  return v3;
}
