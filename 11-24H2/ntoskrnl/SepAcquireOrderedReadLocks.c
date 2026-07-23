/*
 * XREFs of SepAcquireOrderedReadLocks @ 0x1403232E0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     SeCompareTokens @ 0x140A179B8 (SeCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140A25848 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x140322B90 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140323290 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepAcquireOrderedReadLocks(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *v5; // rax
  _WORD *v6; // rbx
  __int16 v7; // cx
  unsigned __int64 v8; // r8
  struct _KTHREAD *v9; // rax
  _WORD *v10; // rbx
  __int16 v11; // cx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v13; // rax
  void *OwnerEntryForLegacyShim; // rsi
  void *v15; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v17; // rdx
  unsigned __int8 v18; // cl
  struct _KTHREAD *v19; // rdx

  if ( a1 >= a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    return;
  }
  _mm_lfence();
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  v6 = *(_WORD **)(a1 + 48);
  v7 = v6[13];
  if ( (v7 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v6, 0LL, 0LL);
  if ( (v7 & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v17 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v17->ApcState.InProgressFlags & 2) != 0 )
      goto LABEL_19;
    if ( !CurrentIrql && (v17->MiscFlags & 0x400) == 0 && !v17->WaitBlock[3].SpareLong )
LABEL_23:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !ExAcquireFastResourceShared(v6, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
      || ExIsFastResourceHeldExclusive((ULONG_PTR)v6) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
    ExpAcquireResourceSharedLite((__int64)v6, 1, a3);
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = *(_WORD **)(a2 + 48);
  v11 = v10[13];
  if ( (v11 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v10, 0LL, 0LL);
  if ( (v11 & 1) == 0 )
  {
    ExpAcquireResourceSharedLite(*(_QWORD *)(a2 + 48), 1, v8);
    return;
  }
  v18 = KeGetCurrentIrql();
  v19 = KeGetCurrentThread();
  if ( v18 > 1u )
    KeBugCheckEx(0x1C6u, 0LL, v18, 1uLL, 0LL);
  if ( (v19->ApcState.InProgressFlags & 2) != 0 )
LABEL_19:
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v18 && (v19->MiscFlags & 0x400) == 0 && !v19->WaitBlock[3].SpareLong )
    goto LABEL_23;
  v15 = (void *)ExpAllocateOwnerEntryForLegacyShim();
  if ( !ExAcquireFastResourceShared(v10, (ULONG_PTR)v15, 1) || ExIsFastResourceHeldExclusive((ULONG_PTR)v10) )
    ExFreePoolWithTag(v15, 0);
}
