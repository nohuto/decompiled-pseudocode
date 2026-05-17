/*
 * XREFs of ZwQuerySystemTime @ 0x1801627D0
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800E0D10 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800F1F70 (RtlAddFunctionTable.c)
 *     RtlRunEncodeUnicodeString @ 0x180110260 (RtlRunEncodeUnicodeString.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ZwQuerySystemTime(_QWORD *a1)
{
  return RtlQuerySystemTime(a1);
}
