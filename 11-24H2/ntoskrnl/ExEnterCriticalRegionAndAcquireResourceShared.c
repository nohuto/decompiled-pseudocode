/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x140322C20
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceSharedWrapper @ 0x14061C410 (DifExEnterCriticalRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x140322B90 (ExIsFastResourceHeldExclusive.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140323290 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  unsigned __int64 v1; // r8
  struct _KTHREAD *CurrentThread; // rax
  USHORT Flag; // cx
  void *OwnerEntryForLegacyShim; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v8; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v8 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v8->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (v8->MiscFlags & 0x400) == 0 && !v8->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !ExAcquireFastResourceShared(Resource, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
      || ExIsFastResourceHeldExclusive((ULONG_PTR)Resource) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
    ExpAcquireResourceSharedLite((__int64)Resource, 1, v1);
  }
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
