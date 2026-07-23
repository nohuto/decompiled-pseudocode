/*
 * XREFs of MiReplenishSlabAllocatorByIdentity @ 0x1404B74A4
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 * Callees:
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiChangeSlabEntryIdentity @ 0x140687690 (MiChangeSlabEntryIdentity.c)
 */

__int64 __fastcall MiReplenishSlabAllocatorByIdentity(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  unsigned int v4; // r13d
  __int64 v5; // rdi
  unsigned int v6; // edx
  bool v7; // al
  int *v8; // rcx
  char v9; // r8
  int v10; // r9d
  int *v11; // r10
  bool v12; // zf
  bool i; // zf
  int v14; // edx
  KIRQL v15; // r14
  int v16; // edx
  int v17; // r10d
  unsigned int v18; // r9d
  __int64 v19; // r15
  unsigned int v20; // r11d
  unsigned int v21; // edx
  _QWORD *v22; // rdx
  __int64 j; // r8
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  __int64 **v26; // r10
  __int64 v27; // r8
  __int64 *k; // rcx
  char CurrentSlabIdentity; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+70h] [rbp+18h]

  v1 = 0;
  v2 = 57216LL * *(unsigned int *)(a1 + 132);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 57008) + 314064LL;
  v6 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 )
  {
    if ( v6 > 1 )
    {
      v8 = *(int **)(*(_QWORD *)(v2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 57008) + 314072LL);
      v9 = v6 - 1;
      v10 = *v8;
      v11 = &v8[(unsigned __int64)(v6 - 1) >> 5];
      if ( v8 != v11 )
      {
        for ( i = v10 == 0; i; i = v14 == 0 )
        {
          v14 = *++v8;
          if ( v8 == v11 )
          {
            v12 = (v14 & (0xFFFFFFFF >> ~v9)) == 0;
            goto LABEL_12;
          }
        }
        goto LABEL_14;
      }
      v12 = (v10 & (0xFFFFFFFF >> (32 - v6))) == 0;
LABEL_12:
      v7 = v12;
      goto LABEL_13;
    }
    if ( v6 == 1 )
    {
      v7 = !_bittest(
              *(const signed __int32 **)(*(_QWORD *)(v2 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 57008) + 314072LL),
              0);
LABEL_13:
      if ( v7 )
        return v1;
    }
  }
LABEL_14:
  CurrentSlabIdentity = MiGetCurrentSlabIdentity((__int64)KeGetCurrentThread());
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16));
LABEL_15:
  v31 = *(_QWORD *)(v5 + 8);
  v16 = *(_DWORD *)v5 - 1;
  v17 = (v31 & 4) != 0 ? 0x20 : 0;
  v18 = v4 < *(_DWORD *)v5 ? v4 : 0;
  v19 = v31 - ((v31 & 4) != 0 ? 4 : 0);
  while ( 1 )
  {
    v20 = v17 + v16;
    if ( v16 - v18 == -1 )
      goto LABEL_17;
    v22 = (_QWORD *)(v19 + 8 * ((unsigned __int64)(v17 + v18) >> 6));
    for ( j = ~*v22 | ((1LL << ((v17 + v18) & 0x3F)) - 1); j == -1; j = ~*v22 )
    {
      if ( (unsigned __int64)++v22 > v19 + 8 * ((unsigned __int64)v20 >> 6) )
        goto LABEL_17;
    }
    _BitScanForward64(&v24, ~j);
    v21 = v24 + ((unsigned int)(((__int64)v22 - v19) >> 3) << 6);
    if ( v21 > v20 )
    {
LABEL_17:
      v21 = -1;
      goto LABEL_25;
    }
    if ( v21 != -1 )
      break;
LABEL_25:
    if ( !v18 )
      goto LABEL_30;
    v25 = v4 + 1;
    v18 = 0;
    if ( v4 + 1 > *(_DWORD *)v5 )
      v25 = *(_DWORD *)v5;
    v16 = v25 - 1;
  }
  v21 -= v17;
LABEL_30:
  if ( v21 != -1 )
  {
    v26 = (__int64 **)(*(_QWORD *)(a1 + 88) + 16LL * v21);
    v27 = v21;
    for ( k = *v26; ; k = (__int64 *)*k )
    {
      if ( k == (__int64 *)v26 )
      {
        v4 = v21 + 1;
        *(_BYTE *)(v31 + ((unsigned __int64)v21 >> 3)) &= ~(1 << (v21 & 7));
        goto LABEL_15;
      }
      if ( *((_DWORD *)k + 15) == LODWORD(MiPageSizes[(*(_DWORD *)(a1 + 136) >> 4) & 3]) )
        break;
    }
    LOBYTE(v27) = CurrentSlabIdentity;
    MiChangeSlabEntryIdentity(a1, k - 3, v27);
    v1 = 1;
  }
  if ( v15 != 17 )
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16), v15);
  return v1;
}
