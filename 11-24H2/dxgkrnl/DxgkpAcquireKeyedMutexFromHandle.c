/*
 * XREFs of DxgkpAcquireKeyedMutexFromHandle @ 0x1403E58E8
 * Callers:
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021EE10 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227730 (-VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E5760 (-VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x140041BF8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkpAcquireKeyedMutexFromHandle(struct DXGPROCESS *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // edx
  int *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-58h]
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v13, a1);
  v4 = 0LL;
  v5 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( v5 >= *((_DWORD *)a1 + 74) )
    goto LABEL_7;
  v6 = *((_QWORD *)a1 + 35);
  if ( (((unsigned int)v2 >> 25) & 0x60) != (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v6 + 16LL * v5 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v7 = *(_DWORD *)(v6 + 16LL * v5 + 8) & 0x1F;
  if ( !v7 )
    goto LABEL_7;
  if ( v7 != 13 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 7929;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid shared vm object handle: 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_8:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return 0LL;
  }
  v9 = *(int **)(v6 + 16LL * v5);
  if ( !v9 )
    goto LABEL_7;
  if ( *v9 != 4 )
  {
    WdLogSingleEntry1(2LL, *v9);
    v12 = *v9;
    WdLogGlobalForLineNumber = 7934;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid shared vm object type: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_8;
  }
  v10 = *((_QWORD *)v9 + 1);
  v11 = *(_QWORD *)(v10 + 24);
  if ( v11 )
  {
    DXGKEYEDMUTEX::AcquireReference(*(DXGKEYEDMUTEX **)(v10 + 24));
    v4 = v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 7945;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Cannot open keyed mutex from a shared resource which doesn't include a keyed mutex: 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return v4;
}
