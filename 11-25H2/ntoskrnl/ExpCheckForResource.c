/*
 * XREFs of ExpCheckForResource @ 0x140492604
 * Callers:
 *     ExpFreePoolChecks @ 0x1402DE730 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     FREE_CHECK_ERESOURCE @ 0x1404925E0 (FREE_CHECK_ERESOURCE.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     VfCheckForResource @ 0x140B971F8 (VfCheckForResource.c)
 */

__int64 __fastcall ExpCheckForResource(__int64 *a1, ULONG_PTR a2)
{
  KIRQL v5; // al
  __int64 *i; // rbx

  if ( ((MmVerifierData & 0x800) == 0 || !(unsigned int)VfCheckForResource((ULONG_PTR)a1, a2))
    && (unsigned int)KeNumberProcessors_0 <= 1
    && (ExResourceCheckFlags & 1) != 0 )
  {
    v5 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
    for ( i = (__int64 *)ExpSystemResourcesList; i != &ExpSystemResourcesList; i = (__int64 *)*i )
    {
      if ( i >= a1 && i < (__int64 *)((char *)a1 + a2) )
      {
        DbgPrintEx(
          0,
          0,
          "EX: ExFreePool( %p, %Ix ) contains an ERESOURCE structure that has not been ExDeleteResourced\n",
          a1,
          a2);
        __debugbreak();
      }
    }
    ExReleaseSpinLockShared(&ExpResourceSpinLock, v5);
  }
  return 0LL;
}
