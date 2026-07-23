/*
 * XREFs of HalpAllocateDmaChannels @ 0x14038C97C
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x14038C280 (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall HalpAllocateDmaChannels(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  KSPIN_LOCK *v6; // rbp
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 **v11; // rcx
  __int64 v12; // rdx

  v1 = *(_QWORD *)(a1 + 368);
  v2 = a1;
  v3 = *(unsigned __int8 *)(v1 + 176);
  v4 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v3);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v3);
  }
  v6 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v6);
  if ( *(_BYTE *)(v4 + 5) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 352) + 20LL) & 1) == 0 )
    {
      v9 = v4 + 144;
      v10 = (__int64 *)(v2 + 208);
      v11 = *(__int64 ***)(v9 + 8);
      if ( *v11 != (__int64 *)v9 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v2 + 216) = v11;
      *v11 = v10;
      *(_QWORD *)(v9 + 8) = v10;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v6);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    *(_BYTE *)(v4 + 5) = 1;
    *(_DWORD *)(v2 + 392) = 1;
    *(_QWORD *)(v4 + 24) = v2;
    KxReleaseSpinLock((volatile signed __int64 *)v6);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
