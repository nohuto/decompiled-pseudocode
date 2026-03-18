/*
 * XREFs of ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z @ 0x18018EC3C
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18018E664 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18018DEA0 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::Initialize(CD3DDynamicAppendBuffer *this, struct CD3DDevice *a2, UINT a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  *(_QWORD *)this = a2;
  v3 = CD3DDynamicAppendBuffer::EnsureByteSpace(this, a3, 1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x18u, 0LL);
  return v4;
}
