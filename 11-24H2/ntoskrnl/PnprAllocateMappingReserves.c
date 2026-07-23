/*
 * XREFs of PnprAllocateMappingReserves @ 0x14072D0A4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PnprFreeMappingReserve @ 0x14072D57C (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x14072DA04 (PnprInitializeMappingReserve.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAllocateMappingReserves(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rdi
  ULONG_PTR v6; // rbx
  _QWORD *Pool2; // rsi
  int v8; // ebx
  __int64 i; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx

  v5 = 0LL;
  v6 = 24 * a3;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, v6, 0x51706E50u);
  if ( Pool2 && (v5 = (_QWORD *)ExAllocatePool2(0x40uLL, v6, 0x51706E50u)) != 0LL )
  {
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      v8 = PnprInitializeMappingReserve(2LL, &Pool2[3 * i]);
      if ( v8 < 0 )
        goto LABEL_14;
      v8 = PnprInitializeMappingReserve(2050LL, &v5[3 * i]);
      if ( v8 < 0 )
      {
        PnprFreeMappingReserve(&Pool2[3 * i]);
        goto LABEL_11;
      }
    }
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_11:
  if ( v8 >= 0 )
    goto LABEL_19;
  if ( Pool2 )
  {
    if ( v5 )
    {
LABEL_14:
      if ( *Pool2 && *v5 )
      {
        v10 = PnprContext;
        v11 = *(unsigned int *)(PnprContext + 180);
        if ( !Pool2[3 * v11] )
        {
          *(_OWORD *)&Pool2[3 * v11] = *(_OWORD *)Pool2;
          Pool2[3 * v11 + 2] = Pool2[2];
          v12 = 3LL * *(unsigned int *)(v10 + 180);
          *(_OWORD *)&v5[v12] = *(_OWORD *)v5;
          v5[v12 + 2] = v5[2];
          *(_OWORD *)Pool2 = 0LL;
          Pool2[2] = 0LL;
          *(_OWORD *)v5 = 0LL;
          v5[2] = 0LL;
        }
        v8 = 0;
LABEL_19:
        *a1 = Pool2;
        *a2 = v5;
        return (unsigned int)v8;
      }
    }
    ExFreePoolWithTag(Pool2, 0x51706E50u);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x51706E50u);
  return (unsigned int)v8;
}
