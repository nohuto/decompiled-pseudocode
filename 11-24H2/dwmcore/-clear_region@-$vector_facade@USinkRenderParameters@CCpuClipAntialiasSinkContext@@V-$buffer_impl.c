/*
 * XREFs of ?clear_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014A1C4
 * Callers:
 *     ?erase_unchecked@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@2@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@2@0@Z @ 0x18028691C (-erase_unchecked@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_i.c)
 * Callees:
 *     ??1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x18014AF10 (--1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??$move@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180286410 (--$move@V-$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V-$checked.c)
 */

void __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdi
  CCpuClipAntialiasSinkContext::SinkRenderParameters *i; // rbx
  _QWORD v12[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = a2;
  v7 = a3 + a2;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - v5) >> 3);
  if ( v7 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)(v5 + 8 * ((a1[1] - v5) >> 3));
    if ( v7 == v9 )
      goto LABEL_3;
  }
  if ( v6 && (!v5 || v6 < 0 || v9 < v6) )
    _invalid_parameter_noinfo_noreturn();
  v12[0] = v5;
  v12[1] = v9;
  v12[2] = v6;
  ((void (__fastcall *)(_BYTE *, unsigned __int64, CCpuClipAntialiasSinkContext::SinkRenderParameters *, _QWORD *))std::move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>>)(
    v13,
    v5 + 40 * v7,
    v3,
    v12);
LABEL_3:
  v10 = 40 * a3;
  for ( i = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)((char *)v3 - 40 * a3);
        i != v3;
        i = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)((char *)i + 40) )
  {
    CCpuClipAntialiasSinkContext::SinkRenderParameters::~SinkRenderParameters(i);
  }
  a1[1] -= v10;
}
