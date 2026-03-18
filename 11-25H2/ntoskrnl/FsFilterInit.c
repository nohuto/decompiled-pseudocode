/*
 * XREFs of FsFilterInit @ 0x14057E05C
 * Callers:
 *     FsRtlInitSystem @ 0x140C07CDC (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  byte_140F8DAC2 = 6;
  AcquireOpsEvent = 1;
  qword_140F8DAD0 = (__int64)&qword_140F8DAC8;
  qword_140F8DAC8 = (__int64)&qword_140F8DAC8;
  qword_140F8DAF0 = (__int64)&qword_140F8DAE8;
  qword_140F8DAE8 = (__int64)&qword_140F8DAE8;
  result = v1;
  dword_140F8DAC4 = 1;
  ReleaseOpsEvent = 1;
  byte_140F8DAE2 = 6;
  dword_140F8DAE4 = 1;
  return result;
}
