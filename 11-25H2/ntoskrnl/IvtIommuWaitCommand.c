/*
 * XREFs of IvtIommuWaitCommand @ 0x140447284
 * Callers:
 *     IvtFlushTbInternal @ 0x140445FF8 (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x140447210 (IvtInvalidateRemappingTableEntries.c)
 *     IvtDrainSvmPageRequests @ 0x14056AE30 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x14056B120 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateAllContextEntries @ 0x14056C1D8 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x14056C234 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056C338 (IvtInvalidateScalableModePasidCache.c)
 *     IvtLegacyFlushTbInternal @ 0x14056CE68 (IvtLegacyFlushTbInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IvtIommuSendCommand @ 0x1404473D4 (IvtIommuSendCommand.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
      KiRaiseIrqlProcessIrqlFlags(a1);
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
    if ( (++v10 & dword_140FC071C) == 0 && qword_140FC0720 )
      guard_dispatch_icall_no_overrides(v10, v9);
    else
      _mm_pause();
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
