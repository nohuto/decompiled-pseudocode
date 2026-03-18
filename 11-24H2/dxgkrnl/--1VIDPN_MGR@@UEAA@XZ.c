/*
 * XREFs of ??1VIDPN_MGR@@UEAA@XZ @ 0x14008E23C
 * Callers:
 *     ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x14008EB90 (--_GVIDPN_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14006015C (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ @ 0x140060904 (-Clear@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@QEAAXXZ @ 0x140061014 (-Clear@-$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDeleter@UCOMM.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x140061ECC (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x140062EC0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1400731D0 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x14008F084 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ??1Lockable@@UEAA@XZ @ 0x14018B0D4 (--1Lockable@@UEAA@XZ.c)
 *     ?MonitorUnregisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOREVENT__@@@Z @ 0x14018BD78 (-MonitorUnregisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOREVENT__@@@Z.c)
 *     ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x14025F6D4 (-ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 */

void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this)
{
  PERESOURCE *ContainingAdapter; // rax
  DMMVIDEOPRESENTTARGETSET **v3; // rsi
  _QWORD *v4; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  struct HDXGMONITOR__ *v6; // rbp
  struct DXGADAPTER *v7; // rax
  void *v8; // r8
  struct HDXGMONITOREVENT__ *v9; // rbp
  struct ADAPTER_DISPLAY **v10; // rdi
  int v11; // ebp
  struct DXGADAPTER *v12; // rax
  __int64 *v13; // r14
  DXGDIAGNOSTICS *v14; // rcx

  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 11) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  ContainingAdapter = (PERESOURCE *)VIDPN_MGR::GetContainingAdapter(this);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(ContainingAdapter)
    && !*((_BYTE *)VIDPN_MGR::GetContainingAdapter(this) + 208) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 76;
  }
  if ( *((VIDPN_MGR **)this + 20) != (VIDPN_MGR *)((char *)this + 160) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 84;
  }
  v3 = (DMMVIDEOPRESENTTARGETSET **)((char *)this + 120);
  v4 = (_QWORD *)(*((_QWORD *)this + 15) + 24LL);
  if ( (_QWORD *)*v4 != v4 )
  {
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v4 - 8LL);
    if ( *v4 != 8LL )
    {
      do
      {
        v6 = (struct HDXGMONITOR__ *)*((_QWORD *)NextTarget + 14);
        if ( v6 )
        {
          DMMVIDEOPRESENTTARGET::SetConnectedMonitor(NextTarget, 0LL);
          v7 = VIDPN_MGR::GetContainingAdapter(this);
          MonitorReleaseMonitorHandle(v7, v6, v8);
        }
        DMMVIDEOPRESENTTARGET::ReleaseDisplayManagerObject(NextTarget);
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*v3, NextTarget);
      }
      while ( NextTarget );
    }
  }
  v9 = (struct HDXGMONITOREVENT__ *)*((_QWORD *)this + 66);
  v10 = (struct ADAPTER_DISPLAY **)((char *)this + 8);
  if ( !v9 )
    goto LABEL_16;
  if ( !*v10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v11 = MonitorUnregisterMonitorEventCallback(*v10, v9);
  if ( v11 < 0 )
  {
    v12 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 118;
    v13 = (__int64 *)((char *)this + 112);
    *((_DWORD *)this + 24) = v11;
  }
  else
  {
LABEL_16:
    v14 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 70);
    if ( v14 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v14);
    v13 = (__int64 *)((char *)this + 112);
    *(_QWORD *)(*((_QWORD *)this + 14) + 88LL) = 0LL;
    *((_QWORD *)*v3 + 11) = 0LL;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 64));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 63));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 62));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 61));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 60));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 59));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 58));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 57));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 56));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 55));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 54));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 53));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 52));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 51));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 50));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 49));
  *((_QWORD *)this + 41) = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  *((_QWORD *)this + 42) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)this + 336);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 40, 0LL);
  *((_QWORD *)this + 32) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)this + 33) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Clear((__int64)this + 264);
  *((_QWORD *)this + 24) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)this + 25) = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::`vftable';
  DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::Clear((__int64)this + 200);
  *((_QWORD *)this + 17) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)this + 18) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Clear((__int64)this + 144);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 16, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)this + 15, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v13, 0LL);
  Lockable::~Lockable((VIDPN_MGR *)((char *)this + 16));
  *v10 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
}
