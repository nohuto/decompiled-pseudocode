/*
 * XREFs of KiThawSingleThread @ 0x1402DD1F8
 * Callers:
 *     KeThawMultiProcess @ 0x14048A9E4 (KeThawMultiProcess.c)
 *     KeForceResumeProcess @ 0x1404A1E44 (KeForceResumeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 */

void __fastcall KiThawSingleThread(__int64 a1, __int64 a2, char a3, char a4)
{
  volatile signed __int32 *v4; // rsi
  __int64 v9; // r8
  char v10; // r9
  char v11; // cl

  v4 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736));
  LOBYTE(v9) = *(_BYTE *)(a2 + 794);
  v10 = v9 & 2;
  if ( a3 )
  {
    *(_BYTE *)(a2 + 794) = v9 & 0xF9;
    if ( v10 || (v9 & 4) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
      if ( !*(_BYTE *)(a2 + 644) )
      {
        LOBYTE(v9) = 1;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v11 = v9 & 0xFB;
    if ( !a4 )
      v11 = v9 & 0xFD;
    *(_BYTE *)(a2 + 794) = v11;
    if ( (v10 || (v9 & 4) != 0) && (v11 & 6) == 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
      if ( !*(_BYTE *)(a2 + 644) )
      {
        v9 = 0LL;
LABEL_8:
        KiResumeThread(a2, a1, v9);
      }
    }
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
}
