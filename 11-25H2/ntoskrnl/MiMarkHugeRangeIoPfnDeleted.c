/*
 * XREFs of MiMarkHugeRangeIoPfnDeleted @ 0x14066AE10
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockIoPfnTree @ 0x1403922D8 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 *     MiIoPfnTreeLockContended @ 0x140492B20 (MiIoPfnTreeLockContended.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  _QWORD *v11; // rcx
  ULONG_PTR v12; // rax
  _QWORD **v13; // rax
  ULONG_PTR v14; // rcx
  _QWORD *v15; // rcx

  v4 = MiLockIoPfnTree(1LL);
  v5 = (_QWORD *)qword_140E36F80;
  v6 = v4;
  if ( qword_140E36F80 )
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
          v13 = *(_QWORD ***)(BugCheckParameter4 + 8);
          v14 = BugCheckParameter4;
          if ( v13 )
          {
            v15 = *v13;
            for ( BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 8); v15; v15 = (_QWORD *)*v15 )
              BugCheckParameter4 = (ULONG_PTR)v15;
          }
          else
          {
            while ( 1 )
            {
              BugCheckParameter4 = *(_QWORD *)(BugCheckParameter4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !BugCheckParameter4 || *(_QWORD *)BugCheckParameter4 == v14 )
                break;
              v14 = BugCheckParameter4;
            }
          }
        }
        MiUnlockIoPfnTree(v6, 1);
        MiLockIoPfnTree(1LL);
        v11 = (_QWORD *)qword_140E36F80;
        BugCheckParameter4 = 0LL;
        while ( 1 )
        {
          if ( !v11 )
            goto LABEL_31;
          v12 = v11[3];
          if ( v9 >= v12 )
          {
            if ( BugCheckParameter2 >= v12 + 512 )
            {
              v11 = (_QWORD *)v11[1];
              continue;
            }
            BugCheckParameter4 = (ULONG_PTR)v11;
          }
          v11 = (_QWORD *)*v11;
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
