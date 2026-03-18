/*
 * XREFs of SepAcquireOrderedReadLocks @ 0x140293230
 * Callers:
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     SeCompareTokens @ 0x140A18FB8 (SeCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140A2AE88 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14029409C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402944B0 (ExIsFastResourceHeldExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140294520 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepAcquireOrderedReadLocks(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  struct _KTHREAD *v4; // rax
  ULONG_PTR v5; // rbx
  __int16 v6; // cx
  __int64 v7; // rdx
  struct _KTHREAD *v8; // rax
  ULONG_PTR v9; // rbx
  __int16 v10; // cx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // rax
  void *OwnerEntryForLegacyShim; // rsi
  void *v14; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v16; // rdx
  unsigned __int8 v17; // cl
  struct _KTHREAD *v18; // rdx

  v2 = a2;
  if ( a1 >= a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    return;
  }
  _mm_lfence();
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_WORD *)(v5 + 26);
  if ( (v6 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v5, 0LL, 0LL);
  if ( (v6 & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v16 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v16->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_19;
    if ( !CurrentIrql && (v16->MiscFlags & 0x400) == 0 && !v16->WaitBlock[3].SpareLong )
LABEL_23:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared(v5, (ULONG_PTR)OwnerEntryForLegacyShim)
      || (unsigned __int8)ExIsFastResourceHeldExclusive(v5) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
    LOBYTE(a2) = 1;
    ExpAcquireResourceSharedLite(v5, a2);
  }
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v9 = *(_QWORD *)(v2 + 48);
  v10 = *(_WORD *)(v9 + 26);
  if ( (v10 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, v9, 0LL, 0LL);
  if ( (v10 & 1) == 0 )
  {
    LOBYTE(v7) = 1;
    ExpAcquireResourceSharedLite(*(_QWORD *)(v2 + 48), v7);
    return;
  }
  v17 = KeGetCurrentIrql();
  v18 = KeGetCurrentThread();
  if ( v17 > 1u )
    KeBugCheckEx(0x1C6u, 0LL, v17, 1uLL, 0LL);
  if ( (v18->ApcState.InProgressFlags & 2) != 0 )
LABEL_19:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v17 && (v18->MiscFlags & 0x400) == 0 && !v18->WaitBlock[3].SpareLong )
    goto LABEL_23;
  v14 = (void *)ExpAllocateOwnerEntryForLegacyShim();
  if ( !(unsigned __int8)ExAcquireFastResourceShared(v9, (ULONG_PTR)v14)
    || (unsigned __int8)ExIsFastResourceHeldExclusive(v9) )
  {
    ExFreePoolWithTag(v14, 0);
  }
}
