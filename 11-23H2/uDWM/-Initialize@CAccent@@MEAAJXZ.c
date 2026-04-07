/*
 * XREFs of ?Initialize@CAccent@@MEAAJXZ @ 0x180021ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 76) = 6;
  *((_BYTE *)this + 320) = 0;
  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x60u, 0LL);
  return v2;
}
