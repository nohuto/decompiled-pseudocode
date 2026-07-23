/*
 * XREFs of MiDeleteEmptySubsections @ 0x140292788
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x1403EDF30 (MiRemoveUnusedSegments.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x140338CE4 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteEmptySubsectionProtoPool @ 0x140473E98 (MiDeleteEmptySubsectionProtoPool.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  _QWORD **v2; // rdi
  volatile LONG *v3; // rbx
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  KIRQL v8; // r12
  _QWORD *v9; // rsi
  _QWORD *v10; // r15
  __int64 v11; // r13
  volatile LONG *v12; // r13
  __int64 result; // rax
  volatile LONG *v14; // rcx
  int v15; // [rsp+28h] [rbp-59h] BYREF
  int v16; // [rsp+2Ch] [rbp-55h]
  _QWORD v17[17]; // [rsp+30h] [rbp-51h] BYREF

  memset_0(v17, 0, 0x80uLL);
  v16 = 0;
  v2 = (_QWORD **)(a1 + 2112);
  v15 = 0;
  v3 = (volatile LONG *)(a1 + 1728);
  while ( 2 )
  {
    v4 = 0;
    v8 = ExAcquireSpinLockExclusive(v3);
LABEL_3:
    v9 = *v2;
    while ( v9 != v2 )
    {
      v10 = v9 - 11;
      ++v4;
      v11 = *(v9 - 11);
      v9 = (_QWORD *)*v9;
      v12 = (volatile LONG *)(v11 + 72);
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v12, v5, v6, v7) )
      {
        if ( (v10[4] & 0x80000) != 0 )
        {
          v17[v15++] = v10[1];
          MiUpdateSystemProtoPtesTree((__int64)(v10 + 15), 2);
          v10[1] = 0LL;
          MiUnlinkUnusedSubsection(v10);
        }
        if ( v15 == 16 || (v4 & 0xF) == 0 && ((*v3 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v3);
          v14 = v12;
LABEL_17:
          LOBYTE(v5) = v8;
          MiReleaseSpinLockExclusive(v14, v5);
          MiDeleteEmptySubsectionProtoPool(&v15);
          v4 = 0;
          ExAcquireSpinLockExclusive(v3);
          goto LABEL_3;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v12);
      }
      else if ( v15 || (v4 & 0xF) == 0 && ((*v3 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
      {
        v14 = v3;
        goto LABEL_17;
      }
    }
    LOBYTE(v5) = v8;
    if ( *v2 != v2 )
    {
      MiReleaseSpinLockExclusive(v3, v5);
      MiDeleteEmptySubsectionProtoPool(&v15);
      continue;
    }
    break;
  }
  *(_QWORD *)(a1 + 1808) = 0LL;
  result = MiReleaseSpinLockExclusive(v3, v5);
  if ( v15 )
  {
    v16 = 1;
    return MiDeleteEmptySubsectionProtoPool(&v15);
  }
  return result;
}
