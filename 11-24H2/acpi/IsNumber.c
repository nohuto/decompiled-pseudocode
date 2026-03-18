/*
 * XREFs of IsNumber @ 0x14006E528
 * Callers:
 *     DebugExpr @ 0x14006DB94 (DebugExpr.c)
 *     DebugInPort @ 0x14006DD70 (DebugInPort.c)
 *     DebugNotify @ 0x14006DE70 (DebugNotify.c)
 *     DebugOutPort @ 0x14006E040 (DebugOutPort.c)
 *     DebugRunMethod @ 0x14006E170 (DebugRunMethod.c)
 * Callees:
 *     _strtoui64_0 @ 0x140056779 (_strtoui64_0.c)
 */

char __fastcall IsNumber(const char *a1, int a2)
{
  char v3; // di
  char *EndPtr; // [rsp+40h] [rbp+18h] BYREF

  EndPtr = 0LL;
  v3 = 1;
  if ( strtoui64_0(a1, &EndPtr, a2) == -1LL || a1 == EndPtr || !*a1 )
    return 0;
  return v3;
}
