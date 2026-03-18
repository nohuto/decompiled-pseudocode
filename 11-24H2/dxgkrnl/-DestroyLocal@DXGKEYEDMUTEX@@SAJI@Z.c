/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x140394B7C
 * Callers:
 *     ?VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402222A0 (-VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B5DC0 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     DxgkDestroyKeyedMutex @ 0x140394A50 (DxgkDestroyKeyedMutex.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140395150 (DxgkOpenResourceFromNtHandleInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x140394DD0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x140394F94 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1)
{
  __int64 v1; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v3; // rdi
  unsigned int v4; // ecx
  __int64 v5; // r9
  unsigned int v6; // edx
  int v7; // edx
  DXGKEYEDMUTEX *v8; // rsi
  unsigned int v9; // ecx
  _BYTE v11[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v3 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4202;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v11, Current);
  v4 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( v4 >= *((_DWORD *)v3 + 74) )
    goto LABEL_19;
  v5 = *((_QWORD *)v3 + 35);
  v6 = *(_DWORD *)(v5 + 16LL * v4 + 8);
  if ( (unsigned int)v1 >> 30 != ((v6 >> 5) & 3) )
    goto LABEL_19;
  if ( (v6 & 0x2000) != 0 )
    goto LABEL_19;
  v7 = v6 & 0x1F;
  if ( !v7 )
    goto LABEL_19;
  if ( v7 != 9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  v8 = *(DXGKEYEDMUTEX **)(v5 + 16LL * v4);
  if ( !v8 )
  {
LABEL_19:
    WdLogSingleEntry2(3LL, v1, -1073741811LL);
    WdLogGlobalForLineNumber = 4217;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
    return 3221225485LL;
  }
  if ( v4 < *((_DWORD *)v3 + 74) )
  {
    v9 = *(_DWORD *)(v5 + 16LL * v4 + 8);
    if ( (unsigned int)v1 >> 30 == ((v9 >> 5) & 3) && (v9 & 0x2000) == 0 && (v9 & 0x1F) != 0 )
      *(_DWORD *)(v5 + 16 * (((unsigned __int64)(unsigned int)v1 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v8, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle(v1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4230;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"bStatus", 4230LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
