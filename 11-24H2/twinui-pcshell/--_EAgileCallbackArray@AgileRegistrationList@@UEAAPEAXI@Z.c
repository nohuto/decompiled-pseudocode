/*
 * XREFs of ??_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z @ 0x180046B60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180046BC4 (-_Tidy@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

AgileRegistrationList::AgileCallbackArray *__fastcall AgileRegistrationList::AgileCallbackArray::`vector deleting destructor'(
        AgileRegistrationList::AgileCallbackArray *this,
        char a2)
{
  __int64 v4; // rcx

  std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Tidy((char *)this + 48);
  *((_DWORD *)this + 11) = -1073741823;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
