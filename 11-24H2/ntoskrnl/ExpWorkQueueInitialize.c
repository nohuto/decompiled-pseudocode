/*
 * XREFs of ExpWorkQueueInitialize @ 0x1407C05BC
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x1408F7C7C (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     KeInitializePriQueue @ 0x1405C6AE8 (KeInitializePriQueue.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ExpWorkQueueInitialize(__int64 a1, int a2, int a3, __int64 a4, USHORT *a5, unsigned int a6)
{
  USHORT *v10; // rbx
  unsigned int v11; // eax
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF
  USHORT Count; // [rsp+58h] [rbp+10h] BYREF

  Count = 0;
  Affinity = 0LL;
  memset_0((void *)a1, 0, 0x2E0uLL);
  v10 = a5;
  KeQueryNodeActiveAffinity(*a5, &Affinity, &Count);
  KeInitializePriQueue(a1, Count);
  *(_QWORD *)(a1 + 696) = v10;
  v11 = a2 ^ (*(_DWORD *)(a1 + 716) ^ a2) & 0x80000000;
  *(_DWORD *)(a1 + 720) = a3;
  *(_DWORD *)(a1 + 716) = v11;
  result = a6;
  *(_DWORD *)(a1 + 724) = a6;
  *(_QWORD *)(a1 + 688) = a4;
  return result;
}
