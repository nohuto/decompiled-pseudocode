/*
 * XREFs of HalRegisterErrataCallbacks @ 0x140BE0860
 * Callers:
 *     <none>
 * Callees:
 *     EmpProviderRegister @ 0x140AAEE50 (EmpProviderRegister.c)
 */

__int64 HalRegisterErrataCallbacks()
{
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  return EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_1400064B0, 6u, &v1);
}
