/*
 * XREFs of HalpFreeDmaChannels @ 0x14038CCD8
 * Callers:
 *     IoFreeAdapterChannelV3Internal @ 0x14038C534 (IoFreeAdapterChannelV3Internal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14038C280 (HalpAllocateDmaResourcesInternal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall HalpFreeDmaChannels(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // di
  KSPIN_LOCK *v5; // rbp
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  char result; // al
  __int64 v12; // rdx

  v1 = *(_QWORD *)(a1 + 368);
  v2 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  *(_DWORD *)(a1 + 392) = 0;
  v3 = *(unsigned __int8 *)(v1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v3);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v3);
  }
  v5 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v5);
  v6 = (_QWORD *)(v2 + 144);
  v7 = *(_QWORD **)(v2 + 144);
  if ( v7 == (_QWORD *)(v2 + 144) )
  {
    *(_WORD *)(v2 + 5) = 0;
    *(_QWORD *)(v2 + 24) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)v5);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    v9 = (__int64)(v7 - 26);
    *(_QWORD *)(v8 + 8) = v6;
    ++*((_DWORD *)v7 + 104);
    *((_DWORD *)v7 + 46) = 1;
    *(_QWORD *)(v2 + 24) = v7 - 26;
    KxReleaseSpinLock((volatile signed __int64 *)v5);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(CurrentIrql);
    return HalpAllocateDmaResourcesInternal(v9, 1, 0LL);
  }
  return result;
}
