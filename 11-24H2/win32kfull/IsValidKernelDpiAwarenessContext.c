/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x140180A0C
 * Callers:
 *     NtUserTransformPoint @ 0x140180890 (NtUserTransformPoint.c)
 * Callees:
 *     IsDpiValidPlateau @ 0x1402F19FC (IsDpiValidPlateau.c)
 */

__int64 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  unsigned int v1; // ecx

  v1 = a1 & 0x7FFFFFFF;
  if ( v1 == 34 || v1 == 24592 || v1 == 1073766416 || v1 == 18 )
    return 1LL;
  if ( (v1 & 0xFFFE00FF) == 0x11 )
    return (unsigned __int8)IsDpiValidPlateau((v1 >> 8) & 0x1FF);
  return 0LL;
}
