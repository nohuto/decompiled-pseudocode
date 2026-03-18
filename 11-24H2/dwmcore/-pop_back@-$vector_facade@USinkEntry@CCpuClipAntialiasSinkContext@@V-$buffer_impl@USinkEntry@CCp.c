/*
 * XREFs of ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180079178
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180075170 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180077230 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x1800F6A10 (-RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x180079130 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180286360 (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 */

void __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1,
        __int64 a2)
{
  void **v2; // rdi
  __int64 v3; // r10
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  void **i; // rbx
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a1;
  v5 = 0x84BDA12F684BDA13uLL * ((a1[1] - *a1 - 432) >> 4);
  v6 = 0x84BDA12F684BDA13uLL * ((a1[1] - *a1) >> 4);
  v7 = v5 + 1;
  if ( v5 + 1 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v2 = (void **)(v3 + 432 * v6);
    if ( v7 == v6 )
      goto LABEL_3;
  }
  if ( v5 && (!v3 || v5 < 0 || v6 < v5) )
    _invalid_parameter_noinfo_noreturn();
  v9[1] = v6;
  v9[2] = v5;
  v9[0] = v3;
  std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
    v10,
    v3 + 432 * v7,
    v2,
    v9);
LABEL_3:
  for ( i = v2 - 54; i != v2; i += 54 )
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(i, a2, v5);
  a1[1] -= 432LL;
}
