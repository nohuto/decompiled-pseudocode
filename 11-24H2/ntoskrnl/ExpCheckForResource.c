/*
 * XREFs of ExpCheckForResource @ 0x140491810
 * Callers:
 *     ExpFreePoolChecks @ 0x1402B0D90 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     FREE_CHECK_ERESOURCE @ 0x1404917EC (FREE_CHECK_ERESOURCE.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     VfCheckForResource @ 0x140BA71D8 (VfCheckForResource.c)
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
