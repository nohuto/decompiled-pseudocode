/*
 * XREFs of FsFilterInit @ 0x14058180C
 * Callers:
 *     FsRtlInitSystem @ 0x140C18D7C (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 FsFilterInit()
{
  PVOID v0; // rbx
  unsigned int v1; // ecx
  __int64 result; // rax

  AcquireOpsReservePool = (PVOID)ExAllocatePool2(0x40uLL);
  v0 = AcquireOpsReservePool;
  ReleaseOpsReservePool = ExAllocatePool2(0x40uLL);
  v1 = v0 != 0LL ? 0 : 0xC000009A;
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v1 = -1073741670;
  }
  byte_140F8E282 = 6;
  AcquireOpsEvent = 1;
  qword_140F8E290 = (__int64)&qword_140F8E288;
  qword_140F8E288 = (__int64)&qword_140F8E288;
  qword_140F8E2B0 = (__int64)&qword_140F8E2A8;
  qword_140F8E2A8 = (__int64)&qword_140F8E2A8;
  result = v1;
  dword_140F8E284 = 1;
  ReleaseOpsEvent = 1;
  byte_140F8E2A2 = 6;
  dword_140F8E2A4 = 1;
  return result;
}
