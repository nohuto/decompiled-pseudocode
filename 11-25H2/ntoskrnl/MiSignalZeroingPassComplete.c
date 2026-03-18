/*
 * XREFs of MiSignalZeroingPassComplete @ 0x140684A20
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x140440768 (MiDeleteZeroThreadContext.c)
 *     MiBackgroundZeroNodePages @ 0x1404407D0 (MiBackgroundZeroNodePages.c)
 *     MiStartZeroEngineThreads @ 0x1407EFB0C (MiStartZeroEngineThreads.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

void __fastcall MiSignalZeroingPassComplete(__int64 a1)
{
  __int64 v2; // rdi
  KIRQL v3; // si

  if ( *(_BYTE *)(a1 + 30) )
  {
    v2 = *(_QWORD *)(a1 + 176);
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 208) + 15280LL));
    if ( *(_BYTE *)(a1 + 30) )
    {
      *(_BYTE *)(a1 + 30) = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 128), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)v2, 0, 0);
    }
    MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(a1 + 208) + 15280LL), v3);
  }
}
