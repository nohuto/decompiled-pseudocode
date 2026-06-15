/*
 * XREFs of ??_E?$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@UEAAPEAXI@Z @ 0x18002F650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<DeactivatableDuckingDescriptor>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
