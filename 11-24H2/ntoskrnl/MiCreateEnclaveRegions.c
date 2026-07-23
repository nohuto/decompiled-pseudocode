/*
 * XREFs of MiCreateEnclaveRegions @ 0x140C5A06C
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall MiCreateEnclaveRegions(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 Pool; // rax
  bool v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rax

  v1 = 0LL;
  qword_140E37630 = 0LL;
  stru_140E37638.Count = 0LL;
  qword_140E37628 = (__int64)&qword_140E37620;
  qword_140E37620 = (__int64)&qword_140E37620;
  v2 = *(_QWORD *)(a1 + 360);
  if ( (v2 & 1) != 0 )
  {
    if ( v2 == 1 )
      i = 0LL;
    else
      i = v2 ^ ((a1 + 352) | 1);
  }
  else
  {
    i = *(_QWORD *)(a1 + 360);
  }
  while ( i )
  {
    if ( ((*(_DWORD *)(i + 24) - 33) & 0xFFFFFFFD) != 0 )
      goto LABEL_21;
    v4 = *(_QWORD *)(i + 32);
    v5 = *(_QWORD *)(i + 40);
    if ( v1 )
    {
      v6 = v1[4];
      if ( v4 == v6 + v1[3] )
      {
        v1[4] = v6 + v5;
        goto LABEL_20;
      }
    }
    Pool = MiAllocatePool(0x40uLL, 0x28uLL, 1380281677);
    v1 = (_QWORD *)Pool;
    if ( !Pool )
      return 0LL;
    *(_QWORD *)(Pool + 24) = v4;
    v8 = 0;
    *(_QWORD *)(Pool + 32) = v5;
    v9 = (_QWORD *)qword_140E375F8;
    if ( !qword_140E375F8 )
      goto LABEL_19;
    while ( v4 < v9[3] )
    {
      v10 = (_QWORD *)*v9;
      if ( !*v9 )
        goto LABEL_19;
LABEL_17:
      v9 = v10;
    }
    v10 = (_QWORD *)v9[1];
    if ( v10 )
      goto LABEL_17;
    v8 = 1;
LABEL_19:
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E375F8, (unsigned __int64)v9, v8, v1);
LABEL_20:
    MiUpdateLargePageBitMap((unsigned __int64)&MiSystemPartition, v4, v5, 0);
LABEL_21:
    v11 = *(_QWORD ***)(i + 8);
    v12 = i;
    if ( v11 )
    {
      v13 = *v11;
      for ( i = *(_QWORD *)(i + 8); v13; v13 = (_QWORD *)*v13 )
        i = (unsigned __int64)v13;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v12 )
          break;
        v12 = i;
      }
    }
  }
  if ( qword_140E375F8 )
  {
    v14 = MiAllocatePool(0x40uLL, 0x50uLL, 1296190789);
    if ( !v14 )
      return 0LL;
    *(_DWORD *)v14 = 512;
    *(_QWORD *)(v14 + 8) = v14 + 16;
    *(_BYTE *)(v14 + 16) |= 1u;
    qword_140E37610 = 0LL;
    qword_140E37608 = v14;
    dword_140E37618 = 0;
  }
  return 1LL;
}
