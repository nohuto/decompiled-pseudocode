/*
 * XREFs of KiAlertSingleThreadByThreadId @ 0x14028086C
 * Callers:
 *     KeAlertThreadByThreadIdEx @ 0x1402807E0 (KeAlertThreadByThreadIdEx.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B3BF8 (KeAlertMultipleThreadByThreadId.c)
 * Callees:
 *     KeAbPreWakeupThread @ 0x14027FB04 (KeAbPreWakeupThread.c)
 *     KiSignalThread @ 0x1402E6E10 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiAlertSingleThreadByThreadId(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char v7; // si
  char v8; // al
  __int64 v10; // rcx

  v3 = 0;
  v7 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v3);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 64) );
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x10) != 0 )
  {
    v7 = 0;
  }
  else if ( *(_BYTE *)(a2 + 388) != 5
         || (unsigned __int8)((*(_BYTE *)(a2 + 112) & 7) - 3) <= 1u
         || *(_BYTE *)(a2 + 643) != 37
         || (v8 = KiSignalThread(a1, a2, 257LL, 0LL), *(_BYTE *)(a2 + 112) |= 0x80u, !v8) )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 4u);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a1 + 11528);
    if ( v10 )
      KeAbPreWakeupThread(v10 - 216, a3);
  }
  return v7;
}
