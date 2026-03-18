/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0015018
 * Callers:
 *     xxxDesktopThread @ 0x1C002ABF0 (xxxDesktopThread.c)
 *     zzzReattachThreads @ 0x1C0038F98 (zzzReattachThreads.c)
 *     xxxHardErrorControl @ 0x1C02234A4 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 60) || *((_QWORD *)this + 61) )
    return 1;
  return result;
}
