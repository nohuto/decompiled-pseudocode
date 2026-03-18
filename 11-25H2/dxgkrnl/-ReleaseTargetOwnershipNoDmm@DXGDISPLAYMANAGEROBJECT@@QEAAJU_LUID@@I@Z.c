/*
 * XREFs of ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x140408C38
 * Callers:
 *     ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1402587D4 (-ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Remove@?$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x14005F338 (-Remove@-$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebp
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  _BYTE v9[16]; // [rsp+50h] [rbp-48h] BYREF
  void **v10; // [rsp+60h] [rbp-38h]
  __int128 v11; // [rsp+68h] [rbp-30h]
  struct _LUID v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+80h] [rbp-18h]
  LONG HighPart; // [rsp+ACh] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v6 = 0;
  if ( *((_QWORD *)this + 9) )
  {
    v12 = a2;
    v10 = &SetElement::`vftable';
    v13 = v4;
    v11 = 0LL;
    v7 = (void (__fastcall ***)(_QWORD, __int64))Set<DXGTARGETENTRY>::Remove((__int64)this + 80);
    if ( v7 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
      (**v7)(v7, 1LL);
    }
    else
    {
      WdLogSingleEntry3(2LL, v4, HighPart, a2.LowPart);
      WdLogGlobalForLineNumber = 200;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to find owned target 0x%I64x on adapter 0x%I64x-%I64x",
        v4,
        HighPart,
        a2.LowPart,
        0LL,
        0LL);
      v6 = -1073741275;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 192;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DispMgr object called after being invalidated.",
      192LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -2147483611;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return v6;
}
