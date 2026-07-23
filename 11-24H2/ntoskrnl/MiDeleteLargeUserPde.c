/*
 * XREFs of MiDeleteLargeUserPde @ 0x1404B4B44
 * Callers:
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiDeleteVadAwePtes @ 0x1404B4D2C (MiDeleteVadAwePtes.c)
 *     MiDecommitAddTbFlushEntries @ 0x1404F7974 (MiDecommitAddTbFlushEntries.c)
 */

__int64 __fastcall MiDeleteLargeUserPde(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  volatile unsigned __int64 v3; // rbx
  _QWORD *v5; // rcx
  unsigned int v6; // r14d
  __int64 v8; // rdi
  int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 i; // rcx
  __int64 v13; // rcx
  volatile __int64 *v14; // rdx
  __int64 v15; // rbx
  volatile __int64 *v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *v19; // [rsp+70h] [rbp+8h]
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v3 = *a2;
  v5 = *(_QWORD **)(a1 + 184);
  v19 = v5;
  v6 = a3;
  v8 = 16LL;
  v9 = *(_DWORD *)(*v5 + 160LL);
  v10 = *a2 & 1;
  if ( !(_DWORD)v10 && qword_140E2DCC0 )
  {
    if ( (v3 & 0x10) != 0 )
      v3 &= ~0x10uLL;
    else
      v3 &= ~qword_140E2DCC0;
  }
  v11 = (v3 >> 12) & 0xFFFFFFFFFFLL;
  if ( (v9 & 0x10) != 0 )
  {
    v8 = MiDeleteVadAwePtes(a1, a2, a3);
    goto LABEL_20;
  }
  if ( !(_DWORD)a3 )
  {
    for ( i = 0LL; i < 0x10; ++i )
      a2[i] = CLFS_LSN_NULL_EXT;
    goto LABEL_14;
  }
  v8 = 1LL;
  if ( (_DWORD)v10 )
  {
    MiRewritePteWithLockBit(*(_QWORD *)(a1 + 32), 0, a2, CLFS_LSN_NULL_EXT);
LABEL_14:
    v5 = v19;
    goto LABEL_16;
  }
  *a2 = CLFS_LSN_NULL_EXT;
LABEL_16:
  if ( (v9 & 0x1000) != 0 )
  {
    v13 = *v5;
    v14 = *(volatile __int64 **)(v13 + 208);
    if ( !v14 )
    {
      *(_QWORD *)(v13 + 208) = a2;
      v14 = a2;
    }
    *(_QWORD *)(v13 + 216) = ((__int64)a2 + 8 * v8 - (__int64)v14) >> 3;
  }
LABEL_20:
  v15 = 48 * v11 - 0x220000000000LL;
  if ( (_DWORD)v10 )
  {
    v16 = a2;
    v17 = v19;
    MiDecommitAddTbFlushEntries(*v19, v16, v6, v8);
  }
  else
  {
    v17 = v19;
  }
  if ( (v9 & 0x10) == 0 && *(__int64 *)(v15 + 40) >= 0 )
  {
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    *(_QWORD *)v15 = (*(_QWORD *)(v17[1] + 48LL) >> 3) ^ (*(_QWORD *)v15 ^ (*(_QWORD *)(v17[1] + 48LL) >> 3)) & 0xFFFFF00000000001uLL;
    *(_QWORD *)(v17[1] + 48LL) = v15;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v9 & 0x800) != 0 && !v6 )
    *(_DWORD *)(a1 + 12) = v8 - 1;
  return (unsigned int)v8;
}
