/*
 * XREFs of DrvGetLogPixels @ 0x140152A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetLogPixels(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1080LL);
}
