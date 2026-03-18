/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x14018B39C
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x140072814 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MOCKDRIVERSTATE@@QEAA@XZ @ 0x1400655B4 (--1MOCKDRIVERSTATE@@QEAA@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1400655F4 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x14006561C (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x14018C6D8 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x14018C858 (-DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(DXGADAPTER *this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rdi

  DXGADAPTER::Destroy(this);
  v2 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 390);
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 390) = 0LL;
  }
  v3 = (ADAPTER_RENDER *)*((_QWORD *)this + 391);
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 391) = 0LL;
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 35);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 35));
    *((_QWORD *)this + 35) = 0LL;
  }
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 403);
  if ( v6 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
    *((_QWORD *)this + 403) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 553);
  if ( v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  if ( *((_QWORD *)this + 374) )
  {
    DXGADAPTER::DestroyPhysicalAdapterData(this);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 374));
    *((_QWORD *)this + 374) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 621);
  if ( v8 )
  {
    MOCKDRIVERSTATE::~MOCKDRIVERSTATE(*((MOCKDRIVERSTATE **)this + 621));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  }
  DXGADAPTER::DestroyVSyncPhaseState(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 590));
  *((_QWORD *)this + 2) = 0LL;
}
