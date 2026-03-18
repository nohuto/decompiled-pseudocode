/*
 * XREFs of IvtIommuSendCommand @ 0x1403BB944
 * Callers:
 *     IvtFlushTbInternal @ 0x1403BA188 (IvtFlushTbInternal.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1403BB780 (IvtInvalidateRemappingTableEntries.c)
 *     IvtIommuWaitCommand @ 0x1403BB7F4 (IvtIommuWaitCommand.c)
 *     IvtDismissPageFault @ 0x14056E060 (IvtDismissPageFault.c)
 *     IvtDrainSvmPageRequests @ 0x14056E130 (IvtDrainSvmPageRequests.c)
 *     IvtFlushDeviceTbOnly @ 0x14056E420 (IvtFlushDeviceTbOnly.c)
 *     IvtInvalidateAllContextEntries @ 0x14056F4D8 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateContextEntry @ 0x14056F534 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056F638 (IvtInvalidateScalableModePasidCache.c)
 *     IvtLegacyFlushTbInternal @ 0x140570168 (IvtLegacyFlushTbInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall IvtIommuSendCommand(__int64 a1, _QWORD *a2, __int64 a3)
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
  int v15; // eax
  __int64 v16; // rax
  __int64 i; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 result; // rax
  __int64 v23; // rdx
  signed __int32 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+70h] [rbp+8h]
  int v27; // [rsp+80h] [rbp+18h]

  v27 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v26 = v3;
  v5 = (unsigned __int64)a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 128);
  v7 = (*(_BYTE *)(a1 + 320) != 0) + 4LL;
  v8 = v6 >> v7;
  if ( (_DWORD)a3 == 1 )
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
    v3 = v26;
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
    LOBYTE(a3) = *(_BYTE *)(a1 + 320);
    v15 = (_BYTE)a3 ? (v14 >> 5) & 0x3FFF : (v14 >> 4) & 0x7FFF;
    if ( v12 != v15 )
      break;
    if ( (++v13 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
    {
      _mm_pause();
    }
    else
    {
      guard_dispatch_icall_no_overrides(v13, a2, a3, v3);
      v3 = v26;
    }
  }
  v16 = *(_QWORD *)(a1 + 112);
  if ( (_BYTE)a3 )
  {
    v18 = v16 + 32LL * v11;
    i = v18;
  }
  else
  {
    i = v16 + 16LL * v11;
    v18 = 0LL;
  }
  *(_QWORD *)i = *(_QWORD *)v5;
  v19 = v5 & -(__int64)((_BYTE)a3 != 0);
  *(_QWORD *)(i + 8) = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(a1 + 320) )
  {
    if ( (*(_BYTE *)v5 & 0xF) == 9 )
    {
      for ( i = 16LL; i < 32; i += 8LL )
        *(_QWORD *)(i + v18) = *(_QWORD *)(i + v19);
    }
    else
    {
      *(_OWORD *)(v18 + 16) = 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 320) )
  {
    v20 = 32LL * v12;
    v21 = (v10 ^ v20) & 0xFFFFFFFFFFF8001FuLL;
  }
  else
  {
    v20 = 16LL * v12;
    v21 = (v10 ^ v20) & 0xFFFFFFFFFFF8000FuLL;
  }
  result = v20 ^ v21;
  *(_QWORD *)(v3 + 136) = result;
  _InterlockedOr(v24, 0);
  if ( !v27 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, i);
    if ( KiIrqlFlags )
    {
      LOBYTE(v23) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
