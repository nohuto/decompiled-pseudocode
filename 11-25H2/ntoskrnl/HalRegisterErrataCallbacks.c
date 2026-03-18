/*
 * XREFs of HalRegisterErrataCallbacks @ 0x140BCD860
 * Callers:
 *     <none>
 * Callees:
 *     EmpProviderRegister @ 0x140AAEEF0 (EmpProviderRegister.c)
 */

__int64 HalRegisterErrataCallbacks()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  return EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140006490, 6u, &v1);
}
