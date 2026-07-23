/*
 * XREFs of FsFilterInit @ 0x14057EB8C
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 FsFilterInit()
{
  PVOID v0; // rbx
  unsigned int v1; // ecx
  __int64 result; // rax

  AcquireOpsReservePool = (PVOID)ExAllocatePool2(0x40uLL, 0x3C8uLL, 0x676D5346u);
  v0 = AcquireOpsReservePool;
  ReleaseOpsReservePool = ExAllocatePool2(0x40uLL, 0x3C8uLL, 0x676D5346u);
  v1 = v0 != 0LL ? 0 : 0xC000009A;
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v1 = -1073741670;
  }
  byte_140F8E4A2 = 6;
  AcquireOpsEvent = 1;
  qword_140F8E4B0 = (__int64)&qword_140F8E4A8;
  qword_140F8E4A8 = (__int64)&qword_140F8E4A8;
  qword_140F8E490 = (__int64)&qword_140F8E488;
  qword_140F8E488 = (__int64)&qword_140F8E488;
  result = v1;
  dword_140F8E4A4 = 1;
  ReleaseOpsEvent = 1;
  byte_140F8E482 = 6;
  dword_140F8E484 = 1;
  return result;
}
