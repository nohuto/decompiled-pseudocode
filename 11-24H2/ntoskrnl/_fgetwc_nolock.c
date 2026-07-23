/*
 * XREFs of _fgetwc_nolock @ 0x1405054A4
 * Callers:
 *     ReadString_0 @ 0x1405045A0 (ReadString_0.c)
 *     _whiteout @ 0x140504A10 (_whiteout.c)
 *     _winput_s @ 0x140504A68 (_winput_s.c)
 * Callees:
 *     _filwbuf_s @ 0x140484960 (_filwbuf_s.c)
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *File)
{
  wint_t result; // ax
  bool v3; // sf
  char *ptr; // rcx

  if ( File )
  {
    v3 = File->_cnt - 2 < 0;
    File->_cnt -= 2;
    if ( v3 )
    {
      return filwbuf_s();
    }
    else
    {
      ptr = File->_ptr;
      result = *(_WORD *)ptr;
      File->_ptr = ptr + 2;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
  return result;
}
