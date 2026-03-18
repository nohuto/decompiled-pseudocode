/*
 * XREFs of xxxOldMessageBeep @ 0x1C01F6568
 * Callers:
 *     xxxMessageBeep @ 0x1C01F64D8 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C01F5958 (xxxSoundSentry.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01F877C (-xxxUserBeep@@YAHKK_N@Z.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
    v4 = xxxUserBeep(0x1B8u, 0x7Du, 1);
    EnterCrit(1LL, 0LL);
    return v4;
  }
  else
  {
    xxxSoundSentry();
    return 1LL;
  }
}
