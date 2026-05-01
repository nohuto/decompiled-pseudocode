/*
 * XREFs of CrmRegistrationInitialize @ 0x18003EA70
 * Callers:
 *     CrmSrvRegister @ 0x18003DBE0 (CrmSrvRegister.c)
 *     CrmRpcSrvRegister @ 0x18003DF10 (CrmRpcSrvRegister.c)
 *     CrmGlobalsStartCrmRegistrations @ 0x18007B7A8 (CrmGlobalsStartCrmRegistrations.c)
 * Callees:
 *     CempLockInitialize @ 0x180040B9C (CempLockInitialize.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall CrmRegistrationInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x98uLL);
  CempLockInitialize(a1);
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  result = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  return result;
}
