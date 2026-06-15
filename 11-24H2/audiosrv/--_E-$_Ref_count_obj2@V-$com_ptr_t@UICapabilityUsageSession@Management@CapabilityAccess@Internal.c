/*
 * XREFs of ??_E?$_Ref_count_obj2@V?$com_ptr_t@UICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@UEAAPEAXI@Z @ 0x18006E650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<wil::com_ptr_t<Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession,wil::err_returncode_policy>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<wil::com_ptr_t<Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession,wil::err_returncode_policy>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
