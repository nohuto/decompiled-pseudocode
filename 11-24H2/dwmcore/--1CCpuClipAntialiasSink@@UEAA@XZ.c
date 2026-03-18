/*
 * XREFs of ??1CCpuClipAntialiasSink@@UEAA@XZ @ 0x1801CDE0C
 * Callers:
 *     ??_GCCpuClipAntialiasSink@@UEAAPEAXI@Z @ 0x1801CDDD0 (--_GCCpuClipAntialiasSink@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ @ 0x1801CDE60 (--1-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall CCpuClipAntialiasSink::~CCpuClipAntialiasSink(CCpuClipAntialiasSink *this)
{
  char *v2; // rsi
  __int64 v3; // rdi

  v2 = (char *)this + 56;
  v3 = 2LL;
  do
  {
    v2 -= 8;
    std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>(v2);
    --v3;
  }
  while ( v3 );
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 4);
  std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>((_QWORD **)this + 2);
}
