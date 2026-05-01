/*
 * XREFs of CrmRegistrationInitialize @ 0x18003EAF0
 * Callers:
 *     CrmSrvRegister @ 0x18003DC60 (CrmSrvRegister.c)
 *     CrmRpcSrvRegister @ 0x18003DF90 (CrmRpcSrvRegister.c)
 *     CrmGlobalsStartCrmRegistrations @ 0x18007B748 (CrmGlobalsStartCrmRegistrations.c)
 * Callees:
 *     CempLockInitialize @ 0x180040C1C (CempLockInitialize.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
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
