/*
 * XREFs of IvtIommuWaitCommand @ 0x1403BB7F4
 * Callers:
 *     IvtFlushTbInternal @ 0x1403BA188 (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1403BB780 (IvtInvalidateRemappingTableEntries.c)
 *     IvtDrainSvmPageRequests @ 0x14056E130 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x14056E420 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateAllContextEntries @ 0x14056F4D8 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x14056F534 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056F638 (IvtInvalidateScalableModePasidCache.c)
 *     IvtLegacyFlushTbInternal @ 0x140570168 (IvtLegacyFlushTbInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     IvtIommuSendCommand @ 0x1403BB944 (IvtIommuSendCommand.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IvtIommuWaitCommand(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  __int64 result; // rax
  __int64 v14; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-20h] BYREF

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
  v16[0] = v7;
  v16[1] = v8;
  *(_DWORD *)(v5 + 176) = 1;
  if ( a2 )
    v16[0] = v7 | 0x80;
  IvtIommuSendCommand(v5, v16, 1LL);
  v12 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(v5 + 176);
    if ( !(_DWORD)result )
      break;
    if ( (++v12 & dword_140FC0EBC) == 0 && qword_140FC0EC0 )
      guard_dispatch_icall_no_overrides(v12, v9, v10, v11);
    else
      _mm_pause();
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v9);
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
