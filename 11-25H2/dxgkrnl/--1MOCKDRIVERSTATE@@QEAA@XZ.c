/*
 * XREFs of ??1MOCKDRIVERSTATE@@QEAA@XZ @ 0x1400655B4
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x14018B39C (--1DXGADAPTER@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall MOCKDRIVERSTATE::~MOCKDRIVERSTATE(MOCKDRIVERSTATE *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)this;
  if ( v2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
}
