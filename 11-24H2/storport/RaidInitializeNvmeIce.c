/*
 * XREFs of RaidInitializeNvmeIce @ 0x14006A850
 * Callers:
 *     RaidAdapterGetNvmeIceCapabilities @ 0x140183B0C (RaidAdapterGetNvmeIceCapabilities.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400A8EE0 (StorEtwNVMeICEInterfaceEvent.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaidInitializeNvmeIce(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *v3; // rbp
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  char v8; // al
  int v9; // eax
  unsigned int v10; // r15d
  size_t v11; // r14
  void *v12; // rcx
  void *Pool; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  unsigned int v19; // ebp
  unsigned int v20; // r12d
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // rcx
  unsigned int i; // esi
  __int64 v27; // r14
  void *v28; // rcx
  unsigned int v30; // [rsp+70h] [rbp+8h]
  unsigned int v31; // [rsp+78h] [rbp+10h]

  v3 = (unsigned __int16 *)(a2 + 12);
  v6 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a2 + 12) != 1 )
    goto LABEL_45;
  v8 = *(_BYTE *)(a2 + 5);
  if ( (v8 & 1) != 0 )
  {
    v30 = 3;
  }
  else if ( (v8 & 2) != 0 )
  {
    v30 = 7;
  }
  else
  {
    if ( (v8 & 4) == 0 )
      goto LABEL_45;
    v30 = 15;
  }
  v9 = *(unsigned __int16 *)(a2 + 22);
  v10 = *(unsigned __int16 *)(a2 + 8) << 10;
  v31 = v10;
  v11 = (unsigned int)(28 * v9 + 12);
  if ( (unsigned int)(28 * v9) >= 0xFFFFFFF4 )
    goto LABEL_45;
  v12 = *(void **)(a1 + 5624);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x72436152u);
    *(_QWORD *)(a1 + 5624) = 0LL;
  }
  Pool = (void *)RaidAllocatePool(64LL, v11, 1917018450LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 5624) = Pool;
  if ( !Pool )
    goto LABEL_12;
  memmove(Pool, v3, v11);
  if ( *(_QWORD *)(a3 + 72) )
    goto LABEL_40;
  v14 = v3[4];
  *(_BYTE *)(a3 + 64) &= ~1u;
  *(_DWORD *)(a3 + 56) = v14;
  v15 = *(unsigned int *)(a3 + 56);
  *(_DWORD *)(a3 + 80) = 0;
  if ( (unsigned __int64)(72 * v15) > 0xFFFFFFFF )
    goto LABEL_45;
  v16 = RaidAllocatePool(64LL, (unsigned int)(72 * v15), 1917018450LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a3 + 72) = v16;
  if ( !v16 )
  {
LABEL_12:
    v6 = -1056964605;
LABEL_46:
    v25 = *(void **)(a1 + 5624);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0x72436152u);
      *(_QWORD *)(a1 + 5624) = 0LL;
    }
    if ( *(_QWORD *)(a3 + 72) )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 56); ++i )
      {
        v27 = *(_QWORD *)(a3 + 72);
        v28 = *(void **)(v27 + 72LL * i + 48);
        if ( v28 )
        {
          ExFreePoolWithTag(v28, 0x72436152u);
          *(_QWORD *)(v27 + 72LL * i + 48) = 0LL;
        }
      }
      ExFreePoolWithTag(*(PVOID *)(a3 + 72), 0x72436152u);
      *(_QWORD *)(a3 + 72) = 0LL;
    }
    return v6;
  }
  v17 = 0;
  if ( !v3[5] )
    goto LABEL_45;
  do
  {
    v18 = 14LL * v17;
    if ( *(_DWORD *)&v3[v18 + 14] == 1 )
    {
      if ( *(_DWORD *)&v3[v18 + 12] == 1 )
      {
        StorEtwNVMeICEInterfaceEvent(
          a1,
          a3,
          -1056964602,
          (unsigned int)L"NVMe ICE interface has invalid 128-bit key size for XTS-AES.",
          3);
      }
      else if ( *(_DWORD *)&v3[v18 + 12] == 2 && v7 <= 0x10 )
      {
        v7 = 16;
      }
    }
    else if ( *(_DWORD *)&v3[v18 + 14] == 3 )
    {
      if ( (*(_DWORD *)&v3[v18 + 12] == 1 || *(_DWORD *)&v3[v18 + 12] == 2) && v7 <= 0x20 )
        v7 = 32;
    }
    else if ( *(_DWORD *)&v3[v18 + 14] == 4 && *(_DWORD *)&v3[v18 + 12] == 1 )
    {
      v7 = 64;
    }
    ++v17;
  }
  while ( v17 < v3[5] );
  if ( !v7 )
  {
LABEL_45:
    v6 = -1056964602;
    goto LABEL_46;
  }
  v19 = 0;
  if ( *(_DWORD *)(a3 + 56) )
  {
    v20 = v7 + 16;
    while ( 1 )
    {
      v21 = *(_QWORD *)(a3 + 72);
      v22 = 9LL * v19;
      *(_BYTE *)(v21 + 8 * v22 + 64) &= ~1u;
      *(_DWORD *)(v21 + 8 * v22) = v19;
      if ( v20 < 0x10 )
        goto LABEL_45;
      v23 = RaidAllocatePool(64LL, v20, 1917018450LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(v21 + 72LL * v19 + 48) = v23;
      if ( !v23 )
      {
        v6 = -1056964605;
        goto LABEL_46;
      }
      if ( ++v19 >= *(_DWORD *)(a3 + 56) )
      {
        v10 = v31;
        break;
      }
    }
  }
  *(_DWORD *)(a3 + 60) = v7;
LABEL_40:
  v24 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 112) |= 0x10u;
  *(_QWORD *)(a1 + 6192) = a3;
  if ( v30 > *(_DWORD *)(v24 + 152) )
    *(_DWORD *)(v24 + 152) = v30;
  if ( *(_DWORD *)(a1 + 408) > v10 )
    *(_DWORD *)(a1 + 408) = v10;
  return v6;
}
