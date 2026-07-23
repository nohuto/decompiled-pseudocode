/*
 * XREFs of MiFillPageWithImageExtentContents @ 0x14067BED4
 * Callers:
 *     MiCopyImageExtentContents @ 0x1404C5964 (MiCopyImageExtentContents.c)
 *     MiCopyFromDirectMapExtent @ 0x1407F0664 (MiCopyFromDirectMapExtent.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReturnPteMappingSet @ 0x1402532A0 (MiReturnPteMappingSet.c)
 *     MiGetPteMappingSet @ 0x140335DF0 (MiGetPteMappingSet.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

struct _KPRCB *__fastcall MiFillPageWithImageExtentContents(
        char *BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4)
{
  ULONG_PTR BugCheckParameter4; // r14
  __int64 v6; // r12
  _QWORD *v9; // rsi
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v11; // rbx
  int v12; // ecx
  ULONG_PTR v13; // r9
  int v14; // r8d
  int v15; // edx
  char *v16; // rbx
  __int64 v17; // r10
  unsigned __int64 v18; // rsi
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rdi
  const void *v21; // rbp
  ULONG_PTR *v22; // rsi
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // rbx
  __int64 v25; // rdx
  __int16 v27; // [rsp+30h] [rbp-78h]
  unsigned __int64 v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+40h] [rbp-68h]
  __int128 v30; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR v31; // [rsp+60h] [rbp-48h]
  unsigned int v33; // [rsp+C8h] [rbp+20h]

  BugCheckParameter4 = a4;
  v30 = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  v27 = a3;
  v33 = (a3 & 0xFFF) + a4;
  MiGetPteMappingSet(0, (v33 > 0x1000) + 2LL, (__int64)&v30);
  v9 = (_QWORD *)v31;
  v29 = (__int64)(v31 << 25) >> 16;
  ValidPte = MiMakeValidPte(v31, a2, -1610612732);
  v11 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v9 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v9, ValidPte, 128LL);
  *v9 = v11;
  v12 = 0;
  v13 = a3 >> 12;
  v14 = *(_DWORD *)BugCheckParameter3 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v14 < v12 )
        KeBugCheckEx(0x1Au, 0x1481uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v15 = (v12 + v14) >> 1;
      v16 = &BugCheckParameter3[48 * v15];
      v17 = *((unsigned int *)v16 + 8);
      if ( (unsigned int)v13 >= (unsigned int)v17 )
        break;
      if ( !v15 )
        KeBugCheckEx(0x1Au, 0x1480uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v14 = v15 - 1;
    }
    if ( (unsigned int)v13 < (int)v17 + *((_DWORD *)v16 + 12) )
      break;
    v12 = v15 + 1;
  }
  v18 = (unsigned __int64)(v9 + 1);
  v28 = *((_QWORD *)v16 + 5) + (unsigned int)v13 - v17;
  v19 = MiMakeValidPte(v18, v28, 536870913);
  v20 = v19;
  if ( (MiFlags & 0x1000000000LL) != 0 && (v19 & 0x20) == 0 && v18 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(v18, v19, 128LL);
  *(_QWORD *)v18 = v20;
  v21 = (const void *)((v27 & 0xFFF) + ((__int64)(v18 << 25) >> 16));
  v22 = (ULONG_PTR *)(v18 + 8);
  if ( v33 > 0x1000 )
  {
    if ( v28 >= *((_QWORD *)v16 + 6) + *((_QWORD *)v16 + 5) - 1LL )
    {
      if ( (unsigned int)((v16 + 56 - BugCheckParameter3 - 8) / 48) == *(_DWORD *)BugCheckParameter3 )
        KeBugCheckEx(0x1Au, 0x1482uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v23 = *((_QWORD *)v16 + 11) << 12;
    }
    else
    {
      v23 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    v24 = v23 ^ (v20 ^ v23) & 0xFFF0000000000FFFuLL;
    if ( (MiFlags & 0x1000000000LL) != 0 && (v20 & 0x20) == 0 && (unsigned __int64)v22 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v22, v24, 128LL);
    *v22 = v24;
  }
  memmove((void *)v29, v21, BugCheckParameter4);
  if ( (_DWORD)BugCheckParameter4 != 4096 )
    memmove((void *)(BugCheckParameter4 + v29), qword_140E374A0, (unsigned int)(4096 - BugCheckParameter4));
  v25 = (v33 > 0x1000) + 2LL;
  do
  {
    *(_QWORD *)(v6 + v31) = CLFS_LSN_NULL_EXT;
    v6 += 8LL;
    --v25;
  }
  while ( v25 );
  return MiReturnPteMappingSet((__int64)&v30);
}
