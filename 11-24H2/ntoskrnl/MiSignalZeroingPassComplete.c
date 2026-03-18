/*
 * XREFs of MiSignalZeroingPassComplete @ 0x14068FE80
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x1403C6608 (MiDeleteZeroThreadContext.c)
 *     MiBackgroundZeroNodePages @ 0x1403C6F60 (MiBackgroundZeroNodePages.c)
 *     MiStartZeroEngineThreads @ 0x1407FF9CC (MiStartZeroEngineThreads.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
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
