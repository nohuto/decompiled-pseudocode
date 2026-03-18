/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x14020174C
 * Callers:
 *     xxxHardErrorControl @ 0x140216A70 (xxxHardErrorControl.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 66) || *((_QWORD *)this + 67) )
    return 1;
  return result;
}
