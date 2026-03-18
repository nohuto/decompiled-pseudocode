/*
 * XREFs of MiMarkHugePfnGood @ 0x140671374
 * Callers:
 *     MiUnlinkBadPages @ 0x1406747FC (MiUnlinkBadPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiIsPageInHugePfn @ 0x1403CEEA0 (MiIsPageInHugePfn.c)
 *     MiUnlockHugePfn @ 0x1404CF53C (MiUnlockHugePfn.c)
 *     MiHugePfnPartition @ 0x1404D91E4 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     MiLockHugePfn @ 0x140670D7C (MiLockHugePfn.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnGood(ULONG_PTR a1)
{
  unsigned __int64 v1; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r13
  unsigned int v9; // r14d
  unsigned __int64 v10; // rax
  signed __int64 *v11; // rcx
  int v12; // r12d
  signed __int64 *v13; // rax
  signed __int64 *v14; // rdx
  bool i; // zf
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int8 v20; // [rsp+60h] [rbp+8h]

  v1 = (a1 >> 18) & 0x3FFFFF;
  v3 = 0;
  MiPageToNode(a1);
  v4 = 0LL;
  v5 = (__int64 *)(qword_140E2FFC0 + 8 * v1);
  v20 = MiLockHugePfn((__int64)v5);
  if ( !(unsigned int)MiIsPageInHugePfn(a1) )
    goto LABEL_2;
  v7 = *v5;
  if ( (*v5 & 8) != 0 )
  {
    v8 = MiHugePfnPartition(v5);
    if ( !v8 )
    {
LABEL_2:
      v3 = -1073740748;
      goto LABEL_27;
    }
    v9 = a1 & 0x3FFFF;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FED0);
    v4 = qword_140E2FF20;
    while ( v4 )
    {
      v10 = *(_QWORD *)(v4 + 24) & 0x3FFFFFLL;
      if ( v1 <= v10 )
      {
        if ( v1 >= v10 )
          break;
        v4 = *(_QWORD *)v4;
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
    v11 = *(signed __int64 **)(v4 + 32);
    if ( _bittest64(v11, v9) )
    {
      _bittestandreset64(v11, v9);
      v12 = 1;
      --qword_140E2FF28;
      v3 = 274;
      v13 = v11;
      v14 = v11 + 4095;
      for ( i = *v11 == 0; i; i = v16 == 0 )
      {
        v16 = *++v13;
        if ( v13 == v14 )
        {
          if ( !v16 )
          {
            if ( (v7 & 7) == 4 )
              MiUnlinkHugeRange(v8, v1);
            else
              v12 = 0;
            RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2FF20, v4);
            ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FED0);
            v17 = *v5;
            *v5 &= ~8uLL;
            if ( v12 || (((v17 & 7) - 3) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
              MiInsertHugeRangeInList(0LL, v1, 2);
            goto LABEL_27;
          }
          break;
        }
      }
      v18 = *(_QWORD *)(v4 + 32);
      if ( _bittest64((const signed __int64 *)(v18 + 0x8000), v9) )
        _bittestandreset64((signed __int64 *)(v18 + 0x8000), v9);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FED0);
    v4 = 0LL;
  }
LABEL_27:
  LOBYTE(v6) = v20;
  MiUnlockHugePfn((__int64)v5, v6);
  if ( v4 )
  {
    ExFreePoolWithTag(*(PVOID *)(v4 + 32), 0);
    ExFreePoolWithTag((PVOID)v4, 0);
  }
  return v3;
}
