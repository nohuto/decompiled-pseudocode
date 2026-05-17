/*
 * XREFs of RtlGetExtendedContextLength @ 0x1800C3600
 * Callers:
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 *     PsspInitializeContextOrExtendedContext @ 0x1800C33E8 (PsspInitializeContextOrExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetExtendedContextLength(unsigned int a1, __int64 a2)
{
  char v4; // r11
  __int64 v5; // r10
  bool v6; // cl

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v4 = 1;
  v5 = 0LL;
  v6 = 0;
  if ( (a1 & 0x400020) != 0x400020 )
    v6 = (a1 & 0x10040) != 65600 && (a1 & 0x100040) != 1048640;
  if ( !v6 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v4 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( (v4 & 2) != 0 )
    v5 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
  return RtlGetExtendedContextLength2(a1, a2, v5);
}
