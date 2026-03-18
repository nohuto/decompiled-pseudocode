/*
 * XREFs of ??1?$com_ptr_t@VCInteractionTracker@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020CD9C
 * Callers:
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1802A7298 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCReso.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

void __fastcall wil::com_ptr_t<CInteractionTracker,wil::err_returncode_policy>::~com_ptr_t<CInteractionTracker,wil::err_returncode_policy>(
        CResource **a1)
{
  CResource *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v1);
    else
      v2();
  }
}
