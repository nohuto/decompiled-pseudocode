/*
 * XREFs of ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802D9270
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802D8534 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027EEE4 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CHolographicInteropTarget@@KAPEAX_K@Z @ 0x18027FCF4 (--2CHolographicInteropTarget@@KAPEAX_K@Z.c)
 *     ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z @ 0x1802D9684 (-Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Create(
        struct CComposition *a1,
        struct _LUID *a2,
        struct CHolographicInteropTarget **a3)
{
  CHolographicInteropTarget *v6; // rax
  CHolographicInteropTarget *v7; // rax
  CHolographicInteropTarget *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx

  v6 = (CHolographicInteropTarget *)CHolographicInteropTarget::operator new();
  if ( v6 && (v7 = CHolographicInteropTarget::CHolographicInteropTarget(v6, a1), (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CHolographicInteropTarget *)((char *)v7 + 8));
    v9 = CHolographicInteropTarget::Initialize(v8, *a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x19u, 0LL);
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v10;
}
