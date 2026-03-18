/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1401CE15C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x140046E6C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1401D84A8 (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x140348F20 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  DXGPROCESS *Current; // rax
  int v13; // ebx
  _BYTE v14[16]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-28h] BYREF

  v4 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v7 = operator new(0x50uLL, 0x4B677844u, 64LL, a4);
  v8 = v7;
  if ( !v7 )
  {
    v13 = -1073741801;
    WdLogSingleEntry2(6LL, v4, -1073741801LL);
    WdLogGlobalForLineNumber = 2486;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed the allocate m_pDxgmmsExport (%d), returning 0x%I64x",
      v4,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v13;
  }
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_BYTE *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0LL;
  *(_OWORD *)(v7 + 24) = 0LL;
  *(_OWORD *)(v7 + 40) = 0LL;
  v9 = DXGMMS_EXPORT::Initialize((DXGMMS_EXPORT *)v7, v4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v14);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    DXGGLOBAL::m_pDxgmmsExport[v4] = v8;
    *((_QWORD *)this + v4 + 32) = *(_QWORD *)(v8 + 64);
    *((_QWORD *)this + v4 + 34) = *(_QWORD *)(v8 + 56);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 432, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)this + 112);
    v11 = (_QWORD *)*((_QWORD *)this + 52);
    v15[0] = (char *)this + 416;
    while ( 1 )
    {
      v15[1] = v11;
      Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v15);
      if ( !Current )
        break;
      LODWORD(v10) = DXGPROCESS::DeferredInitialize(Current, v4);
      if ( (int)v10 < 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)this + 112);
        ExReleasePushLockSharedEx((char *)this + 432, 0LL);
        KeLeaveCriticalRegion();
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
        return (unsigned int)v10;
      }
      v11 = (_QWORD *)*v11;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 112);
    ExReleasePushLockSharedEx((char *)this + 432, 0LL);
    KeLeaveCriticalRegion();
    v13 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 167), v4);
    if ( v13 >= 0 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
    return (unsigned int)v13;
  }
  WdLogSingleEntry2(6LL, v4, v9);
  WdLogGlobalForLineNumber = 2495;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed the initialize m_pDxgmmsExport (%d), returning 0x%I64x",
    v4,
    v10,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v10;
}
