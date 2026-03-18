/*
 * XREFs of ?clear@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180094DBC
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x18009309C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ??$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAntialiasSinkContext@@0@Z @ 0x1800938B0 (--$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAnt.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800A9050 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800A9D30 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ??1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800AAF50 (--1SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x180291DB0 (--0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z.c)
 *     ??4SinkEntry@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x180291E2C (--4SinkEntry@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 * Callees:
 *     ??1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x180095B80 (--1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 */

void __fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::clear(
        __int64 a1)
{
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v1; // rbx
  __int64 v3; // rsi
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v4; // rbp

  v1 = *(CCpuClipAntialiasSinkContext::SinkRenderParameters **)a1;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) )
  {
    v3 = 8 * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
    v4 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)((char *)v1 + v3);
    while ( v1 != v4 )
    {
      CCpuClipAntialiasSinkContext::SinkRenderParameters::~SinkRenderParameters(v1);
      v1 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)((char *)v1 + 40);
    }
    *(_QWORD *)(a1 + 8) -= v3;
  }
}
