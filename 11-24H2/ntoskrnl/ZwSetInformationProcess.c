/*
 * XREFs of ZwSetInformationProcess @ 0x1406A6790
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x140648930 (DifZwSetInformationProcessWrapper.c)
 *     CmpInitializeRegistryProcess @ 0x1407D8250 (CmpInitializeRegistryProcess.c)
 *     RtlCreateUserStack @ 0x1409E5C7C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140A1A87C (RtlpWow64CreateUserStack.c)
 *     StartFirstUserProcess @ 0x140C5FF68 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
