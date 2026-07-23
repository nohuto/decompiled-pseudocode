/*
 * XREFs of MiInitializeDriverPtes @ 0x140C52C28
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     MiCheckForBootMappingsBetweenDrivers @ 0x140C52850 (MiCheckForBootMappingsBetweenDrivers.c)
 *     MiReserveBootDriverPtes @ 0x140C52EE0 (MiReserveBootDriverPtes.c)
 */

__int64 __fastcall MiInitializeDriverPtes(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 *v2; // rsi
  __int64 *v3; // rbx
  PVOID v4; // rdx
  volatile signed __int32 *v5; // rax
  __int64 Pool; // rax
  _QWORD *v7; // r9
  _QWORD *v8; // rdx
  bool v9; // r8
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *j; // rbx
  _QWORD *i; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // r9
  _QWORD **v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *k; // rbx
  _QWORD *m; // rbx
  _QWORD **v24; // rax
  void *v25; // rdi
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *v28; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = (__int64 *)(a1 + 16);
  v3 = *(__int64 **)(a1 + 16);
  v28 = 0LL;
  while ( v3 != v2 )
  {
    v4 = (PVOID)v3[6];
    if ( v4 == PsNtosImageBase || (v5 = (volatile signed __int32 *)&xmmword_140E2D9A8 + 1, v4 == PsHalImageBase) )
      v5 = (volatile signed __int32 *)&xmmword_140E2D9A8;
    _InterlockedAdd(v5, ((v3[8] & 0xFFF) != 0) + (*((_DWORD *)v3 + 16) >> 12));
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3[6]) )
      goto LABEL_17;
    Pool = MiAllocatePool(0x40uLL, 0x20uLL, 1883532621);
    v7 = (_QWORD *)Pool;
    if ( !Pool )
      return 0LL;
    v8 = v28;
    v9 = 0;
    *(_QWORD *)(Pool + 24) = v3;
    v10 = v3[6];
    if ( !v8 )
      goto LABEL_16;
    while ( 1 )
    {
      v11 = v8[3];
      v12 = *(_QWORD *)(v11 + 48);
      if ( v10 > v12 + (unsigned int)(*(_DWORD *)(v11 + 64) - 1) || v10 >= v12 )
        break;
      v13 = (_QWORD *)*v8;
      if ( !*v8 )
      {
        v9 = 0;
        goto LABEL_16;
      }
LABEL_14:
      v8 = v13;
    }
    v13 = (_QWORD *)v8[1];
    if ( v13 )
      goto LABEL_14;
    v9 = 1;
LABEL_16:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v28, (unsigned __int64)v8, v9, v7);
LABEL_17:
    v3 = (__int64 *)*v3;
    v1 = v28;
  }
  j = 0LL;
  for ( i = v1; i; i = (_QWORD *)*i )
    j = i;
  while ( j )
  {
    v16 = j[3];
    v17 = *(unsigned int *)(v16 + 64);
    if ( ((*(_QWORD *)(v16 + 48) >> 9) & 0xFFF8) << 9 )
      KeBugCheckEx(
        0x1Au,
        0x1019uLL,
        (((*(_QWORD *)(v16 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25 >> 16,
        v17,
        0LL);
    if ( !(unsigned int)MiReserveBootDriverPtes(
                          ((*(_QWORD *)(v16 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                          (unsigned int)(v17 + 4095) >> 12) )
      return 0LL;
    v18 = (_QWORD **)j[1];
    v19 = j;
    if ( v18 )
    {
      v20 = *v18;
      for ( j = (_QWORD *)j[1]; v20; v20 = (_QWORD *)*v20 )
        j = v20;
    }
    else
    {
      while ( 1 )
      {
        j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !j || (_QWORD *)*j == v19 )
          break;
        v19 = j;
      }
    }
  }
  for ( k = qword_140E2D9A0; k; k = (_QWORD *)*k )
    MiCheckForBootMappingsBetweenDrivers((__int64)k);
  if ( (KiFeatureSettings & 0x20000) == 0 )
    qword_140E2F048 = (unsigned __int64)(((__int64)((*(_QWORD *)(*(_QWORD *)qword_140E2D9A0 + 8LL) << 25)
                                                  + ((unsigned __int64)(unsigned int)(16
                                                                                    * *(_DWORD *)(*(_QWORD *)qword_140E2D9A0
                                                                                                + 16LL)) << 28)) >> 16)
                                       - qword_140E2F050) >> 21;
  m = 0LL;
  while ( v1 )
  {
    m = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( m )
  {
    v24 = (_QWORD **)m[1];
    v25 = m;
    v26 = m;
    if ( v24 )
    {
      v27 = *v24;
      for ( m = (_QWORD *)m[1]; v27; v27 = (_QWORD *)*v27 )
        m = v27;
    }
    else
    {
      while ( 1 )
      {
        m = (_QWORD *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !m || (_QWORD *)*m == v26 )
          break;
        v26 = m;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v28, (__int64)v25);
    ExFreePoolWithTag(v25, 0);
  }
  return 1LL;
}
