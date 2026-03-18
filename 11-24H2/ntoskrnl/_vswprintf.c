/*
 * XREFs of _vswprintf @ 0x1404FE2D0
 * Callers:
 *     <none>
 * Callees:
 *     _vswprintf_l @ 0x1404FE2EC (_vswprintf_l.c)
 */

int __cdecl vswprintf(wchar_t *Dest, const wchar_t *Format, va_list Args)
{
  return vswprintf_l(Dest, Format, 0LL, Args);
}
