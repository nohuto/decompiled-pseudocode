/*
 * XREFs of ??_E?$_Ref_count_obj2@UPool@CEndpointResourcePool@Sarm@@@std@@UEAAPEAXI@Z @ 0x180122C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<Sarm::CEndpointResourcePool::Pool>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<Sarm::CEndpointResourcePool::Pool>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
