/*
 * XREFs of MiInitializeDriverPtes @ 0x140C3F868
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     MiCheckForBootMappingsBetweenDrivers @ 0x140C3F490 (MiCheckForBootMappingsBetweenDrivers.c)
 *     MiReserveBootDriverPtes @ 0x140C3FB20 (MiReserveBootDriverPtes.c)
 */

__int64 __fastcall MiInitializeDriverPtes(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 *v2; // rsi
  __int64 *v3; // rbx
  PVOID v4; // rdx
  PVOID v5; // rt1
  volatile signed __int32 *v6; // rax
  __int64 Pool; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // rdx
  bool v10; // r8
  unsigned __int64 v11; // r10
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD *j; // rbx
  _QWORD *i; // rax
  __int64 v17; // rdx
  ULONG_PTR v18; // r9
  _QWORD **v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *k; // rbx
  _QWORD *m; // rbx
  _QWORD **v25; // rax
  void *v26; // rdi
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  _QWORD *v29; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = (__int64 *)(a1 + 16);
  v3 = *(__int64 **)(a1 + 16);
  v29 = 0LL;
  while ( v3 != v2 )
  {
    v4 = (PVOID)v3[6];
    v5 = *(PVOID *)&KeNumberProcessorsGroup0[9];
    if ( v4 == v5 || (v6 = (volatile signed __int32 *)&xmmword_140E2D628 + 1, v4 == PsHalImageBase) )
      v6 = (volatile signed __int32 *)&xmmword_140E2D628;
    _InterlockedAdd(v6, ((v3[8] & 0xFFF) != 0) + (*((_DWORD *)v3 + 16) >> 12));
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3[6]) )
      goto LABEL_17;
    Pool = MiAllocatePool(0x40uLL, 0x20uLL, 1883532621);
    v8 = (_QWORD *)Pool;
    if ( !Pool )
      return 0LL;
    v9 = v29;
    v10 = 0;
    *(_QWORD *)(Pool + 24) = v3;
    v11 = v3[6];
    if ( !v9 )
      goto LABEL_16;
    while ( 1 )
    {
      v12 = v9[3];
      v13 = *(_QWORD *)(v12 + 48);
      if ( v11 > v13 + (unsigned int)(*(_DWORD *)(v12 + 64) - 1) || v11 >= v13 )
        break;
      v14 = (_QWORD *)*v9;
      if ( !*v9 )
      {
        v10 = 0;
        goto LABEL_16;
      }
LABEL_14:
      v9 = v14;
    }
    v14 = (_QWORD *)v9[1];
    if ( v14 )
      goto LABEL_14;
    v10 = 1;
LABEL_16:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v29, (unsigned __int64)v9, v10, v8);
LABEL_17:
    v3 = (__int64 *)*v3;
    v1 = v29;
  }
  j = 0LL;
  for ( i = v1; i; i = (_QWORD *)*i )
    j = i;
  while ( j )
  {
    v17 = j[3];
    v18 = *(unsigned int *)(v17 + 64);
    if ( ((*(_QWORD *)(v17 + 48) >> 9) & 0xFFF8) << 9 )
      KeBugCheckEx(
        0x1Au,
        0x1019uLL,
        (((*(_QWORD *)(v17 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25 >> 16,
        v18,
        0LL);
    if ( !(unsigned int)MiReserveBootDriverPtes(
                          ((*(_QWORD *)(v17 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                          (unsigned int)(v18 + 4095) >> 12) )
      return 0LL;
    v19 = (_QWORD **)j[1];
    v20 = j;
    if ( v19 )
    {
      v21 = *v19;
      for ( j = (_QWORD *)j[1]; v21; v21 = (_QWORD *)*v21 )
        j = v21;
    }
    else
    {
      while ( 1 )
      {
        j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !j || (_QWORD *)*j == v20 )
          break;
        v20 = j;
      }
    }
  }
  for ( k = qword_140E2D620; k; k = (_QWORD *)*k )
    MiCheckForBootMappingsBetweenDrivers((__int64)k);
  if ( (KiFeatureSettings & 0x20000) == 0 )
    qword_140E2ECC8 = (unsigned __int64)(((__int64)((*(_QWORD *)(*(_QWORD *)qword_140E2D620 + 8LL) << 25)
                                                  + ((unsigned __int64)(unsigned int)(16
                                                                                    * *(_DWORD *)(*(_QWORD *)qword_140E2D620
                                                                                                + 16LL)) << 28)) >> 16)
                                       - qword_140E2ECD0) >> 21;
  m = 0LL;
  while ( v1 )
  {
    m = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( m )
  {
    v25 = (_QWORD **)m[1];
    v26 = m;
    v27 = m;
    if ( v25 )
    {
      v28 = *v25;
      for ( m = (_QWORD *)m[1]; v28; v28 = (_QWORD *)*v28 )
        m = v28;
    }
    else
    {
      while ( 1 )
      {
        m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !m || (_QWORD *)*m == v27 )
          break;
        v27 = m;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v29, (__int64)v26);
    ExFreePoolWithTag(v26, 0);
  }
  return 1LL;
}
