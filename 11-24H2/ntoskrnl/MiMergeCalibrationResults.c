/*
 * XREFs of MiMergeCalibrationResults @ 0x1406949C4
 * Callers:
 *     MiZeroPageCalibrate @ 0x140694F5C (MiZeroPageCalibrate.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiIsCalibrationWorthwhile @ 0x140490824 (MiIsCalibrationWorthwhile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiMergeCalibrationResults(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rbp
  KIRQL v11; // r12
  __int64 v12; // r9
  void *v13; // rbx
  __int64 v14; // xmm1_8
  __int64 v15; // rdi
  unsigned __int64 *v16; // r8
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax

  v5 = *(_DWORD *)a4;
  v6 = (_DWORD *)(a2 + 64);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 64));
  if ( (unsigned int)MiIsCalibrationWorthwhile(a3, v5, *(unsigned int *)(*(_QWORD *)(*a1 + 176LL) + 56LL), 1LL) )
  {
    v12 = a3 + 16;
    v13 = *(void **)(a3 + 48);
    *(_OWORD *)a3 = *(_OWORD *)a4;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a4 + 32);
    v14 = *(_QWORD *)(a4 + 48);
    v15 = 2LL;
    *(_QWORD *)(a3 + 48) = v14;
    v16 = (unsigned __int64 *)(a2 + 576 + (*(_DWORD *)*a1 != 0 ? 8 : 0));
    do
    {
      v17 = *(_QWORD *)(a3 + 48);
      v18 = *(unsigned int *)(v12 + 20);
      if ( v17 )
        v19 = a1[35]
            / (unsigned __int64)*(unsigned int *)(v12 + 20)
            / *(_QWORD *)(v17 + 16LL * (unsigned int)(*(_DWORD *)(v12 + 20) - 1) + 8);
      else
        v19 = 0x200000uLL / MiUnmeasuredTimeToZeroOneLargePage[a5];
      *(_QWORD *)v12 = v19;
      v20 = v18 * v19;
      if ( *v16 < v20 )
        *v16 = v20;
      v16 += 2;
      v12 += 8LL;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    v13 = *(void **)(a4 + 48);
  }
  MiReleaseSpinLockExclusive(v6, v11);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
}
