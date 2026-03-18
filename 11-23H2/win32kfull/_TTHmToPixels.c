/*
 * XREFs of _TTHmToPixels @ 0x1C015728A
 * Callers:
 *     TouchTargetingDownrank @ 0x1C0157222 (TouchTargetingDownrank.c)
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01E41C0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C024CE0C (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C024D1D8 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C001499C (LongLongToLong.c)
 */

__int64 __fastcall TTHmToPixels(int a1, int a2)
{
  unsigned int v2; // r9d
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  plResult = 0;
  if ( LongLongToLong(1000LL * a1 / a2, &plResult) >= 0 )
    return (unsigned int)plResult;
  return v2;
}
