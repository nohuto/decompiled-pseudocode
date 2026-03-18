/*
 * XREFs of ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800AAF98
 * Callers:
 *     ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x180081988 (-RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800A9050 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800AAF50 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180291900 (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 */

void __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  void **v1; // rdi
  __int64 v2; // r10
  signed __int64 v4; // r8
  unsigned __int64 v5; // r9
  signed __int64 v6; // rcx
  void **i; // rbx
  _QWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *a1;
  v4 = 0x84BDA12F684BDA13uLL * ((a1[1] - *a1 - 432) >> 4);
  v5 = 0x84BDA12F684BDA13uLL * ((a1[1] - *a1) >> 4);
  v6 = v4 + 1;
  if ( v4 + 1 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v1 = (void **)(v2 + 432 * v5);
    if ( v6 == v5 )
      goto LABEL_3;
  }
  if ( v4 && (!v2 || v4 < 0 || v5 < v4) )
    _invalid_parameter_noinfo_noreturn();
  v8[1] = v5;
  v8[2] = v4;
  v8[0] = v2;
  std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
    v9,
    v2 + 432 * v6,
    v1,
    v8);
LABEL_3:
  for ( i = v1 - 54; i != v1; i += 54 )
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(i);
  a1[1] -= 432LL;
}
