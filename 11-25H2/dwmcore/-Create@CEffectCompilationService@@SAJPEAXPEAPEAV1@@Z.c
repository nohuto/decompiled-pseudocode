/*
 * XREFs of ?Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z @ 0x180229B04
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??0CEffectCompilationService@@AEAA@PEAX@Z @ 0x180268F64 (--0CEffectCompilationService@@AEAA@PEAX@Z.c)
 */

__int64 __fastcall CEffectCompilationService::Create(void *a1, struct CEffectCompilationService **a2)
{
  unsigned int v4; // edi
  CEffectCompilationService *v5; // rax
  CEffectCompilationService *v7; // rax
  CEffectCompilationService *v8; // rsi

  v4 = 0;
  v5 = (CEffectCompilationService *)DefaultHeap::AllocClear(0xF8uLL);
  if ( v5 && (v7 = CEffectCompilationService::CEffectCompilationService(v5, a1), (v8 = v7) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CEffectCompilationService *)((char *)v7 + 8));
    *a2 = v8;
    CMILRefCountImpl::AddReference((CEffectCompilationService *)((char *)v8 + 8));
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v8);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x39u, 0LL);
  }
  return v4;
}
