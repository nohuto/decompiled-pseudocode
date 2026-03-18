/*
 * XREFs of ?clear_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800AB4C4
 * Callers:
 *     ??1?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801275DC (--1-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry@CCpuClipAn.c)
 * Callees:
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800AAF50 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??$move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180291900 (--$move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_array_iter.c)
 */

void __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  void **v3; // rdi
  __int64 v4; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rsi
  void **i; // rbx
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v6 = a1[1] - *a1;
  v7 = a2 + a3;
  v9 = 0x84BDA12F684BDA13uLL * (v6 >> 4);
  v10 = a2;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = (void **)(v4 + 432 * v9);
    if ( v7 == v9 )
      goto LABEL_3;
  }
  if ( v10 && (!v4 || v10 < 0 || v9 < v10) )
    _invalid_parameter_noinfo_noreturn();
  v13[2] = v10;
  v13[0] = v4;
  v13[1] = v9;
  std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>(
    v14,
    v4 + 432 * v7,
    v3,
    v13);
LABEL_3:
  v11 = 432 * a3;
  for ( i = &v3[-54 * a3]; i != v3; i += 54 )
    CCpuClipAntialiasSinkContext::SinkEntry::~SinkEntry(i);
  a1[1] -= v11;
}
