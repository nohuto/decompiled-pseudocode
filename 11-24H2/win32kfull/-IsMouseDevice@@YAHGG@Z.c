/*
 * XREFs of ?IsMouseDevice@@YAHGG@Z @ 0x140210510
 * Callers:
 *     _GetRegisteredRawInputDevices @ 0x14020F454 (_GetRegisteredRawInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMouseDevice(__int16 a1, __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 != 1 || a2 != 2 )
    return 0LL;
  return result;
}
