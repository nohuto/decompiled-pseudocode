/*
 * XREFs of MiMarkHugeRangeIoPfnDeleted @ 0x140677A40
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     MiIoPfnTreeLockContended @ 0x14048CC20 (MiIoPfnTreeLockContended.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiMarkHugeRangeIoPfnDeleted(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v4; // al
  _QWORD *v5; // rcx
  unsigned __int8 v6; // r14
  ULONG_PTR v7; // r15
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v9; // rbp
  ULONG_PTR v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  ULONG_PTR v13; // rax
  _QWORD **v14; // rax
  ULONG_PTR v15; // rcx
  _QWORD *v16; // rcx

  v4 = MiLockIoPfnTree(1LL, a2);
  v5 = (_QWORD *)qword_140E37300;
  v6 = v4;
  if ( qword_140E37300 )
  {
    v7 = BugCheckParameter2 + a2;
    BugCheckParameter4 = 0LL;
    v9 = v7 - 1;
    while ( 1 )
    {
      v10 = v5[3];
      if ( v9 < v10 )
        goto LABEL_7;
      if ( BugCheckParameter2 < v10 + 512 )
        break;
      v5 = (_QWORD *)v5[1];
LABEL_8:
      if ( !v5 )
      {
        while ( 1 )
        {
LABEL_31:
          if ( !BugCheckParameter4 || v9 < *(_QWORD *)(BugCheckParameter4 + 24) )
            goto LABEL_32;
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter4 + 172));
          if ( *(_DWORD *)(BugCheckParameter4 + 32) )
            KeBugCheckEx(0x1Au, 0x6194CuLL, BugCheckParameter2, v7 - 1, BugCheckParameter4);
          *(_BYTE *)(BugCheckParameter4 + 40) = 0;
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter4 + 172));
          BugCheckParameter2 = *(_QWORD *)(BugCheckParameter4 + 24) + 512LL;
          if ( v7 > BugCheckParameter2
            && ((unsigned int)MiIoPfnTreeLockContended(0) || v6 != 17 && KeShouldYieldProcessor()) )
          {
            break;
          }
          v14 = *(_QWORD ***)(BugCheckParameter4 + 8);
          v15 = BugCheckParameter4;
          if ( v14 )
          {
            v16 = *v14;
            for ( BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 8); v16; v16 = (_QWORD *)*v16 )
              BugCheckParameter4 = (ULONG_PTR)v16;
          }
          else
          {
            while ( 1 )
            {
              BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !BugCheckParameter4 || *(_QWORD *)BugCheckParameter4 == v15 )
                break;
              v15 = BugCheckParameter4;
            }
          }
        }
        MiUnlockIoPfnTree(v6, 1);
        MiLockIoPfnTree(1LL, v11);
        v12 = (_QWORD *)qword_140E37300;
        BugCheckParameter4 = 0LL;
        while ( 1 )
        {
          if ( !v12 )
            goto LABEL_31;
          v13 = v12[3];
          if ( v9 >= v13 )
          {
            if ( BugCheckParameter2 >= v13 + 512 )
            {
              v12 = (_QWORD *)v12[1];
              continue;
            }
            BugCheckParameter4 = (ULONG_PTR)v12;
          }
          v12 = (_QWORD *)*v12;
        }
      }
    }
    BugCheckParameter4 = (ULONG_PTR)v5;
LABEL_7:
    v5 = (_QWORD *)*v5;
    goto LABEL_8;
  }
LABEL_32:
  MiUnlockIoPfnTree(v6, 1);
}
