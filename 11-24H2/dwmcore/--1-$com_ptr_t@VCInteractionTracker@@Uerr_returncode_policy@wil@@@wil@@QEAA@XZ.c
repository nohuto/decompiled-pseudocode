/*
 * XREFs of ??1?$com_ptr_t@VCInteractionTracker@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180200C8C
 * Callers:
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18029D4C4 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCReso.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

void __fastcall wil::com_ptr_t<CInteractionTracker,wil::err_returncode_policy>::~com_ptr_t<CInteractionTracker,wil::err_returncode_policy>(
        CCachedVisualImage **a1,
        __int64 a2,
        __int64 a3)
{
  CCachedVisualImage *v3; // rcx
  void (*v4)(void); // rax

  v3 = *a1;
  if ( v3 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v3,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        a3);
    else
      v4();
  }
}
