/*
 * XREFs of ?THREAD_CODEPAGE@@YAGXZ @ 0x1C0204B1C
 * Callers:
 *     SfnIMECONTROL @ 0x1C0206190 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024B4C8 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C024B618 (RtlWCSMessageWParamCharToMB.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE(void)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 152LL);
}
