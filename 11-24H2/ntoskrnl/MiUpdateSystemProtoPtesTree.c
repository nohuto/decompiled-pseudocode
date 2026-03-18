/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x14026047C
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14023C6CC (MiEntireSubsectionIsPurged.c)
 *     MiCreatePrototypePtes @ 0x140261F58 (MiCreatePrototypePtes.c)
 *     MiDeleteSubsectionPages @ 0x140370928 (MiDeleteSubsectionPages.c)
 *     MiDeleteEmptySubsections @ 0x1403F7FC0 (MiDeleteEmptySubsections.c)
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x1409451C0 (MiBuildImageControlArea.c)
 *     MiExtendSection @ 0x1409463BC (MiExtendSection.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140A13384 (MiDeletePageFileSectionNodes.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     RtlpTreeDoubleRotateNodes @ 0x1402611E4 (RtlpTreeDoubleRotateNodes.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiUpdateSystemProtoPtesTree(__int64 a1, char a2)
{
  _QWORD *v2; // rdi
  unsigned __int64 v5; // rsi
  KIRQL v6; // r15
  __int64 v7; // rdx
  bool v8; // cl
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  _BYTE *v12; // r14
  char v13; // si
  unsigned __int8 v14; // bp
  __int64 v15; // rax
  char v16; // r9
  _BOOL8 v17; // r9
  __int64 v18; // r8
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(a1 + 24) & 7) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 24) & 7 )
    {
      case 1:
        v5 = *(_QWORD *)(a1 - 48);
        break;
      case 2:
        v2 = (_QWORD *)(a1 + 24);
        v5 = *(_QWORD *)(*(_QWORD *)(a1 - 56) + 136LL);
        break;
      case 3:
        v5 = *(_QWORD *)(a1 + 48);
        break;
      case 4:
        v5 = *(_QWORD *)(a1 + 32);
        break;
      default:
        v5 = 0LL;
        break;
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 - 112);
  }
  if ( (a2 & 2) != 0 )
  {
    v6 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2D610);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140E2D610);
  }
  if ( (a2 & 1) == 0 )
  {
    RtlAvlRemoveNode(&qword_140E2D608, a1);
    *v2 &= ~8uLL;
    goto LABEL_22;
  }
  v7 = qword_140E2D608;
  v8 = 0;
  if ( !qword_140E2D608 )
    goto LABEL_12;
  while ( 1 )
  {
    switch ( *(_DWORD *)(v7 + 24) & 7 )
    {
      case 0:
        v9 = *(_QWORD *)(v7 - 112);
        goto LABEL_9;
      case 1:
        v9 = *(_QWORD *)(v7 - 48);
        goto LABEL_9;
      case 2:
        v9 = *(_QWORD *)(*(_QWORD *)(v7 - 56) + 136LL);
        goto LABEL_9;
      case 3:
        v9 = *(_QWORD *)(v7 + 48);
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(v7 + 24) & 7) != 4LL )
      break;
    v9 = *(_QWORD *)(v7 + 32);
LABEL_9:
    if ( v5 >= v9 )
      break;
    v10 = *(_QWORD *)v7;
    if ( !*(_QWORD *)v7 )
      goto LABEL_12;
LABEL_34:
    v7 = v10;
  }
  v10 = *(_QWORD *)(v7 + 8);
  if ( v10 )
    goto LABEL_34;
  v8 = 1;
LABEL_12:
  *(_QWORD *)a1 = 0LL;
  v11 = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  if ( !v7 )
  {
    qword_140E2D608 = a1;
    goto LABEL_21;
  }
  *(_QWORD *)(v7 + 8LL * v8) = a1;
  while ( 1 )
  {
    v12 = (_BYTE *)(v7 + 16);
    v13 = *(_BYTE *)(v7 + 16);
    v14 = v13 & 3;
    if ( (v13 & 3) != 0 )
      break;
    v11 = v7;
    *v12 = v13 ^ (v13 ^ (2 * v8 - 1)) & 3;
    v7 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v7 )
      goto LABEL_21;
    v8 = *(_QWORD *)v7 != v11;
  }
  if ( v14 != ((2 * v8 - 1) & 3) )
  {
    *v12 = v13 & 0xFC;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(v11 + 16) & 3) == v14 )
  {
    v17 = !v8;
    if ( (*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v7 && *(_QWORD *)(v7 + 8LL * v8) == v11 )
    {
      v18 = *(_QWORD *)(v7 + 16);
      v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        if ( v19[1] == v7 )
        {
          v19[1] = v11;
        }
        else
        {
          if ( *v19 != v7 )
            goto LABEL_46;
          *v19 = v11;
        }
      }
      else
      {
        if ( qword_140E2D608 != v7 )
          goto LABEL_46;
        qword_140E2D608 = v11;
      }
      *(_QWORD *)(v11 + 16) ^= (v18 ^ *(_QWORD *)(v11 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
      v20 = *(_QWORD *)(v11 + 8 * v17);
      if ( !v20 )
      {
LABEL_62:
        *(_QWORD *)(v7 + 8 * !v17) = v20;
        *(_QWORD *)(v11 + 8 * v17) = v7;
        *(_QWORD *)(v7 + 16) = v11 | *(_DWORD *)(v7 + 16) & 3;
        *(_BYTE *)(v11 + 16) &= 0xFCu;
        *(_BYTE *)(v7 + 16) &= 0xFCu;
        goto LABEL_21;
      }
      v21 = *(_QWORD *)(v20 + 16);
      if ( (v21 & 0xFFFFFFFFFFFFFFFCuLL) == v11 )
      {
        *(_QWORD *)(v20 + 16) = v7 | v21 & 3;
        goto LABEL_62;
      }
    }
LABEL_46:
    __fastfail(0x1Du);
  }
  v15 = RtlpTreeDoubleRotateNodes(&qword_140E2D608, v7, v11, v8);
  *v12 &= 0xFCu;
  v16 = *(_BYTE *)(v11 + 16);
  *(_BYTE *)(v11 + 16) = v16 & 0xFC;
  v7 = *(unsigned __int8 *)(v15 + 16);
  if ( v14 == (*(_BYTE *)(v15 + 16) & 3) )
  {
    *v12 ^= (v14 ^ *v12 ^ 0xFE) & 3;
  }
  else
  {
    v7 = ((unsigned __int8)v7 ^ 0xFE) & 3;
    if ( v14 == (_DWORD)v7 )
      *(_BYTE *)(v11 + 16) = v16 ^ (v13 ^ v16) & 3;
  }
  *(_BYTE *)(v15 + 16) &= 0xFCu;
LABEL_21:
  *(_QWORD *)(a1 + 24) |= 8uLL;
LABEL_22:
  if ( v6 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      dword_140E2D610 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2D610, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      dword_140E2D610 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2D610, retaddr);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v6;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(v6);
  }
}
