/*
 * XREFs of ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1802274E4
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadow::Initialize(
        CProjectedShadow *this,
        struct CProjectedShadowScene *a2,
        struct CProjectedShadowCaster *a3,
        struct CProjectedShadowReceiver *a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 Count; // rax
  unsigned __int64 v10; // rdx
  CPtrArrayBase *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax
  CPtrArrayBase *v15; // rcx
  int v16; // eax
  unsigned __int64 v18; // rax
  CPtrArrayBase *v19; // rcx
  int v20; // eax

  v4 = (_QWORD *)((char *)this + 32);
  Count = CPtrArray<CVisual>::GetCount((_QWORD *)this + 4);
  v12 = CPtrArrayBase::InsertAt(v11, v10, Count);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x47u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 9) = a2;
    v14 = CPtrArray<CVisual>::GetCount(v4);
    v16 = CPtrArrayBase::InsertAt(v15, (unsigned __int64)a3, v14);
    v13 = v16;
    if ( v16 >= 0 )
    {
      *((_QWORD *)this + 10) = a3;
      v18 = CPtrArray<CVisual>::GetCount(v4);
      v20 = CPtrArrayBase::InsertAt(v19, (unsigned __int64)a4, v18);
      v13 = v20;
      if ( v20 >= 0 )
        *((_QWORD *)this + 11) = a4;
      else
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x4Du, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x4Au, 0LL);
    }
  }
  return v13;
}
