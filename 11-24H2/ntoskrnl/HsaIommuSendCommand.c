/*
 * XREFs of HsaIommuSendCommand @ 0x14043E74C
 * Callers:
 *     HsaFlushTbInternal @ 0x14043E458 (HsaFlushTbInternal.c)
 *     HsaIommuWaitCommand @ 0x14043E718 (HsaIommuWaitCommand.c)
 *     HsaDismissPageFault @ 0x14056FDE0 (HsaDismissPageFault.c)
 *     HsaFlushDeviceTbOnly @ 0x140570080 (HsaFlushDeviceTbOnly.c)
 *     HsaInvalidateDTE @ 0x1405707F4 (HsaInvalidateDTE.c)
 *     HsaInvalidateRemappingTableEntries @ 0x140570844 (HsaInvalidateRemappingTableEntries.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HsaIommuSendCommand(__int64 *a1, _QWORD *a2, int a3)
{
  volatile __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rdx
  volatile __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // ebx
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+80h] [rbp+8h]
  __int64 v24; // [rsp+88h] [rbp+10h]

  v22 = 0LL;
  v5 = a1;
  v21 = 0LL;
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
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = v5 + 19;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v7 = (_QWORD *)_InterlockedExchange64(v5 + 19, (__int64)&v21);
      if ( v7 )
        KxWaitForLockOwnerShip((__int64)&v21, v7);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v21, v5 + 19);
    }
  }
  if ( *a2 >> 60 == 1 )
  {
    v18 = *((_QWORD *)v5 + 17);
    *((_QWORD *)v5 + 15) = 1LL;
    *a2 = v18;
    a2[1] = *((_QWORD *)v5 + 18);
  }
  v8 = *v5;
  v9 = 0;
  v10 = *((_QWORD *)v5 + 8) >> 4;
  v11 = *(_QWORD *)(*v5 + 8200);
  v12 = *((_QWORD *)v5 + 6);
  v24 = v12;
  if ( ((v11 >> 4) & 0x7FFF) + 1 != (_DWORD)v10 )
    v9 = ((*(_QWORD *)(*v5 + 8200) >> 4) & 0x7FFF) + 1;
  v13 = 0;
  v14 = v9;
  v23 = v9;
  if ( v9 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v13 & dword_140FC111C) != 0 || !qword_140FC1120 )
      {
        _mm_pause();
      }
      else
      {
        guard_dispatch_icall_no_overrides(v13, v10);
        v14 = v23;
      }
    }
    while ( v14 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) );
    v12 = v24;
  }
  v15 = 2 * ((v11 >> 4) & 0x7FFF);
  *(_QWORD *)(v12 + 8 * v15) = *a2;
  *(_QWORD *)(v12 + 8 * v15 + 8) = a2[1];
  *(_QWORD *)(v8 + 8200) = (16LL * (unsigned int)v14) ^ (v11 ^ (16LL * (unsigned int)v14)) & 0xFFFFFFFFFFF8000FuLL;
  _InterlockedOr(v20, 0);
  result = *a2 >> 60;
  if ( (_BYTE)result == 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      result = *((_QWORD *)v5 + 15);
      if ( !result )
        break;
      if ( (++v19 & dword_140FC111C) != 0 || !qword_140FC1120 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v19, v10);
    }
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v21, v10);
    if ( KiIrqlFlags )
    {
      LOBYTE(v17) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
