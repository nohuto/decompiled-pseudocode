/*
 * XREFs of NvmeControllerInitHostMemoryBuffer @ 0x1400EF734
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorpAllocateHostMemoryBuffer @ 0x140040D6C (StorpAllocateHostMemoryBuffer.c)
 *     StorpFreeHostMemoryBuffer @ 0x1400538E8 (StorpFreeHostMemoryBuffer.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400C9C40 (NvmeControllerSetHostMemoryBuffer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeControllerInitHostMemoryBuffer(_QWORD *a1, char a2)
{
  unsigned int v2; // ebp
  char v3; // r13
  __int64 v5; // rax
  int v6; // r15d
  unsigned int v7; // r9d
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // eax
  _QWORD *v11; // r14
  unsigned int v12; // r10d
  __int64 v13; // rcx
  int v14; // esi
  int v15; // esi
  unsigned int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  _DWORD *Pool; // rax
  unsigned int *v21; // r10
  void *v22; // rcx
  size_t HighAddress; // [rsp+30h] [rbp-168h]
  unsigned int v26; // [rsp+54h] [rbp-144h] BYREF
  __int64 v27; // [rsp+58h] [rbp-140h]
  __int64 Src[16]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v29[16]; // [rsp+E0h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = 0;
  v26 = 8;
  if ( a1[150] )
  {
    v3 = 1;
    v11 = a1 + 16;
    goto LABEL_22;
  }
  v5 = a1[74];
  v6 = 0;
  v7 = *(_DWORD *)(v5 + 276) << 12;
  v8 = *(_DWORD *)(v5 + 272) << 12;
  if ( v8 )
  {
    v9 = a1[131];
    if ( !v9 )
    {
LABEL_10:
      v11 = a1 + 16;
      v12 = 1 << (((*(_DWORD *)(a1[115] + 20LL) >> 7) & 0xF) + 12);
      v13 = a1[16];
      LODWORD(v27) = v12;
      if ( (unsigned int)StorpAllocateHostMemoryBuffer(
                           *(_QWORD *)(v13 + 408) + 16LL,
                           v7,
                           v8,
                           0LL,
                           v12,
                           0LL,
                           (PHYSICAL_ADDRESS)0x7FFFFFFFFFFFFFFFLL,
                           0LL,
                           (__int64)v29,
                           &v26) )
      {
        v14 = -1073741670;
        goto LABEL_25;
      }
      v2 = v26;
      if ( v26 > 8 )
        v2 = 8;
      v15 = 16 * v2;
      memset_0(Src, 0, 16 * v2);
      if ( v2 )
      {
        v16 = v27;
        v17 = 0LL;
        v18 = v2;
        do
        {
          v19 = v29[v17 + 1];
          v6 += v19;
          Src[v17] = v29[v17];
          v17 += 2LL;
          LODWORD(Src[v17 - 1]) = v19 / v16;
          --v18;
        }
        while ( v18 );
      }
      Pool = (_DWORD *)RaidAllocatePool(72LL, (unsigned int)(v15 + 8), 1213096274LL, *(_QWORD *)(*v11 + 8LL));
      a1[150] = Pool;
      if ( !Pool )
      {
        v14 = -1073741670;
LABEL_23:
        if ( v2 )
          StorpFreeHostMemoryBuffer(*(_QWORD *)(*v11 + 408LL) + 16LL);
        goto LABEL_25;
      }
      *Pool = v6;
      memmove((void *)(a1[150] + 8LL), Src, 16 * v2);
      *(_DWORD *)(a1[150] + 4LL) = v15;
LABEL_22:
      v21 = (unsigned int *)a1[150];
      LODWORD(HighAddress) = v21[1];
      v14 = NvmeControllerSetHostMemoryBuffer((__int64)a1, a2, 1u, v3, *v21, v21 + 2, HighAddress);
      if ( v14 >= 0 )
        return (unsigned int)v14;
      goto LABEL_23;
    }
    v10 = *(_DWORD *)(v9 + 84);
    if ( v10 )
    {
      if ( v10 != -1 )
      {
        v8 = v10;
        if ( (v10 & 0xFFF) != 0 )
          v8 = (v10 + 4095) & 0xFFFFF000;
        if ( v8 < v7 )
          v8 = v7;
      }
      goto LABEL_10;
    }
  }
  v14 = -1073741637;
LABEL_25:
  v22 = (void *)a1[150];
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x484E6152u);
    a1[150] = 0LL;
  }
  return (unsigned int)v14;
}
