/*
 * XREFs of ?GetAt@CAppLayoutOperation@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1806C0C20
 * Callers:
 *     ?GetAt@CAppLayoutOperation@@W7EAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180516370 (-GetAt@CAppLayoutOperation@@W7EAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutOperation::GetAt(
        CAppLayoutOperation *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, const struct _GUID *, void **); // rcx

  *a4 = 0LL;
  result = 2147942487LL;
  if ( (unsigned __int64)a2 < *((_QWORD *)this + 16) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 15) + 8LL * a2);
    return (**v5)(v5, a3, a4);
  }
  return result;
}
