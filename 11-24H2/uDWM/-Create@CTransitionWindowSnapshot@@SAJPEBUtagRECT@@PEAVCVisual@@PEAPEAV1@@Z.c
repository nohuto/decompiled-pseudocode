/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180003754
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180044D30 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 * Callees:
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180003824 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180003860 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        const struct tagRECT *a1,
        struct CVisual *a2,
        struct CTransitionWindowSnapshot **a3)
{
  CTransitionWindowSnapshot *v6; // rax
  CTransitionWindowSnapshot *v7; // rax
  struct CTransitionWindowSnapshot *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CTransitionWindowSnapshot *)DefaultHeap::AllocClear(0x140uLL);
  if ( v6 && (v7 = CTransitionWindowSnapshot::CTransitionWindowSnapshot(v6), (v8 = v7) != 0LL) )
  {
    v9 = CTransitionWindowSnapshot::Initialize(v7, a1, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x42u, 0LL);
    }
    else
    {
      *a3 = v8;
      CMILRefCountBase::AddRef(v8);
    }
    CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x40u, 0LL);
  }
  return v10;
}
