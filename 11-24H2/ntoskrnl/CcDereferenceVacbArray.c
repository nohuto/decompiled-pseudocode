/*
 * XREFs of CcDereferenceVacbArray @ 0x1403F9050
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     CcRemoveVacbArray @ 0x1404F6138 (CcRemoveVacbArray.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CcFreeVacbArray @ 0x140706BDC (CcFreeVacbArray.c)
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
