/*
 * XREFs of _ReleaseDC @ 0x140023770
 * Callers:
 *     UserGetMonitorDC @ 0x140099680 (UserGetMonitorDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1400225A0 (ReleaseCacheDC.c)
 */

_BOOL8 __fastcall ReleaseDC(__int64 a1)
{
  return (unsigned int)ReleaseCacheDC(a1, 0) != 2;
}
