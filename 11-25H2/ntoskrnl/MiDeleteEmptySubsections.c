/*
 * XREFs of MiDeleteEmptySubsections @ 0x1402A6D2C
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x140459644 (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDeleteEmptySubsectionProtoPool @ 0x1402A67D8 (MiDeleteEmptySubsectionProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkUnusedSubsection @ 0x14031F694 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  _QWORD **v2; // rdi
  volatile LONG *v3; // rbx
  char v4; // r14
  __int64 v5; // rdx
  KIRQL v6; // r12
  _QWORD *v7; // rsi
  _QWORD *v8; // r15
  __int64 v9; // r13
  volatile LONG *v10; // r13
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
    v6 = ExAcquireSpinLockExclusive(v3);
LABEL_3:
    v7 = *v2;
    while ( v7 != v2 )
    {
      v8 = v7 - 11;
      ++v4;
      v9 = *(v7 - 11);
      v7 = (_QWORD *)*v7;
      v10 = (volatile LONG *)(v9 + 72);
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        if ( (v8[4] & 0x80000) != 0 )
        {
          v14[v12++] = v8[1];
          MiUpdateSystemProtoPtesTree(v8 + 15, 2LL);
          v8[1] = 0LL;
          MiUnlinkUnusedSubsection(v8);
        }
        if ( v12 == 16 || (v4 & 0xF) == 0 && ((*v3 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(v3);
          v11 = v10;
LABEL_17:
          LOBYTE(v5) = v6;
          MiReleaseSpinLockExclusive(v11, v5);
          MiDeleteEmptySubsectionProtoPool(&v12);
          v4 = 0;
          ExAcquireSpinLockExclusive(v3);
          goto LABEL_3;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      }
      else if ( v12 || (v4 & 0xF) == 0 && ((*v3 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
      {
        v11 = v3;
        goto LABEL_17;
      }
    }
    LOBYTE(v5) = v6;
    if ( *v2 != v2 )
    {
      MiReleaseSpinLockExclusive(v3, v5);
      MiDeleteEmptySubsectionProtoPool(&v12);
      continue;
    }
    break;
  }
  *(_QWORD *)(a1 + 1808) = 0LL;
  MiReleaseSpinLockExclusive(v3, v5);
  if ( v12 )
  {
    v13 = 1;
    MiDeleteEmptySubsectionProtoPool(&v12);
  }
}
