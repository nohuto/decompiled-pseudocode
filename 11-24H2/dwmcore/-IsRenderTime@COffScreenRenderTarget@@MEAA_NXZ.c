/*
 * XREFs of ?IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ @ 0x180159AC0
 * Callers:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180159A70 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x180159E5C (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 */

char __fastcall COffScreenRenderTarget::IsRenderTime(COffScreenRenderTarget *this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 39) == -1LL )
    return 1;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v2 = PerformanceCount.QuadPart - *((_QWORD *)this + 38);
  if ( *((_BYTE *)this + 2729) )
    return 1;
  v3 = *((_QWORD *)this + 39);
  if ( v2 >= v3 )
    return 1;
  ScheduleCompositionPass(1000 * (v3 - v2) / g_qpcFrequency.QuadPart);
  return 0;
}
