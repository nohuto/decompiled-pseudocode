/*
 * XREFs of InvalidateSecondaryDpiMetrics @ 0x14028775C
 * Callers:
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x140112FC8 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ClearDpiMetrics @ 0x140287298 (ClearDpiMetrics.c)
 */

_QWORD *__fastcall InvalidateSecondaryDpiMetrics(struct HLFONT__ **a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD *result; // rax

  v2 = 160LL;
  v3 = 16LL;
  do
  {
    result = (_QWORD *)W32GetUserSessionState(a1, a2);
    a1 = (struct HLFONT__ **)(v2 + result[2491] + 7656LL);
    if ( *(_DWORD *)a1 )
      result = ClearDpiMetrics(a1);
    v2 += 80LL;
    --v3;
  }
  while ( v3 );
  return result;
}
