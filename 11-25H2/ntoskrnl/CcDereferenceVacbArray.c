/*
 * XREFs of CcDereferenceVacbArray @ 0x14043C8D0
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     CcRemoveVacbArray @ 0x1404F38E4 (CcRemoveVacbArray.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcFreeVacbArray @ 0x1406FACFC (CcFreeVacbArray.c)
 */

__int64 __fastcall CcDereferenceVacbArray(__int64 a1, char a2)
{
  KIRQL v2; // bl
  int v5; // eax
  __int64 result; // rax

  v2 = 0;
  if ( !a2 )
    v2 = KeAcquireQueuedSpinLock(4uLL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v5 - 1);
  *(_DWORD *)(a1 + 4) = result;
  if ( !a2 )
  {
    if ( (_DWORD)result )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                     + 64));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
      result = v2;
      __writecr8(v2);
    }
    else
    {
      CcRemoveVacbArray(a1);
      KeReleaseQueuedSpinLock(4uLL, v2);
      return CcFreeVacbArray(a1);
    }
  }
  return result;
}
