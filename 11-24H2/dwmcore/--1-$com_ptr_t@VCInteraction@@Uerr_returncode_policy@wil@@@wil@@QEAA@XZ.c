/*
 * XREFs of ??1?$com_ptr_t@VCInteraction@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E827C
 * Callers:
 *     ??R?$default_delete@VCChainingHelper@@@std@@QEBAXPEAVCChainingHelper@@@Z @ 0x1800E8758 (--R-$default_delete@VCChainingHelper@@@std@@QEBAXPEAVCChainingHelper@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall wil::com_ptr_t<CInteraction,wil::err_returncode_policy>::~com_ptr_t<CInteraction,wil::err_returncode_policy>(
        CGlobalDrawingContext **a1)
{
  CGlobalDrawingContext *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v1);
    }
    else if ( (char *)v2 == (char *)CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v1);
    }
    else if ( (char *)v2 == (char *)CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v1);
    }
    else
    {
      v2();
    }
  }
}
