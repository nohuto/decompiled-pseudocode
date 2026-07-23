/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x14069B16C
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x140698D8C (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x140698EA8 (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x140699B4C (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x14069AE40 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14069B148 (BcpSetCursorPosition.c)
 */

__int64 BgpDisplaySafeToPowerOffScreen()
{
  int DisplayType; // edi
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 v4; // r8
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_140EF0270 & 2) == 0 )
    return 3221225473LL;
  v5[0] = DWORD2(BgInternal);
  v5[1] = DWORD1(BgInternal);
  v5[2] = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(v5);
  v2 = 84LL * DisplayType;
  *(_DWORD *)(*(_QWORD *)(qword_140E3EBE0 + 24) + 40LL) = -16777216;
  BgpClearScreen(0xFF000000);
  BcpSetCursorPosition(
    *(_DWORD *)((char *)&unk_140E0EFA0 + v2 + 16),
    *(_DWORD *)((char *)&unk_140E0EFA0 + v2 + 20),
    (int *)((char *)&unk_140E0EFA0 + v2 + 20));
  BcpDisplayCriticalString(&stru_140E3EBD0, *(_DWORD *)(v2 + v3 + 8), v4, DisplayType);
  return 0LL;
}
