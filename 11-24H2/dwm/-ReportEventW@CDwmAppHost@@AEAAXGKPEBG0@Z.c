/*
 * XREFs of ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140003ECC
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x14000C6C0 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmAppHost::ReportEventW(CDwmAppHost *this, WORD a2, DWORD a3, const unsigned __int16 *a4)
{
  WORD wNumStrings; // di
  char *v7; // rbx
  __int128 Strings; // [rsp+50h] [rbp-18h] BYREF

  Strings = 0LL;
  if ( a4 )
    *(_QWORD *)&Strings = a4;
  wNumStrings = a4 != 0LL;
  if ( a3 != dword_14001822C )
  {
    v7 = (char *)RegisterEventSourceW(0LL, L"Desktop Window Manager");
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      ReportEventW(v7, a2, 0, a3, 0LL, wNumStrings, 0, (LPCWSTR *)&Strings, 0LL);
      dword_14001822C = a3;
      DeregisterEventSource(v7);
    }
  }
}
