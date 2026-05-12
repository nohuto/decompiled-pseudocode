/*
 * XREFs of NvmeAdapterInitializeFabricProperties @ 0x1400D3774
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     PortGetKeepAliveTimeoutValue @ 0x1401B360C (PortGetKeepAliveTimeoutValue.c)
 */

__int64 __fastcall NvmeAdapterInitializeFabricProperties(__int64 *a1)
{
  unsigned int v2; // ebx
  void *Pool; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v2 = 0;
  Pool = (void *)RaidAllocatePool(64LL, 168LL, 1179541842LL, a1[1]);
  a1[74] = (__int64)Pool;
  if ( Pool )
  {
    memset_0(Pool, 0, 0xA8uLL);
    v4 = (_QWORD *)a1[74];
    v4[1] = v4;
    *v4 = v4;
    ExInitializeResourceLite((PERESOURCE)(a1[74] + 24));
    v5 = (_QWORD *)(a1[74] + 136);
    v5[1] = v5;
    *v5 = v5;
    KeInitializeSpinLock((PKSPIN_LOCK)(a1[74] + 128));
    *(_DWORD *)(a1[74] + 160) = -1;
    PortGetKeepAliveTimeoutValue(a1[2] + 40, a1[74] + 160);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
