/*
 * XREFs of _IsChild @ 0x1C0016C3C
 * Callers:
 *     xxxDoPaint @ 0x1C00619B8 (xxxDoPaint.c)
 *     NtUserSelectPalette @ 0x1C00763A0 (NtUserSelectPalette.c)
 *     CheckPwndFilter @ 0x1C0087D4C (CheckPwndFilter.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     _SelectPalette @ 0x1C0130E10 (_SelectPalette.c)
 *     xxxMNLoop @ 0x1C0213DFC (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  do
  {
    if ( !a2 || (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0xC0) != 0x40 )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 104);
  }
  while ( a1 != a2 );
  return 1LL;
}
