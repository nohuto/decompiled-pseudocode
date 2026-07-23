/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x14040F850
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x14040F238 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 */

void __fastcall IopFreeWaitCompletionPacket(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbp
  unsigned __int8 CurrentIrql; // di
  signed __int64 v8; // rax
  bool v9; // cc
  signed __int64 BugCheckParameter4; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // rbx
  signed __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)(BugCheckParameter2 + 80);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 96), 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter2 + 96), a2, a3, a4);
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
    ObpPushStackInfo(v4 - 48, 0, 1u, 0x746C6644u);
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8 <= 1;
  BugCheckParameter4 = v8 - 1;
  if ( v9 )
  {
    if ( *(_QWORD *)(v4 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v4 - 48) >> 8)],
        v4,
        1uLL,
        *(_QWORD *)(v4 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, v4, 2uLL, BugCheckParameter4);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(v4 - 48);
    }
    else
    {
      if ( (*(_BYTE *)(v4 - 22) & 0x40) != 0 )
      {
        v15 = *(_QWORD *)(v4 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v4 - 22) & 0x7F]);
        if ( *(_BYTE *)(v15 + 24) )
          ObpHandleRevocationBlockRemoveObject(v15);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(v4 - 48);
      ObpRemoveObjectRoutine(v4 - 48, 0LL);
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(a2 - 48, 0, 1u, 0x746C6644u);
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v11 <= 1;
  v12 = v11 - 1;
  if ( v9 )
  {
    if ( *(_QWORD *)(a2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)],
        a2,
        1uLL,
        *(_QWORD *)(a2 - 40));
    if ( v12 < 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 2uLL, v12);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(a2 - 48);
    }
    else
    {
      if ( (*(_BYTE *)(a2 - 22) & 0x40) != 0 )
      {
        v16 = *(_QWORD *)(a2 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a2 - 22) & 0x7F]);
        if ( *(_BYTE *)(v16 + 24) )
          ObpHandleRevocationBlockRemoveObject(v16);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(a2 - 48);
      ObpRemoveObjectRoutine(a2 - 48, 0LL);
    }
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48, 0, 1u, 0x746C6644u);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v13 <= 1;
  v14 = v13 - 1;
  if ( v9 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(BugCheckParameter2 - 40));
    if ( v14 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, v14);
    if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(BugCheckParameter2 - 48);
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 22) & 0x40) != 0 )
      {
        v17 = *(_QWORD *)(BugCheckParameter2 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(BugCheckParameter2 - 22) & 0x7F]);
        if ( *(_BYTE *)(v17 + 24) )
          ObpHandleRevocationBlockRemoveObject(v17);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(BugCheckParameter2 - 48);
      ObpRemoveObjectRoutine(BugCheckParameter2 - 48, 0LL);
    }
  }
}
