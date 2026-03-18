/*
 * XREFs of ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x1801BF030
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D5FE0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180086B40 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x18009309C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rbx
  __int64 v6; // rbp
  unsigned int v7; // r15d
  __int64 result; // rax
  __int64 v9; // r14
  char v10; // al
  CD2DLayer *v11; // rcx
  int v12; // eax
  int v13; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 94);
  v6 = -858993459 * (unsigned int)((__int64)(*((_QWORD *)this + 337) - *((_QWORD *)this + 336)) >> 3)
     - *(_DWORD *)(v4 - 176);
  v7 = 0;
  while ( 1 )
  {
    result = (unsigned int)v3;
    if ( !*(_QWORD *)(v4 - 160) )
      break;
    v9 = *((_QWORD *)this + 336) + 40 * v6;
    v10 = 0;
    v11 = *(CD2DLayer **)(v9 + 24);
    if ( v11 )
    {
      v12 = CD2DLayer::ApplyState(v11, this, a3);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x248u, 0LL);
        goto LABEL_13;
      }
      *(_QWORD *)(v9 + 24) = 0LL;
      v10 = 1;
      --*(_QWORD *)(v4 - 160);
    }
    if ( *(_BYTE *)(v9 + 36) )
    {
      if ( v10 )
      {
        v13 = CCpuClipAntialiasSinkContext::FlushDrawList(*(CCpuClipAntialiasSinkContext **)(v4 - 16), this, v7);
        v3 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x264u, 0LL);
          goto LABEL_13;
        }
      }
      ++v7;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  if ( v3 < 0 )
  {
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x10C0u, 0LL);
    return (unsigned int)v3;
  }
  if ( *((_BYTE *)this + 8066) )
    *(_WORD *)((char *)this + 8065) = 1;
  return result;
}
