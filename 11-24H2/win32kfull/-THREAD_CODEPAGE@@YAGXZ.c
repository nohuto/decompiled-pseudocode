/*
 * XREFs of ?THREAD_CODEPAGE@@YAGXZ @ 0x14021CB70
 * Callers:
 *     fnHkINLPMSG @ 0x1400800D0 (fnHkINLPMSG.c)
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1401E8330 (RtlWCSMessageWParamCharToMB.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14021C9EC (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall THREAD_CODEPAGE(__int64 a1, __int64 a2)
{
  return *(unsigned __int16 *)(*((_QWORD *)PtiCurrent(a1, a2) + 65) + 152LL);
}
