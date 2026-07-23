/*
 * XREFs of MiObtainMdlCharges @ 0x140394D20
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14039895C (MiReleaseNonPagedResourcesNotExposed.c)
 */

__int64 __fastcall MiObtainMdlCharges(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int v3; // ecx
  int v4; // r12d
  unsigned __int64 v5; // rsi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbp
  __int64 Pool; // rcx
  unsigned __int64 v9; // rbp
  int v10; // eax
  ULONG *v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 56);
  v4 = 0;
  v5 = v1 >> 4;
  if ( !(v1 >> 4) )
    v5 = 1LL;
  if ( (v3 & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( (v3 & 0x20) == 0 || !*(_QWORD *)(a1 + 24) )
      goto LABEL_6;
    v5 = *(_QWORD *)(a1 + 24);
  }
  v4 = 1;
LABEL_6:
  v6 = *(_DWORD *)(a1 + 148) & 8 | 2;
  while ( 1 )
  {
    if ( (v3 & 0x400) == 0 && (int)MiAcquireNonPagedResources(*(ULONG **)a1, v1, *(_QWORD *)(a1 + 40), v6) < 0 )
      goto LABEL_17;
    v7 = v1 / *(_QWORD *)(a1 + 48);
    if ( (*(_DWORD *)(a1 + 148) & 1) != 0 )
      break;
    Pool = MiAllocatePool(0x40uLL, 8 * (v1 / *(_QWORD *)(a1 + 48)) + 48, 1768189261);
    if ( Pool )
      goto LABEL_10;
    if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
    {
      v12 = *(ULONG **)a1;
      if ( (v6 & 8) != 0 )
        MiReleaseNonPagedResourcesNotExposed(v12, v1);
      else
        MiReleaseNonPagedResources((__int64)v12, v1);
    }
LABEL_17:
    if ( (*(_DWORD *)(a1 + 56) & 4) != 0 )
      return 3221225626LL;
    v13 = *(_QWORD *)(*(_QWORD *)a1 + 18752LL);
    if ( v13 <= 0 )
      return 3221225626LL;
    v14 = *(_QWORD *)(a1 + 40);
    if ( v13 <= v14 )
      return 3221225626LL;
    v15 = v13 - v14;
    v16 = *(_QWORD *)(*(_QWORD *)a1 + 19264LL);
    v17 = *(_QWORD *)(*(_QWORD *)a1 + 19608LL);
    if ( v16 < v17 )
    {
      v18 = v17 - v16;
      if ( v18 < v15 )
        v15 = v18;
    }
    if ( v1 <= v15 )
    {
      if ( v1 <= v5 )
      {
        if ( v4 || v5 == 1 )
          return 3221225626LL;
        while ( v1 < v5 )
          v5 >>= 1;
        if ( !v5 )
          v5 = 1LL;
      }
      v1 -= v5;
    }
    else
    {
      v1 = v15;
    }
    v3 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 0x40) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 24) - 1LL;
    }
    else
    {
      if ( (v3 & 0x20) == 0 )
        goto LABEL_48;
      v20 = *(_QWORD *)(a1 + 24);
      if ( !v20 )
        goto LABEL_48;
      v19 = v20 - 1;
    }
    v1 &= ~v19;
LABEL_48:
    if ( !v1 )
      return 3221225626LL;
  }
  Pool = *(_QWORD *)(a1 + 64);
LABEL_10:
  v9 = v7 << 12;
  *(_QWORD *)Pool = 0LL;
  *(_WORD *)(Pool + 10) = 0;
  *(_WORD *)(Pool + 8) = 8 * ((v9 >> 12) + 6);
  *(_QWORD *)(Pool + 32) = 0LL;
  *(_QWORD *)(Pool + 40) = (unsigned int)v9;
  v10 = *(_DWORD *)(a1 + 148);
  *(_QWORD *)(a1 + 32) = v1;
  *(_QWORD *)(a1 + 64) = Pool;
  if ( (v10 & 0x10) == 0 )
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)a1 + 19648LL), v1);
  return 0LL;
}
