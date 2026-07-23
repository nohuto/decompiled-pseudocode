/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x1409D108C
 * Callers:
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpUpdateGroupMasks @ 0x1409D112C (EtwpUpdateGroupMasks.c)
 *     EtwpGetFlagExtension @ 0x1409D1344 (EtwpGetFlagExtension.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(__int64 a1, __int64 a2)
{
  _WORD *FlagExtension; // rax
  __int64 v5; // r10
  unsigned __int16 v6; // cx
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !a2 )
    return EtwpUpdateGroupMasks(a1, v7);
  FlagExtension = (_WORD *)EtwpGetFlagExtension(a2, 1LL);
  if ( !FlagExtension )
  {
    if ( *(int *)(v5 + 72) >= 0 )
      LODWORD(v7[0]) = *(_DWORD *)(v5 + 72);
    return EtwpUpdateGroupMasks(a1, v7);
  }
  v6 = 4 * *FlagExtension - 4;
  if ( v6 <= 0x20u )
  {
    memmove(v7, FlagExtension + 2, v6);
    return EtwpUpdateGroupMasks(a1, v7);
  }
  return 3221225485LL;
}
