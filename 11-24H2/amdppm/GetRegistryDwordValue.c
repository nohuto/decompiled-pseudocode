/*
 * XREFs of GetRegistryDwordValue @ 0x140024360
 * Callers:
 *     InitDriver @ 0x140023E94 (InitDriver.c)
 *     GetRegistryQwordValue @ 0x140024404 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140034A5C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140034D84 (InitPerfStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x14003FCC0 (ProcLibTraceSummary2.c)
 *     ProcLibGlobalInit @ 0x140044504 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x140024384 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
