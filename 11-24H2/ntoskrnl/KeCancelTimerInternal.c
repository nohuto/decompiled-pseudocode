/*
 * XREFs of KeCancelTimerInternal @ 0x14046BBF4
 * Callers:
 *     ExpTimerPause @ 0x14046BB18 (ExpTimerPause.c)
 *     ExpTimerAdjust @ 0x140655B90 (ExpTimerAdjust.c)
 * Callees:
 *     KiCancelTimer @ 0x1402DC730 (KiCancelTimer.c)
 *     KiDecodeTolerableDelayValue @ 0x14046BE58 (KiDecodeTolerableDelayValue.c)
 */

char __fastcall KeCancelTimerInternal(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v8; // rcx
  char v9; // si

  v9 = KiCancelTimer(a1, 0);
  if ( v9 )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 1);
    *a2 = *(_QWORD *)(a1 + 24);
    *a3 = 2;
    if ( (v8 & 1) != 0 )
    {
      *a3 = 1;
    }
    else if ( (v8 & 2) != 0 )
    {
      *a3 = 3;
    }
    LOBYTE(v8) = (unsigned __int8)v8 >> 2;
    *a4 = (unsigned int)KiDecodeTolerableDelayValue(v8) / 0x2710;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v9;
}
