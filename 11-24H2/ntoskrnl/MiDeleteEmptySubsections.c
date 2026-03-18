/*
 * XREFs of MiDeleteEmptySubsections @ 0x1403F7FC0
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1403F734C (MiRemoveUnusedSegments.c)
 *     MiSegmentDereferenceWorker @ 0x1403F7BB0 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     MiUnlinkUnusedSubsection @ 0x14020F984 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiDeleteEmptySubsectionProtoPool @ 0x1403F8174 (MiDeleteEmptySubsectionProtoPool.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  _QWORD **v2; // rdi
  volatile LONG *v3; // rbx
  char v4; // r14
  KIRQL v5; // r12
  _QWORD *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r13
  volatile LONG *v9; // r13
  __int64 result; // rax
  volatile LONG *v11; // rcx
  int v12; // [rsp+28h] [rbp-59h] BYREF
  int v13; // [rsp+2Ch] [rbp-55h]
  _QWORD v14[17]; // [rsp+30h] [rbp-51h] BYREF

  memset_0(v14, 0, 0x80uLL);
  v13 = 0;
  v2 = (_QWORD **)(a1 + 2112);
  v12 = 0;
  v3 = (volatile LONG *)(a1 + 1728);
  while ( 2 )
  {
    v4 = 0;
    v5 = ExAcquireSpinLockExclusive(v3);
LABEL_3:
    v6 = *v2;
    while ( v6 != v2 )
    {
      v7 = (__int64)(v6 - 11);
      ++v4;
      v8 = *(v6 - 11);
      v6 = (_QWORD *)*v6;
      v9 = (volatile LONG *)(v8 + 72);
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        if ( (*(_DWORD *)(v7 + 32) & 0x80000) != 0 )
        {
          v14[v12++] = *(_QWORD *)(v7 + 8);
          MiUpdateSystemProtoPtesTree(v7 + 120, 2);
          *(_QWORD *)(v7 + 8) = 0LL;
          MiUnlinkUnusedSubsection(v7);
        }
        if ( v12 == 16 || (v4 & 0xF) == 0 && ((*v3 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v3);
          v11 = v9;
LABEL_17:
          MiReleaseSpinLockExclusive(v11, v5);
          MiDeleteEmptySubsectionProtoPool(&v12);
          v4 = 0;
          ExAcquireSpinLockExclusive(v3);
          goto LABEL_3;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      }
      else if ( v12 || (v4 & 0xF) == 0 && ((*v3 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
      {
        v11 = v3;
        goto LABEL_17;
      }
    }
    if ( *v2 != v2 )
    {
      MiReleaseSpinLockExclusive(v3, v5);
      MiDeleteEmptySubsectionProtoPool(&v12);
      continue;
    }
    break;
  }
  *(_QWORD *)(a1 + 1808) = 0LL;
  result = MiReleaseSpinLockExclusive(v3, v5);
  if ( v12 )
  {
    v13 = 1;
    return MiDeleteEmptySubsectionProtoPool(&v12);
  }
  return result;
}
