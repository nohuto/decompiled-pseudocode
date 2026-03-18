/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1401D34A8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140015E68 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x14004683C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1401DD738 (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x140336A20 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  DXGPROCESS *Current; // rax
  int v11; // ebx
  _BYTE v12[16]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v5 = operator new(0x50uLL, 0x4B677844u, 64LL);
  v6 = v5;
  if ( !v5 )
  {
    v11 = -1073741801;
    WdLogSingleEntry2(6LL, v2, -1073741801LL);
    WdLogGlobalForLineNumber = 2487;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed the allocate m_pDxgmmsExport (%d), returning 0x%I64x",
      v2,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v11;
  }
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_BYTE *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0LL;
  *(_OWORD *)(v5 + 24) = 0LL;
  *(_OWORD *)(v5 + 40) = 0LL;
  v7 = DXGMMS_EXPORT::Initialize((DXGMMS_EXPORT *)v5, v2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v12);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    DXGGLOBAL::m_pDxgmmsExport[v2] = v6;
    *((_QWORD *)this + v2 + 32) = *(_QWORD *)(v6 + 64);
    *((_QWORD *)this + v2 + 34) = *(_QWORD *)(v6 + 56);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 432, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)this + 112);
    v9 = (_QWORD *)*((_QWORD *)this + 52);
    v13[0] = (char *)this + 416;
    while ( 1 )
    {
      v13[1] = v9;
      Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v13);
      if ( !Current )
        break;
      LODWORD(v8) = DXGPROCESS::DeferredInitialize(Current, v2);
      if ( (int)v8 < 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)this + 112);
        ExReleasePushLockSharedEx((char *)this + 432, 0LL);
        KeLeaveCriticalRegion();
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
        return (unsigned int)v8;
      }
      v9 = (_QWORD *)*v9;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 112);
    ExReleasePushLockSharedEx((char *)this + 432, 0LL);
    KeLeaveCriticalRegion();
    v11 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 171), v2);
    if ( v11 >= 0 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
    return (unsigned int)v11;
  }
  WdLogSingleEntry2(6LL, v2, v7);
  WdLogGlobalForLineNumber = 2496;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed the initialize m_pDxgmmsExport (%d), returning 0x%I64x",
    v2,
    v8,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v8;
}
