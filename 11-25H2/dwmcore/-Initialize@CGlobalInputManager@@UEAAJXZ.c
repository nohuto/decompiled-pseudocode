/*
 * XREFs of ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x1801BCA10
 * Callers:
 *     ?Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z @ 0x1800FD114 (-Create@CGlobalInputManager@@SAJPEAVCComposition@@PEAPEAVCInputManager@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801BCAB0 (-Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Initialize@CInputManager@@UEAAJXZ @ 0x1801BCB80 (-Initialize@CInputManager@@UEAAJXZ.c)
 *     ?Reset@CKstBase@@QEAAJPEBG@Z @ 0x18025B710 (-Reset@CKstBase@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CGlobalInputManager::Initialize(struct CComposition **this)
{
  CKstBase **v1; // rsi
  int v3; // eax
  const unsigned __int16 *v4; // rdx
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax

  v1 = this + 38;
  v3 = CKst::Create(this[2], this + 38);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x32u, 0LL);
  }
  else
  {
    v6 = CKstBase::Reset(*v1, v4);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x36u, 0LL);
    }
    else
    {
      v7 = CInputManager::Initialize((CInputManager *)this);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x3Au, 0LL);
    }
  }
  return v5;
}
