/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x14068ED9C
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x14068C9BC (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x14068CAD8 (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x14068D77C (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x14068EA70 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14068ED78 (BcpSetCursorPosition.c)
 */

__int64 BgpDisplaySafeToPowerOffScreen()
{
  int DisplayType; // edi
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 v4; // r8
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_140EEFD90 & 2) == 0 )
    return 3221225473LL;
  v5[0] = DWORD2(BgInternal);
  v5[1] = DWORD1(BgInternal);
  v5[2] = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(v5);
  v2 = 84LL * DisplayType;
  *(_DWORD *)(*(_QWORD *)(qword_140E3E860 + 24) + 40LL) = -16777216;
  BgpClearScreen(0xFF000000);
  BcpSetCursorPosition(
    *(_DWORD *)((char *)&unk_140E0ECC0 + v2 + 16),
    *(_DWORD *)((char *)&unk_140E0ECC0 + v2 + 20),
    (int *)((char *)&unk_140E0ECC0 + v2 + 20));
  BcpDisplayCriticalString(&stru_140E3E850, *(_DWORD *)(v2 + v3 + 8), v4, DisplayType);
  return 0LL;
}
