/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x140294330
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceSharedWrapper @ 0x140611E90 (DifExEnterCriticalRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14029409C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402944B0 (ExIsFastResourceHeldExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140294520 (ExAcquireFastResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  USHORT Flag; // cx
  void *OwnerEntryForLegacyShim; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v7; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v7 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v7->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (v7->MiscFlags & 0x400) == 0 && !v7->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared((ULONG_PTR)Resource, (ULONG_PTR)OwnerEntryForLegacyShim)
      || (unsigned __int8)ExIsFastResourceHeldExclusive((ULONG_PTR)Resource) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
    ExpAcquireResourceSharedLite(Resource, 1);
  }
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
