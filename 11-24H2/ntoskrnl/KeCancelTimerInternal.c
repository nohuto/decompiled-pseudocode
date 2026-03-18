/*
 * XREFs of KeCancelTimerInternal @ 0x1403E3AA4
 * Callers:
 *     ExpTimerAdjust @ 0x140657490 (ExpTimerAdjust.c)
 * Callees:
 *     KiCancelTimer @ 0x1403E3B40 (KiCancelTimer.c)
 */

char __fastcall KeCancelTimerInternal(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4)
{
  char v8; // r8
  int v10; // ecx

  v8 = KiCancelTimer(a1, 0LL);
  if ( v8 )
  {
    v10 = *(unsigned __int8 *)(a1 + 1);
    *a2 = *(_QWORD *)(a1 + 24);
    *a3 = 2;
    if ( (v10 & 1) != 0 )
    {
      *a3 = 1;
    }
    else if ( (v10 & 2) != 0 )
    {
      *a3 = 3;
    }
    *a4 = ((v10 & 0xFFFFFFFC) << 16) / 0x2710;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v8;
}
