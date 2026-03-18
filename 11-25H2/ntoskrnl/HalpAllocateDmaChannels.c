/*
 * XREFs of HalpAllocateDmaChannels @ 0x140331844
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall HalpAllocateDmaChannels(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  KSPIN_LOCK *v5; // rbp
  __int64 v6; // rdx
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 **v10; // rcx
  __int64 v11; // rdx

  v1 = *(_QWORD *)(a1 + 368);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(*(unsigned __int8 *)(v1 + 176));
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v5 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v5);
  if ( *(_BYTE *)(v3 + 5) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 352) + 20LL) & 1) == 0 )
    {
      v8 = v3 + 144;
      v9 = (__int64 *)(v2 + 208);
      v10 = *(__int64 ***)(v8 + 8);
      if ( *v10 != (__int64 *)v8 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v2 + 216) = v10;
      *v10 = v9;
      *(_QWORD *)(v8 + 8) = v9;
    }
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    *(_BYTE *)(v3 + 5) = 1;
    *(_DWORD *)(v2 + 392) = 1;
    *(_QWORD *)(v3 + 24) = v2;
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
