/*
 * XREFs of CiSystemInitialize @ 0x1C000FA30
 * Callers:
 *     CsInitialize @ 0x1C000F040 (CsInitialize.c)
 * Callees:
 *     memset @ 0x1C0005300 (memset.c)
 *     CiSystemTerminate @ 0x1C000C89C (CiSystemTerminate.c)
 */

__int64 CiSystemInitialize()
{
  NTSTATUS SystemInformation; // ebx
  size_t v1; // rdi
  void *Pool2; // rax

  SystemInformation = ZwQuerySystemInformation(SystemBasicInformation, &CiSystemBasicInfo, 0x40u, 0LL);
  v1 = 24LL * byte_1C00092D8;
  Pool2 = (void *)ExAllocatePool2(64LL, v1, 1953658433LL);
  CiLastIdleStats = (__int64)Pool2;
  if ( !Pool2 )
  {
    SystemInformation = -1073741801;
LABEL_4:
    CiSystemTerminate();
    return (unsigned int)SystemInformation;
  }
  memset(Pool2, 0, v1);
  if ( SystemInformation < 0 )
    goto LABEL_4;
  return (unsigned int)SystemInformation;
}
