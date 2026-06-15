/*
 * XREFs of ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x18003FCE8
 * Callers:
 *     ??1TSSession@@QEAA@XZ @ 0x18003FE30 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x18004DCD6 (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x18004DCE8 (_TsSessionCreate_--_1_--dtor$10.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x18003FE04 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
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
