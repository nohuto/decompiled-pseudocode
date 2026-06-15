/*
 * XREFs of ??_GDuckingDescriptor@@UEAAPEAXI@Z @ 0x18002F7F0
 * Callers:
 *     ??1?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@QEAA@XZ @ 0x18002ECC8 (--1-$unique_ptr@VDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@std@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VDuckingDescriptor@@@std@@EEAAXXZ @ 0x1800315F0 (-_Destroy@-$_Ref_count_obj2@VDuckingDescriptor@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_resource@PEAVDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@EEAAXXZ @ 0x180031610 (-_Destroy@-$_Ref_count_resource@PEAVDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@st.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DuckingDescriptor *__fastcall DuckingDescriptor::`scalar deleting destructor'(DuckingDescriptor *this, char a2)
{
  *(_QWORD *)this = &IDuckingDescriptor::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
