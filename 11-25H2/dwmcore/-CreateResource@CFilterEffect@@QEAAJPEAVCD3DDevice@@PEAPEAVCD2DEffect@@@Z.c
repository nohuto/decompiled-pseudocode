/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18029D314
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x1802251C0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180116C10 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct CD3DDevice *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rax
  struct CD2DEffect *v4; // rdi
  const struct _GUID *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct CD2DEffect *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0LL;
  v11 = 0LL;
  v7 = (const struct _GUID *)(*(__int64 (__fastcall **)(CFilterEffect *))(v3 + 200))(this);
  v8 = CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)a2 + 16), v7, &v11);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2FEu, 0LL);
    v4 = v11;
  }
  else
  {
    *a3 = v11;
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v4);
  return v9;
}
