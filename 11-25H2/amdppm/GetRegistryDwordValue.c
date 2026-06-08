/*
 * XREFs of GetRegistryDwordValue @ 0x140023214
 * Callers:
 *     InitDriver @ 0x140022E14 (InitDriver.c)
 *     GetRegistryQwordValue @ 0x1400232B8 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x14003385C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140033B84 (InitPerfStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x14003EA70 (ProcLibTraceSummary2.c)
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x140023238 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
