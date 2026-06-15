/*
 * XREFs of ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x18003D4C8
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x18003D610 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x18004B47A (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x18004B48C (_TsSessionCreate_--_1_--dtor$10.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x18003D5E4 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(
        DuckingDescriptorAndId **a1)
{
  DuckingDescriptorAndId *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    DuckingDescriptorAndId::~DuckingDescriptorAndId(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x30);
  }
}
