/*
 * XREFs of ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1403AFF30
 * Callers:
 *     ?DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z @ 0x1403AFEE0 (-DxgkDisplayManagerDeleteProcedure@@YAXPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x14004DE08 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 *     ?Remove@?$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x14005FBF0 (-Remove@-$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403B00D8 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::Invalidate(DXGDISPLAYMANAGEROBJECT *this)
{
  char *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rsi
  _BYTE v4[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( !*((_QWORD *)this + 9) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 616;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_Object != nullptr", 616LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 64) = 0;
  while ( 1 )
  {
    v2 = (char *)this + 80;
    if ( *((DXGDISPLAYMANAGEROBJECT **)this + 13) == (DXGDISPLAYMANAGEROBJECT *)((char *)this + 104) )
      break;
    v3 = (void (__fastcall ***)(_QWORD, __int64))Set<DXGTARGETENTRY>::Remove((__int64)v2);
    if ( !v3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 624;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pEntry", 624LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
    DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v3, 0LL, this, 0LL, 0);
    if ( v3 )
      (**v3)(v3, 1LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 10) + 24LL))(v2);
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)this + 136);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v4);
}
