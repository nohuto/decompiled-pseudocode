/*
 * XREFs of ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180076BF0
 * Callers:
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180075F80 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18021EFEC (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CEffectIntermediateProducer **__fastcall wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=(
        CEffectIntermediateProducer **a1,
        CMILRefCountImpl *a2)
{
  CEffectIntermediateProducer *v2; // rbx
  unsigned int (__fastcall *v4)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v5)(CEffectIntermediateProducer *); // rax

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v4 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)a2 + 8LL);
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
