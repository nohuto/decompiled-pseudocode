/*
 * XREFs of ?Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z @ 0x18026D068
 * Callers:
 *     ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x1802717A4 (-NotifyEndFrame@CRenderPerf@@QEAAXXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     McTemplateU0xxxxxqqxqxqxqxq_EventWriteTransfer @ 0x18025387C (McTemplateU0xxxxxqqxqxqxqxq_EventWriteTransfer.c)
 */

CGlobalComposition *__fastcall CRenderPerf::Trace_TargetRender(__int64 a1, int a2)
{
  CGlobalComposition *result; // rax
  CGlobalComposition **v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int *v8; // rdi
  __int64 v9; // rcx
  int v10; // [rsp+38h] [rbp-60h]
  int v11; // [rsp+40h] [rbp-58h]
  int v12; // [rsp+50h] [rbp-48h]
  int v13; // [rsp+60h] [rbp-38h]
  int v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+80h] [rbp-18h]
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp+8h] BYREF

  result = GetCurrentFrameId();
  if ( *v5 == result )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v8 = (int *)(a1 + 196);
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      v15 = a2;
      v14 = *(_DWORD *)(a1 + 208);
      v13 = *(_DWORD *)(a1 + 204);
      v12 = *(_DWORD *)(a1 + 200);
      v11 = *v8;
      v10 = *(_DWORD *)(a1 + 192);
      McTemplateU0xxxxxqqxqxqxqxq_EventWriteTransfer(
        v7,
        v6,
        *(_QWORD *)(a1 + 128),
        PerformanceCount.QuadPart,
        *(_QWORD *)(a1 + 136),
        *(_QWORD *)(a1 + 144),
        *(_QWORD *)(a1 + 152),
        v10,
        v11,
        *(_QWORD *)(a1 + 160),
        v12,
        *(_QWORD *)(a1 + 168),
        v13,
        *(_QWORD *)(a1 + 176),
        v14,
        *(_QWORD *)(a1 + 184),
        v15);
    }
    *(_QWORD *)(a1 + 48) += PerformanceCount.QuadPart - *(_QWORD *)(a1 + 128);
    v9 = *(_QWORD *)(a1 + 136);
    if ( v9 )
      *(_QWORD *)(a1 + 56) += *(_QWORD *)(a1 + 144) - v9;
    *(_QWORD *)(a1 + 64) += *(_QWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 104) += *(_DWORD *)(a1 + 192);
    *(_DWORD *)(a1 + 108) += *v8;
    *(_QWORD *)(a1 + 72) += *(_QWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 112) += *(_DWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 80) += *(_QWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 116) += *(_DWORD *)(a1 + 204);
    *(_QWORD *)(a1 + 88) += *(_QWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 120) += *(_DWORD *)(a1 + 208);
    result = *(CGlobalComposition **)(a1 + 184);
    *(_QWORD *)(a1 + 96) += result;
  }
  return result;
}
