/*
 * XREFs of ?Create@CGlobalMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180254910
 * Callers:
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801BD204 (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CMit@@IEAAJXZ @ 0x18022F01C (-Initialize@CMit@@IEAAJXZ.c)
 *     ??0CGlobalMit@@IEAA@PEAVCComposition@@@Z @ 0x1802549C4 (--0CGlobalMit@@IEAA@PEAVCComposition@@@Z.c)
 *     ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x1802639B0 (--_GCGlobalMit@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CGlobalMit::Create(struct CComposition *a1, struct CGlobalMit **a2)
{
  CGlobalMit *v4; // rax
  CMit *v5; // rax
  CGlobalMit *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v4 = (CGlobalMit *)MIDL_user_allocate(0x98uLL);
  if ( v4 && (v5 = CGlobalMit::CGlobalMit(v4, a1), (v6 = v5) != 0LL) )
  {
    v7 = CMit::Initialize(v5);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x2Fu, 0LL);
      CGlobalMit::`scalar deleting destructor'(v6, 1u);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x2Du, 0LL);
  }
  return v8;
}
