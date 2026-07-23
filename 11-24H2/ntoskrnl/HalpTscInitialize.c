/*
 * XREFs of HalpTscInitialize @ 0x14055F020
 * Callers:
 *     <none>
 * Callees:
 *     HalUpdateTimerCapabilities @ 0x14055DBE0 (HalUpdateTimerCapabilities.c)
 *     HalpTscGetAttributes @ 0x14055EE70 (HalpTscGetAttributes.c)
 */

__int64 __fastcall HalpTscInitialize(__int64 a1)
{
  int v2; // ebx
  char v3; // cl
  char v4; // al
  char v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v2 = 0;
  if ( (int)HalpTscGetAttributes(&v7, &v6, &v8) >= 0 )
  {
    v4 = v6;
    v3 = v7;
  }
  else
  {
    v3 = 0;
    v4 = 0;
  }
  if ( v3 != HalpTscPerformanceStateInvariant && !v3 )
  {
    v2 = 0x2000;
    HalpTscPerformanceStateInvariant = 0;
  }
  if ( v4 != HalpTscIdleStateInvariant && !v4 )
  {
    v2 |= 0x4000u;
    HalpTscIdleStateInvariant = 0;
  }
  return HalUpdateTimerCapabilities(a1, v2, 0);
}
