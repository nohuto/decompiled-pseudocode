/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x18013984C
 * Callers:
 *     ??_ECGlobalDrawingContext@@UEAAPEAXI@Z @ 0x180139800 (--_ECGlobalDrawingContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180057310 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800BD98C (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180139778 (--1CScopedClipStack@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAA@XZ @ 0x180139948 (--1-$unique_ptr@VCVisualTreePath@@U-$default_delete@VCVisualTreePath@@@std@@@std@@QEAA@XZ.c)
 *     ??1ClipPlaneIterator@@QEAA@XZ @ 0x1801399D4 (--1ClipPlaneIterator@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this)
{
  CD3DDevice *v2; // rcx

  CDrawingContext::PopAllStacks(this);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)this + 999);
  std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>((char *)this + 7968);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawingContext *)((char *)this + 3440));
  ClipPlaneIterator::~ClipPlaneIterator((CDrawingContext *)((char *)this + 3312));
  operator delete(*((void **)this + 410));
  operator delete(*((void **)this + 405));
  operator delete(*((void **)this + 398));
  operator delete(*((void **)this + 395));
  CScopedClipStack::~CScopedClipStack((CDrawingContext *)((char *)this + 744));
  operator delete(*((void **)this + 90));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 656);
  CLightStack::~CLightStack((CDrawingContext *)((char *)this + 424));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 360);
  operator delete(*((void **)this + 42));
  operator delete(*((void **)this + 39));
  operator delete(*((void **)this + 36));
  operator delete(*((void **)this + 33));
  v2 = (CD3DDevice *)*((_QWORD *)this + 5);
  if ( v2 )
    CD3DDevice::Release(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
}
