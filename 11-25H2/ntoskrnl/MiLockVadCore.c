/*
 * XREFs of MiLockVadCore @ 0x1402A3860
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     MiMakeSecureExclusive @ 0x1402A3168 (MiMakeSecureExclusive.c)
 *     MiClearVadTrimBehind @ 0x1402A3230 (MiClearVadTrimBehind.c)
 *     MiLocateOldestSecure @ 0x1402A32BC (MiLocateOldestSecure.c)
 *     MiWriteVadFlags2 @ 0x1402A3350 (MiWriteVadFlags2.c)
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiRemoveSecureEntry @ 0x1402A34A0 (MiRemoveSecureEntry.c)
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiSetVadDeleted @ 0x14031F8D0 (MiSetVadDeleted.c)
 *     MiRemoveVadEvent @ 0x14066CC00 (MiRemoveVadEvent.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockVadCore(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  unsigned int v7; // esi

  v2 = a1;
  if ( (a2 & 1) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  }
  v4 = *(_DWORD *)(v2 + 48);
  do
  {
    while ( (v4 & 1) != 0 )
    {
      if ( (v4 & 2) != 0 )
      {
        v7 = 0;
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
          v4 = *(_DWORD *)(v2 + 48);
        }
        while ( (v4 & 1) != 0 );
      }
      else
      {
        a1 = v4 | 2u;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 48), a1, v4);
      }
    }
    a1 = v4 & 0xFFFFFFFC | 1;
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 48), a1, v4);
  }
  while ( v5 != v4 );
  return CurrentIrql;
}
