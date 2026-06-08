/*
 * XREFs of GetRegistryDwordValue @ 0x140028658
 * Callers:
 *     GetRegistryQwordValue @ 0x14002C364 (GetRegistryQwordValue.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140036F80 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 *     ProcLibTraceSummary2 @ 0x140042E48 (ProcLibTraceSummary2.c)
 *     InitDriver @ 0x14004903C (InitDriver.c)
 *     ProcLibGlobalInit @ 0x14004A9C8 (ProcLibGlobalInit.c)
 * Callees:
 *     GetRegistryDwordValueNoDefault @ 0x140047484 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall GetRegistryDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = GetRegistryDwordValueNoDefault();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
