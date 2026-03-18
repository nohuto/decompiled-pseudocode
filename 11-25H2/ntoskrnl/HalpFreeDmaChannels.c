/*
 * XREFs of HalpFreeDmaChannels @ 0x140331490
 * Callers:
 *     IoFreeAdapterChannelV3Internal @ 0x140331EB4 (IoFreeAdapterChannelV3Internal.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpFreeDmaChannels(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // di
  KSPIN_LOCK *v4; // rbp
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx

  v1 = *(_QWORD *)(a1 + 368);
  v2 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  *(_DWORD *)(a1 + 392) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(*(unsigned __int8 *)(v1 + 176));
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v4 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v4);
  v5 = (_QWORD *)(v2 + 144);
  v6 = *(_QWORD **)(v2 + 144);
  if ( v6 == (_QWORD *)(v2 + 144) )
  {
    *(_WORD *)(v2 + 5) = 0;
    *(_QWORD *)(v2 + 24) = 0LL;
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    if ( (_QWORD *)v6[1] != v5 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v8 = v6 - 26;
    *(_QWORD *)(v7 + 8) = v5;
    ++*((_DWORD *)v6 + 104);
    *((_DWORD *)v6 + 46) = 1;
    *(_QWORD *)(v2 + 24) = v6 - 26;
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    }
    __writecr8(CurrentIrql);
    LOBYTE(v9) = 1;
    return HalpAllocateDmaResourcesInternal(v8, v9, 0LL);
  }
  return result;
}
