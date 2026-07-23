/*
 * XREFs of CcDereferenceVacbArray @ 0x1403EF160
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     CcRemoveVacbArray @ 0x1404F3A38 (CcRemoveVacbArray.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcFreeVacbArray @ 0x14070479C (CcFreeVacbArray.c)
 */

__int64 __fastcall CcDereferenceVacbArray(__int64 a1, __int64 a2)
{
  KIRQL v2; // bl
  char v3; // si
  int v5; // eax
  __int64 result; // rax

  v2 = 0;
  v3 = a2;
  if ( !(_BYTE)a2 )
    v2 = KeAcquireQueuedSpinLock(4uLL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v5 - 1);
  *(_DWORD *)(a1 + 4) = result;
  if ( !v3 )
  {
    if ( (_DWORD)result )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 8, a2);
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
