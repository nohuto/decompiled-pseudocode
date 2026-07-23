/*
 * XREFs of IvtIommuWaitCommand @ 0x140374F34
 * Callers:
 *     IvtFlushTbInternal @ 0x140372B58 (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x140374EC0 (IvtInvalidateRemappingTableEntries.c)
 *     IvtDrainSvmPageRequests @ 0x14056B5C0 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x14056B8B0 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateAllContextEntries @ 0x14056C968 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x14056C9C4 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056CAC8 (IvtInvalidateScalableModePasidCache.c)
 *     IvtLegacyFlushTbInternal @ 0x14056D5F8 (IvtLegacyFlushTbInternal.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IvtIommuSendCommand @ 0x140375084 (IvtIommuSendCommand.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IvtIommuWaitCommand(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 result; // rax
  __int64 v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-20h] BYREF

  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 208), &LockHandle);
  }
  v7 = *(_QWORD *)(v5 + 192);
  v8 = *(_QWORD *)(v5 + 200);
  v14[0] = v7;
  v14[1] = v8;
  *(_DWORD *)(v5 + 176) = 1;
  if ( a2 )
    v14[0] = v7 | 0x80;
  IvtIommuSendCommand(v5, v14, 1LL);
  v10 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(v5 + 176);
    if ( !(_DWORD)result )
      break;
    if ( (++v10 & dword_140FC111C) == 0 && qword_140FC1120 )
      guard_dispatch_icall_no_overrides(v10, v9);
    else
      _mm_pause();
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v9);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
