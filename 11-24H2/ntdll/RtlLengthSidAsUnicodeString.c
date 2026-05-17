/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x180038750
 * Callers:
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x180039220 (RtlValidSid.c)
 */

__int64 __fastcall RtlLengthSidAsUnicodeString(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // edx

  if ( (unsigned __int8)RtlValidSid(a1) != 1 )
    return 3221225592LL;
  if ( a1[2] || a1[3] )
    v4 = 36;
  else
    v4 = 28;
  *a2 = v4 + 22 * a1[1];
  return 0LL;
}
