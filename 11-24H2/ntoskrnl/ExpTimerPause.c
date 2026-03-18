/*
 * XREFs of ExpTimerPause @ 0x1403E3988
 * Callers:
 *     PspSetProcessFreezeStateCallback @ 0x1403E3850 (PspSetProcessFreezeStateCallback.c)
 *     PsInsertVirtualizedTimer @ 0x14046374C (PsInsertVirtualizedTimer.c)
 *     ExWakeTimersPause @ 0x1404BC0DC (ExWakeTimersPause.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiCancelTimer @ 0x1403E3B40 (KiCancelTimer.c)
 */

char __fastcall ExpTimerPause(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // rdi
  int v5; // ebp
  char result; // al
  char v11; // r8
  unsigned __int64 v12; // rsi
  int v13; // ecx
  unsigned int v14; // ecx

  v4 = 0LL;
  v5 = 0;
  if ( !a4 )
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 64));
  result = *(_BYTE *)(a1 + 304);
  if ( (result & 2) == 0 )
  {
    *(_BYTE *)(a1 + 304) = result | 2;
    result = KiCancelTimer(a1, 0LL);
    v11 = result;
    if ( result )
    {
      v13 = *(unsigned __int8 *)(a1 + 1);
      v5 = 1;
      v4 = *(_QWORD *)(a1 + 24);
      if ( (v13 & 1) == 0 )
      {
        v5 = 2;
        if ( (v13 & 2) != 0 )
          v5 = 3;
      }
      v14 = (v13 & 0xFFFFFFFC) << 16;
      result = 89 * v14;
      *(_DWORD *)(a1 + 320) = v14 / 0x2710;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( !v11 )
    {
      LOBYTE(v5) = 0;
      goto LABEL_7;
    }
    switch ( v5 )
    {
      case 1:
        if ( v4 <= a3 )
        {
          *(_QWORD *)(a1 + 312) = 0LL;
          goto LABEL_7;
        }
        v4 = a2 + v4 - a3;
        break;
      case 2:
        if ( v4 <= a3 )
          v12 = 0LL;
        else
          v12 = a3 - v4;
        *(_QWORD *)(a1 + 312) = v12;
        goto LABEL_7;
      case 3:
        break;
      default:
LABEL_7:
        *(_BYTE *)(a1 + 248) = v5;
        goto LABEL_8;
    }
    *(_QWORD *)(a1 + 312) = v4;
    goto LABEL_7;
  }
LABEL_8:
  if ( !a4 )
    return KxReleaseSpinLock((volatile signed __int64 *)(a1 + 64));
  return result;
}
