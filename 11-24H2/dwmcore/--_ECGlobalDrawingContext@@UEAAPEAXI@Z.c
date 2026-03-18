/*
 * XREFs of ??_ECGlobalDrawingContext@@UEAAPEAXI@Z @ 0x180139800
 * Callers:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801AFCA0 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18013984C (--1CDrawingContext@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CGlobalDrawingContext *__fastcall CGlobalDrawingContext::`vector deleting destructor'(
        CGlobalDrawingContext *this,
        char a2)
{
  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 8080LL);
    else
      operator delete(this);
  }
  return this;
}
