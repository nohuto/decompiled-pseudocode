/*
 * XREFs of _GetClientRect @ 0x1400750A0
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     EtwTraceLayoutChangeStop @ 0x140087828 (EtwTraceLayoutChangeStop.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x14018287C (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402E0898 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14002699C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__m128i *__fastcall GetClientRect(__int64 a1, __m128i *a2)
{
  __int64 v3; // rdx
  __m128i *result; // rax
  __int32 v5; // r8d
  __int32 v6; // ecx
  __int64 v7; // rbx
  unsigned int CurrentThreadCompositedDpiContext; // eax
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v3 + 42) & 0x2FFF) == 0x29D )
  {
    v7 = *(_QWORD *)(GetDispInfo() + 104);
    CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
    result = GetMonitorRectForDpi(&v9, v7, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
    *a2 = v9;
  }
  else
  {
    *a2 = *(__m128i *)(v3 + 104);
    result = *(__m128i **)(a1 + 40);
    v5 = result[6].m128i_i32[3];
    v6 = result[6].m128i_i32[2];
    a2->m128i_i32[0] -= v6;
    a2->m128i_i32[2] -= v6;
    a2->m128i_i32[3] -= v5;
    a2->m128i_i32[1] -= v5;
  }
  return result;
}
