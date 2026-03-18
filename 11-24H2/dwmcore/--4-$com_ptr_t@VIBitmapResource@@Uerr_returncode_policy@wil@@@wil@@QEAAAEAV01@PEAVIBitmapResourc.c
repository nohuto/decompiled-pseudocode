/*
 * XREFs of ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x1801B1590
 * Callers:
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B0F38 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801D3160 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CEffectIntermediateProducer **__fastcall wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(
        CEffectIntermediateProducer **a1,
        CMILRefCountImpl *a2)
{
  CEffectIntermediateProducer *v2; // rbx
  __int64 (__fastcall *v4)(CMILRefCountImpl *); // rax
  __int64 (__fastcall *v5)(CEffectIntermediateProducer *); // rax

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
    if ( v4 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(a2);
    else
      v4(a2);
  }
  if ( v2 )
  {
    v5 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v2 + 16LL);
    if ( v5 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v2);
    else
      v5(v2);
  }
  return a1;
}
