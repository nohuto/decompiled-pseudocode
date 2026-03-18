/*
 * XREFs of _fgetwc_nolock @ 0x140507BE4
 * Callers:
 *     ReadString_0 @ 0x140506CE0 (ReadString_0.c)
 *     _whiteout @ 0x140507150 (_whiteout.c)
 *     _winput_s @ 0x1405071A8 (_winput_s.c)
 * Callees:
 *     _filwbuf_s @ 0x140489C50 (_filwbuf_s.c)
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
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
