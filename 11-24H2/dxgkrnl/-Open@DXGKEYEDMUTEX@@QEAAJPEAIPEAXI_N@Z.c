/*
 * XREFs of ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B601C
 * Callers:
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1401F4C90 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B5F28 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140395150 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1403B1DC4 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     DxgkCreateKeyedMutex2 @ 0x1403BBDF0 (DxgkCreateKeyedMutex2.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403BC35C (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E5760 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x14003932C (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140041BF8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x14022D260 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Open(DXGKEYEDMUTEX *this, unsigned int *a2, char *a3, unsigned int a4, bool a5)
{
  unsigned __int64 v5; // rdi
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r15
  _QWORD *v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // rax
  int v14; // edx
  unsigned int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // r14
  void *v19; // r9
  __int64 CurrentProcess; // rax
  struct DXGGLOBAL *Global; // rax
  int v22; // ebx
  _BYTE v23[16]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v24[32]; // [rsp+60h] [rbp-48h] BYREF

  v5 = a4;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(3LL, a2, CurrentProcess);
    WdLogGlobalForLineNumber = 4261;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v23, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( !(_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_5;
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 4331;
    goto LABEL_17;
  }
  v16 = *((_DWORD *)this + 42);
  if ( v16 )
  {
    if ( v16 != (_DWORD)v5 )
    {
      WdLogSingleEntry4(3LL, this, v5, v16, -1073741811LL);
      WdLogGlobalForLineNumber = 4323;
LABEL_17:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
      return 3221225485LL;
    }
  }
  else
  {
    if ( !a3 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 4313;
      goto LABEL_17;
    }
    if ( *((_QWORD *)this + 20) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4280;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_pPrivateRuntimeData == NULL",
        4280LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v18 = v5;
    v19 = (void *)operator new[](v5, 0x4B677844u, 256LL);
    *((_QWORD *)this + 20) = v19;
    if ( !v19 )
    {
      v17 = -1073741801;
      WdLogSingleEntry3(6LL, this, v18, -1073741801LL);
      WdLogGlobalForLineNumber = 4289;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"KeyedMutex 0x%I64x: Out of memory allocating m_PrivateRuntimeData of size 0x%I64x, returning 0x%I64x",
        (__int64)this,
        v18,
        -1073741801LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
      return v17;
    }
    *((_DWORD *)this + 42) = v5;
    if ( &a3[v5] < a3 || (unsigned __int64)&a3[v5] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v19, a3, v5);
  }
LABEL_5:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  DXGKEYEDMUTEX::AcquireReference(this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24, Current);
  v11 = (_QWORD *)((char *)Current + 280);
  v12 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 9LL, 0LL, 0);
  if ( !v12 )
  {
    v17 = -1073741801;
    WdLogSingleEntry2(6LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 4346;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"pKeyedMutex 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
      (__int64)this,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    DXGKEYEDMUTEX::ReleaseReference(this);
LABEL_20:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
    return v17;
  }
  if ( *((_BYTE *)this + 176) )
  {
    if ( !a5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4357;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"OpenForUserMode == true", 4357LL, 0LL, 0LL, 0LL, 0LL);
    }
    Global = DXGGLOBAL::GetGlobal();
    v22 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenKeyedMutex(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 210),
            Current,
            this,
            v12);
    if ( v22 < 0 )
    {
      DXGPROCESS::FreeHandleSafe(Current, v12);
      v17 = v22;
      goto LABEL_20;
    }
  }
  if ( a5 )
  {
    v13 = (v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *((_DWORD *)Current + 74) )
    {
      v14 = *(_DWORD *)(*v11 + 16 * v13 + 8);
      if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(*v11 + 16 * v13 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
        *(_DWORD *)(*v11 + 16 * (((unsigned __int64)v12 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
  *a2 = v12;
  return 0LL;
}
