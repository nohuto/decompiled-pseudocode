/*
 * XREFs of ?PopLight@CDrawingContext@@AEAAJXZ @ 0x1801EFEA8
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180082B30 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x1801EFF04 (-Pop@CLightStack@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::PopLight(CDrawingContext *this)
{
  int v1; // eax
  int v2; // eax
  unsigned int v3; // ebx

  v1 = *((_DWORD *)this + 68);
  if ( v1 )
    *((_DWORD *)this + 68) = v1 - 1;
  v2 = CLightStack::Pop((CDrawingContext *)((char *)this + 424));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x18E7u, 0LL);
  return v3;
}
