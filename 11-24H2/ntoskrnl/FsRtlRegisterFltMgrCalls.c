/*
 * XREFs of FsRtlRegisterFltMgrCalls @ 0x14070A270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlRegisterFltMgrCalls(__int64 a1)
{
  _InterlockedExchange64(&FltMgrCallbacks, a1);
}
