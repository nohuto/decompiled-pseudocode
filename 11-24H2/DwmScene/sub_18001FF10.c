/*
 * XREFs of sub_18001FF10 @ 0x18001FF10
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CE49 (_CxxThrowException.c)
 */

void __noreturn sub_18001FF10()
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  pExceptionObject[1] = "Not implemented yet";
  pExceptionObject[0] = &std::logic_error::`vftable';
  throw (std::logic_error *)pExceptionObject;
}
