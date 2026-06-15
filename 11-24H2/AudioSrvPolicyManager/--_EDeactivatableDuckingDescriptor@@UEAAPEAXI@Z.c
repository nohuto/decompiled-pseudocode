/*
 * XREFs of ??_EDeactivatableDuckingDescriptor@@UEAAPEAXI@Z @ 0x18002CDD0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@EEAAXXZ @ 0x18002EBF0 (-_Destroy@-$_Ref_count_obj2@VDeactivatableDuckingDescriptor@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DeactivatableDuckingDescriptor@@UEAA@XZ @ 0x18002C348 (--1DeactivatableDuckingDescriptor@@UEAA@XZ.c)
 */

DeactivatableDuckingDescriptor *__fastcall DeactivatableDuckingDescriptor::`vector deleting destructor'(
        DeactivatableDuckingDescriptor *this,
        char a2)
{
  DeactivatableDuckingDescriptor::~DeactivatableDuckingDescriptor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
