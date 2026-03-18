/*
 * XREFs of ?Pop@COcclusionContext@@UEAAJXZ @ 0x180206A20
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopClip@COcclusionContext@@AEAAXXZ @ 0x180206ABC (-PopClip@COcclusionContext@@AEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::Pop(COcclusionContext *this)
{
  int v1; // eax
  unsigned int v2; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v1 = *((_DWORD *)this + 428);
  v2 = 0;
  if ( v1 )
  {
    *((_DWORD *)this + 428) = v1 - 1;
    return v2;
  }
  v4 = *((_DWORD *)this + 440);
  if ( !v4 )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x4BBu, 0LL);
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 219) + 4LL * (unsigned int)(v4 - 1)) )
  {
LABEL_11:
    COcclusionContext::PopClip(this);
    return v2;
  }
  v5 = *((_DWORD *)this + 440);
  if ( v5 )
    *((_DWORD *)this + 440) = v5 - 1;
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
    *((_DWORD *)this + 10) = v6 - 1;
  return v2;
}
