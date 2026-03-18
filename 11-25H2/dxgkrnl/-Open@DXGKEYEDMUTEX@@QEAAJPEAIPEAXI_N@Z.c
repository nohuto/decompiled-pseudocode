/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402FF39C
 * Callers:
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1401EEA34 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402FF2A8 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x14039EE80 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1403BDF5C (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     DxgkCreateKeyedMutex2 @ 0x1403C77A0 (DxgkCreateKeyedMutex2.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403C7D0C (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403EBE50 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1400397D0 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140042268 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x140226974 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4, bool a5)
{
  unsigned __int64 v5; // rdi
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v11; // r9
  _QWORD *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rax
  int v15; // edx
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // r14
  void *v20; // r9
  __int64 CurrentProcess; // rax
  struct DXGGLOBAL *Global; // rax
  int v23; // ebx
  _BYTE v24[16]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v25[32]; // [rsp+60h] [rbp-48h] BYREF

  v5 = a4;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(3LL, a2, CurrentProcess);
    WdLogGlobalForLineNumber = 4256;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v24, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_5;
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 4326;
    goto LABEL_17;
  }
  v17 = *((_DWORD *)this + 42);
  if ( v17 )
  {
    if ( v17 != (_DWORD)v5 )
    {
      WdLogSingleEntry4(3LL, this, v5, v17, -1073741811LL);
      WdLogGlobalForLineNumber = 4318;
LABEL_17:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
      return 3221225485LL;
    }
  }
  else
  {
    if ( !a3 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 4308;
      goto LABEL_17;
    }
    if ( *((_QWORD *)this + 20) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4275;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_pPrivateRuntimeData == NULL",
        4275LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = v5;
    v20 = (void *)operator new[](v5, 0x4B677844u, 256LL, v11);
    *((_QWORD *)this + 20) = v20;
    if ( !v20 )
    {
      v18 = -1073741801;
      WdLogSingleEntry3(6LL, this, v19, -1073741801LL);
      WdLogGlobalForLineNumber = 4284;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"KeyedMutex 0x%I64x: Out of memory allocating m_PrivateRuntimeData of size 0x%I64x, returning 0x%I64x",
        (__int64)this,
        v19,
        -1073741801LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
      return v18;
    }
    *((_DWORD *)this + 42) = v5;
    if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, a3, v5);
  }
LABEL_5:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  DXGKEYEDMUTEX::AcquireReference(this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25, Current);
  v12 = (_QWORD *)((char *)Current + 280);
  v13 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 9LL, 0LL, 0);
  if ( !v13 )
  {
    v18 = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 4341;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"pKeyedMutex 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    DXGKEYEDMUTEX::ReleaseReference(this);
LABEL_20:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
    return v18;
  }
  if ( *((_BYTE *)this + 176) )
  {
    if ( !a5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4352;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"OpenForUserMode == true", 4352LL, 0LL, 0LL, 0LL, 0LL);
    }
    Global = DXGGLOBAL::GetGlobal();
    v23 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 206),
            Current,
            this,
            v13);
    if ( v23 < 0 )
    {
      DXGPROCESS::FreeResourceHandleNoRefSafe(Current, v13);
      v18 = v23;
      goto LABEL_20;
    }
  }
  if ( a5 )
  {
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *((_DWORD *)Current + 74) )
    {
      v15 = *(_DWORD *)(*v12 + 16 * v14 + 8);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(*v12 + 16 * v14 + 8) & 0x60) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
        *(_DWORD *)(*v12 + 16 * (((unsigned __int64)v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
  *a2 = v13;
  return 0LL;
}
