/*
 * XREFs of ?RunFunctorWithExceptionFilter@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@PEAX@Z @ 0x18003A540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::RunFunctorWithExceptionFilter(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3,
        void *a4)
{
  __int64 result; // rax

  try
  {
    result = (**(__int64 (***)(void))a2)();
  }
  catch ( ... )
  {
    return (*(unsigned int (__fastcall **)(struct wil::details::IFunctor *, struct wil::details::IFunctorHost *))(*(_QWORD *)a2 + 8LL))(
             a2,
             a3);
  }
  return result;
}
