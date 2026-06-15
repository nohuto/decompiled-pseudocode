/*
 * XREFs of ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x18003FE04
 * Callers:
 *     ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x18003FCE8 (--1-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndId@@@std@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall DuckingDescriptorAndId::~DuckingDescriptorAndId(
        DuckingDescriptorAndId *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  std::wstring::~wstring((__int64)this, a2, a3, a4);
}
