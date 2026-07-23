/*
 * XREFs of KiAlertSingleThreadByThreadId @ 0x1402DE880
 * Callers:
 *     KeAlertThreadByThreadIdEx @ 0x1402DE598 (KeAlertThreadByThreadIdEx.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405B50C0 (KeAlertMultipleThreadByThreadId.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     KeAbPreWakeupThread @ 0x1402DFF50 (KeAbPreWakeupThread.c)
 */

char __fastcall KiAlertSingleThreadByThreadId(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  char v7; // di
  char v8; // cl
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rcx

  v3 = 0;
  v7 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
  else
  {
    if ( *(_BYTE *)(a2 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a2 + 112) & 7) - 3) <= 1u
      || *(_BYTE *)(a2 + 643) != 37 )
    {
      goto LABEL_17;
    }
    v8 = 0;
    v9 = *(_BYTE *)(a2 + 112) & 7;
    if ( v9 == 1 || v9 == 4 )
    {
      v10 = *(_QWORD *)(a2 + 232);
      if ( v10 )
      {
        if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
        {
          *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
          _InterlockedAdd((volatile signed __int32 *)(v10 + 4LL * *(unsigned int *)(a2 + 540) + 536), 1u);
        }
        else
        {
          _InterlockedAdd((volatile signed __int32 *)(v10 + 40), 1u);
        }
      }
      KiRemovePrcbWaitEntry((_QWORD *)a2);
      KiEnterDeferredReadyState(a2);
      *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
      *(_QWORD *)(a1 + 11528) = a2 + 216;
      v8 = 1;
      *(_QWORD *)(a2 + 200) = 257LL;
      *(_QWORD *)(a2 + 976) = 0LL;
    }
    *(_BYTE *)(a2 + 112) |= 0x80u;
    if ( !v8 )
LABEL_17:
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 4u);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  if ( a3 )
  {
    v12 = *(_QWORD *)(a1 + 11528);
    if ( v12 )
      KeAbPreWakeupThread(v12 - 216, a3);
  }
  return v7;
}
