/*
 * XREFs of ExpTimerPause @ 0x14046BB18
 * Callers:
 *     PsInsertVirtualizedTimer @ 0x140459FA8 (PsInsertVirtualizedTimer.c)
 *     PspSetProcessFreezeStateCallback @ 0x14046B9E0 (PspSetProcessFreezeStateCallback.c)
 *     ExWakeTimersPause @ 0x1404B6D9C (ExWakeTimersPause.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeCancelTimerInternal @ 0x14046BBF4 (KeCancelTimerInternal.c)
 */

char __fastcall ExpTimerPause(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v8; // rax
  char v9; // dl
  unsigned __int64 v10; // rdi
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0;
  if ( !a4 )
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 64));
  LOBYTE(v8) = *(_BYTE *)(a1 + 304);
  if ( (v8 & 2) == 0 )
  {
    *(_BYTE *)(a1 + 304) = v8 | 2;
    LOBYTE(v8) = KeCancelTimerInternal(a1, &v12, &v13, a1 + 320);
    if ( !(_BYTE)v8 )
    {
      v9 = 0;
      goto LABEL_6;
    }
    v9 = v13;
    switch ( v13 )
    {
      case 1:
        LOBYTE(v8) = v12;
        if ( v12 <= a3 )
        {
          *(_QWORD *)(a1 + 312) = 0LL;
          goto LABEL_6;
        }
        v8 = a2 + v12 - a3;
        break;
      case 2:
        if ( v12 <= a3 )
          v10 = 0LL;
        else
          v10 = a3 - v12;
        *(_QWORD *)(a1 + 312) = v10;
        goto LABEL_6;
      case 3:
        v8 = v12;
        break;
      default:
LABEL_6:
        *(_BYTE *)(a1 + 248) = v9;
        goto LABEL_7;
    }
    *(_QWORD *)(a1 + 312) = v8;
    goto LABEL_6;
  }
LABEL_7:
  if ( !a4 )
    LOBYTE(v8) = KxReleaseSpinLock((volatile signed __int64 *)(a1 + 64));
  return v8;
}
