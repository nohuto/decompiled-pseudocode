/*
 * XREFs of ?GetSelection@AllUpViewUriHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804995B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AllUpViewUriHandler::GetSelection(AllUpViewUriHandler *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *); // rcx

  *a3 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *))*((_QWORD *)this + 2);
  if ( v3 )
    return (**v3)(v3, a2);
  else
    return 2147500034LL;
}
