/*
 * XREFs of HalpAcpiPrmCacheInit @ 0x140C0F960
 * Callers:
 *     HalpAcpiInitSystem @ 0x140B4F150 (HalpAcpiInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 HalpAcpiPrmCacheInit()
{
  __int64 v0; // rbp
  __int64 *i; // rdi
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 *j; // rsi
  __int64 v6; // rax
  __int64 *v7; // rcx
  _QWORD *v8; // rax
  __int64 *k; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // r14
  __int64 *m; // rsi
  __int64 v14; // rax
  __int64 *v15; // rcx
  _QWORD *v16; // rax

  v0 = HalpAcpiLoaderBlock;
  if ( !HalpAcpiPrmInitialized )
  {
    qword_140E0F678 = (__int64)&HalpAcpiPrmUpdateList;
    HalpAcpiPrmUpdateList = (__int64)&HalpAcpiPrmUpdateList;
    for ( i = *(__int64 **)(*(_QWORD *)(HalpAcpiLoaderBlock + 240) + 2600LL);
          i != (__int64 *)(*(_QWORD *)(v0 + 240) + 2600LL);
          i = (__int64 *)*i )
    {
      Pool2 = ExAllocatePool2(0x40uLL, 0x60uLL, 0x416C6148uLL);
      v3 = (_QWORD *)Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      v4 = Pool2 + 80;
      *(_OWORD *)Pool2 = *(_OWORD *)i;
      *(_OWORD *)(Pool2 + 16) = *((_OWORD *)i + 1);
      *(_OWORD *)(Pool2 + 32) = *((_OWORD *)i + 2);
      *(_OWORD *)(Pool2 + 48) = *((_OWORD *)i + 3);
      *(_OWORD *)(Pool2 + 64) = *((_OWORD *)i + 4);
      *(_OWORD *)(Pool2 + 80) = *((_OWORD *)i + 5);
      *(_QWORD *)(Pool2 + 88) = Pool2 + 80;
      *(_QWORD *)(Pool2 + 80) = Pool2 + 80;
      for ( j = (__int64 *)i[10]; j != i + 10; j = (__int64 *)*j )
      {
        v6 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x416C6148uLL);
        if ( !v6 )
          return 3221225495LL;
        *(_OWORD *)v6 = *(_OWORD *)j;
        *(_OWORD *)(v6 + 16) = *((_OWORD *)j + 1);
        *(_OWORD *)(v6 + 32) = *((_OWORD *)j + 2);
        *(_OWORD *)(v6 + 48) = *((_OWORD *)j + 3);
        *(_OWORD *)(v6 + 64) = *((_OWORD *)j + 4);
        v7 = *(__int64 **)(v4 + 8);
        if ( *v7 != v4 )
          goto LABEL_22;
        *(_QWORD *)v6 = v4;
        *(_QWORD *)(v6 + 8) = v7;
        *v7 = v6;
        *(_QWORD *)(v4 + 8) = v6;
      }
      v8 = (_QWORD *)qword_140E0F678;
      if ( *(__int64 **)qword_140E0F678 != &HalpAcpiPrmUpdateList )
LABEL_22:
        __fastfail(3u);
      *v3 = &HalpAcpiPrmUpdateList;
      v3[1] = v8;
      *v8 = v3;
      qword_140E0F678 = (__int64)v3;
    }
    qword_140E0F6B0 = (__int64)&HalpAcpiPrmFirmwareList;
    HalpAcpiPrmFirmwareList = (__int64)&HalpAcpiPrmFirmwareList;
    for ( k = *(__int64 **)(*(_QWORD *)(v0 + 240) + 2616LL);
          k != (__int64 *)(*(_QWORD *)(v0 + 240) + 2616LL);
          k = (__int64 *)*k )
    {
      v10 = ExAllocatePool2(0x40uLL, 0x60uLL, 0x416C6148uLL);
      v11 = (_QWORD *)v10;
      if ( !v10 )
        return 3221225495LL;
      v12 = v10 + 80;
      *(_OWORD *)v10 = *(_OWORD *)k;
      *(_OWORD *)(v10 + 16) = *((_OWORD *)k + 1);
      *(_OWORD *)(v10 + 32) = *((_OWORD *)k + 2);
      *(_OWORD *)(v10 + 48) = *((_OWORD *)k + 3);
      *(_OWORD *)(v10 + 64) = *((_OWORD *)k + 4);
      *(_OWORD *)(v10 + 80) = *((_OWORD *)k + 5);
      *(_QWORD *)(v10 + 88) = v10 + 80;
      *(_QWORD *)(v10 + 80) = v10 + 80;
      for ( m = (__int64 *)k[10]; m != k + 10; m = (__int64 *)*m )
      {
        v14 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x416C6148uLL);
        if ( !v14 )
          return 3221225495LL;
        *(_OWORD *)v14 = *(_OWORD *)m;
        *(_OWORD *)(v14 + 16) = *((_OWORD *)m + 1);
        *(_OWORD *)(v14 + 32) = *((_OWORD *)m + 2);
        *(_OWORD *)(v14 + 48) = *((_OWORD *)m + 3);
        *(_OWORD *)(v14 + 64) = *((_OWORD *)m + 4);
        v15 = *(__int64 **)(v12 + 8);
        if ( *v15 != v12 )
          goto LABEL_22;
        *(_QWORD *)v14 = v12;
        *(_QWORD *)(v14 + 8) = v15;
        *v15 = v14;
        *(_QWORD *)(v12 + 8) = v14;
      }
      v16 = (_QWORD *)qword_140E0F6B0;
      if ( *(__int64 **)qword_140E0F6B0 != &HalpAcpiPrmFirmwareList )
        goto LABEL_22;
      *v11 = &HalpAcpiPrmFirmwareList;
      v11[1] = v16;
      *v16 = v11;
      qword_140E0F6B0 = (__int64)v11;
    }
    HalpAcpiPrmInitialized = 1;
  }
  return 0LL;
}
