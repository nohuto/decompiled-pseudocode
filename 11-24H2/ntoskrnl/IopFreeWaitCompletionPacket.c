/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x14041BD10
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x14041B6F8 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 */

void __fastcall IopFreeWaitCompletionPacket(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rbp
  unsigned __int8 CurrentIrql; // di
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 BugCheckParameter4; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rax
  signed __int64 v11; // rbx
  signed __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(BugCheckParameter2 + 80);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 96), 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter2 + 96));
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(BugCheckParameter2 + 96));
  }
  *(_BYTE *)(BugCheckParameter2 + 104) = 0;
  *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 96), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(BugCheckParameter2 + 96), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( ObpTraceFlags )
    ObpPushStackInfo(v2 - 48, 0, 1u, 0x746C6644u);
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  BugCheckParameter4 = v6 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(v2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v2 - 48) >> 8)],
        v2,
        1uLL,
        *(_QWORD *)(v2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v2, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(v2 - 48);
    }
    else
    {
      if ( (*(_BYTE *)(v2 - 22) & 0x40) != 0 )
      {
        v13 = *(_QWORD *)(v2 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v2 - 22) & 0x7F]);
        if ( *(_BYTE *)(v13 + 24) )
          ObpHandleRevocationBlockRemoveObject(v13);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(v2 - 48);
      ObpRemoveObjectRoutine(v2 - 48, 0LL);
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48, 0, 1u, 0x746C6644u);
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v9 <= 1;
  v10 = v9 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        1uLL,
        *(_QWORD *)(a2 - 40));
    if ( v10 < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 2uLL, v10);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(a2 - 48);
    }
    else
    {
      if ( (*(_BYTE *)(a2 - 22) & 0x40) != 0 )
      {
        v14 = *(_QWORD *)(a2 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a2 - 22) & 0x7F]);
        if ( *(_BYTE *)(v14 + 24) )
          ObpHandleRevocationBlockRemoveObject(v14);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(a2 - 48);
      ObpRemoveObjectRoutine(a2 - 48, 0LL);
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48, 0, 1u, 0x746C6644u);
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v11 <= 1;
  v12 = v11 - 1;
  if ( v7 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(BugCheckParameter2 - 40));
    if ( v12 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, v12);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 22) & 0x40) != 0 )
      {
        v15 = *(_QWORD *)(BugCheckParameter2 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(BugCheckParameter2 - 22) & 0x7F]);
        if ( *(_BYTE *)(v15 + 24) )
          ObpHandleRevocationBlockRemoveObject(v15);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(BugCheckParameter2 - 48);
      ObpRemoveObjectRoutine(BugCheckParameter2 - 48, 0LL);
    }
  }
}
