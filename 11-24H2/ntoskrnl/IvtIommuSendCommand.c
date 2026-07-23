/*
 * XREFs of IvtIommuSendCommand @ 0x140375084
 * Callers:
 *     IvtFlushTbInternal @ 0x140372B58 (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x140374EC0 (IvtInvalidateRemappingTableEntries.c)
 *     IvtIommuWaitCommand @ 0x140374F34 (IvtIommuWaitCommand.c)
 *     IvtDismissPageFault @ 0x14056B4F0 (IvtDismissPageFault.c)
 *     IvtDrainSvmPageRequests @ 0x14056B5C0 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x14056B8B0 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateAllContextEntries @ 0x14056C968 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x14056C9C4 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056CAC8 (IvtInvalidateScalableModePasidCache.c)
 *     IvtLegacyFlushTbInternal @ 0x14056D5F8 (IvtLegacyFlushTbInternal.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall IvtIommuSendCommand(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v10; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned __int64 v14; // rax
  char v15; // r8
  int v16; // eax
  __int64 v17; // rax
  __int64 i; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 v24; // rdx
  signed __int32 v25[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 8);
  v27 = v3;
  v5 = (unsigned __int64)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 128);
  v7 = (*(_BYTE *)(a1 + 320) != 0) + 4LL;
  v8 = v6 >> v7;
  if ( a3 == 1 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 15;
      LOBYTE(v7) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7, a2);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
    v3 = v27;
  }
  v10 = *(_QWORD *)(v3 + 136);
  if ( *(_BYTE *)(a1 + 320) )
    v11 = (v10 >> 5) & 0x3FFF;
  else
    v11 = (v10 >> 4) & 0x7FFF;
  v12 = 0;
  if ( v11 + 1 != (_DWORD)v8 )
    v12 = v11 + 1;
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v3 + 128);
    v15 = *(_BYTE *)(a1 + 320);
    v16 = v15 ? (v14 >> 5) & 0x3FFF : (v14 >> 4) & 0x7FFF;
    if ( v12 != v16 )
      break;
    if ( (++v13 & dword_140FC111C) != 0 || !qword_140FC1120 )
    {
      _mm_pause();
    }
    else
    {
      guard_dispatch_icall_no_overrides(v13, a2);
      v3 = v27;
    }
  }
  v17 = *(_QWORD *)(a1 + 112);
  if ( v15 )
  {
    v19 = v17 + 32LL * v11;
    i = v19;
  }
  else
  {
    i = v17 + 16LL * v11;
    v19 = 0LL;
  }
  *(_QWORD *)i = *(_QWORD *)v5;
  v20 = v5 & -(__int64)(v15 != 0);
  *(_QWORD *)(i + 8) = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (*(_BYTE *)v5 & 0xF) == 9 )
    {
      for ( i = 16LL; i < 32; i += 8LL )
        *(_QWORD *)(i + v19) = *(_QWORD *)(i + v20);
    }
    else
    {
      *(_OWORD *)(v19 + 16) = 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 320) )
  {
    v21 = 32LL * v12;
    v22 = (v10 ^ v21) & 0xFFFFFFFFFFF8001FuLL;
  }
  else
  {
    v21 = 16LL * v12;
    v22 = (v10 ^ v21) & 0xFFFFFFFFFFF8000FuLL;
  }
  result = v21 ^ v22;
  *(_QWORD *)(v3 + 136) = result;
  _InterlockedOr(v25, 0);
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, i);
    if ( KiIrqlFlags )
    {
      LOBYTE(v24) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
