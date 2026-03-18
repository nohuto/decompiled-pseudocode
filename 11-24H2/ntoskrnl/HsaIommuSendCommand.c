/*
 * XREFs of HsaIommuSendCommand @ 0x14044639C
 * Callers:
 *     HsaFlushTbInternal @ 0x1404460A8 (HsaFlushTbInternal.c)
 *     HsaIommuWaitCommand @ 0x140446368 (HsaIommuWaitCommand.c)
 *     HsaDismissPageFault @ 0x140572950 (HsaDismissPageFault.c)
 *     HsaFlushDeviceTbOnly @ 0x140572BF0 (HsaFlushDeviceTbOnly.c)
 *     HsaInvalidateDTE @ 0x140573364 (HsaInvalidateDTE.c)
 *     HsaInvalidateRemappingTableEntries @ 0x1405733B4 (HsaInvalidateRemappingTableEntries.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HsaIommuSendCommand(__int64 *a1, _QWORD *a2, int a3)
{
  volatile __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rdx
  volatile __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // ebx
  signed __int32 v21[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v22; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+88h] [rbp+10h]

  v23 = 0LL;
  v5 = a1;
  v22 = 0LL;
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
    *(_QWORD *)&v22 = 0LL;
    *((_QWORD *)&v22 + 1) = v5 + 19;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v7 = (_QWORD *)_InterlockedExchange64(v5 + 19, (__int64)&v22);
      if ( v7 )
        KxWaitForLockOwnerShip((__int64)&v22, v7);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v22, v5 + 19);
    }
  }
  if ( *a2 >> 60 == 1 )
  {
    v19 = *((_QWORD *)v5 + 17);
    *((_QWORD *)v5 + 15) = 1LL;
    *a2 = v19;
    a2[1] = *((_QWORD *)v5 + 18);
  }
  v8 = *v5;
  v9 = 0;
  v10 = 0x7FFFLL;
  v11 = *((_QWORD *)v5 + 8) >> 4;
  v12 = *(_QWORD *)(*v5 + 8200);
  v13 = *((_QWORD *)v5 + 6);
  v25 = v13;
  if ( ((v12 >> 4) & 0x7FFF) + 1 != (_DWORD)v11 )
    v9 = ((*(_QWORD *)(*v5 + 8200) >> 4) & 0x7FFF) + 1;
  v14 = 0;
  v15 = v9;
  v24 = v9;
  if ( v9 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v14 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
      {
        _mm_pause();
      }
      else
      {
        guard_dispatch_icall_no_overrides(v14, v11, v13, 0x7FFFLL);
        v15 = v24;
        v10 = 0x7FFFLL;
      }
    }
    while ( v15 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) );
    v13 = v25;
  }
  v16 = 2 * ((v12 >> 4) & 0x7FFF);
  *(_QWORD *)(v13 + 8 * v16) = *a2;
  *(_QWORD *)(v13 + 8 * v16 + 8) = a2[1];
  *(_QWORD *)(v8 + 8200) = (16LL * (unsigned int)v15) ^ (v12 ^ (16LL * (unsigned int)v15)) & 0xFFFFFFFFFFF8000FuLL;
  _InterlockedOr(v21, 0);
  result = *a2 >> 60;
  if ( (_BYTE)result == 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      result = *((_QWORD *)v5 + 15);
      if ( !result )
        break;
      if ( (++v20 & dword_140FC0EBC) != 0 || !qword_140FC0EC0 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v20, v11, v13, v10);
    }
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v22, v11);
    if ( KiIrqlFlags )
    {
      LOBYTE(v18) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
