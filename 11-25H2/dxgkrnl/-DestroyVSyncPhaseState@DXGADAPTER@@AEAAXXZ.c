/*
 * XREFs of ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x14018C858
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x14018B39C (--1DXGADAPTER@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::DestroyVSyncPhaseState(DXGADAPTER *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  v2 = (void *)*((_QWORD *)this + 538);
  if ( v2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  v3 = (void *)*((_QWORD *)this + 539);
  if ( v3 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 540);
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  v5 = (void *)*((_QWORD *)this + 541);
  if ( v5 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  v6 = (void *)*((_QWORD *)this + 542);
  if ( v6 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  v7 = (void *)*((_QWORD *)this + 543);
  if ( v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  v8 = (void *)*((_QWORD *)this + 550);
  if ( v8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  v9 = (void *)*((_QWORD *)this + 549);
  if ( v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  v10 = (void *)*((_QWORD *)this + 551);
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
}
