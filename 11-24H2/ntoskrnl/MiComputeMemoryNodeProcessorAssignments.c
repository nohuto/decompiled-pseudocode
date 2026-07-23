/*
 * XREFs of MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     KeQueryNodeActiveAffinity2 @ 0x140407C40 (KeQueryNodeActiveAffinity2.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiReassignProcessorsToMemoryOnlyNodes @ 0x140C5AD1C (MiReassignProcessorsToMemoryOnlyNodes.c)
 */

__int64 MiComputeMemoryNodeProcessorAssignments()
{
  bool v0; // cf
  int v1; // r13d
  int v2; // r12d
  unsigned int i; // ebx
  __int64 v4; // rsi
  unsigned __int16 v5; // bp
  __int64 PoolMm; // rdi
  ULONG_PTR v7; // r9
  __int64 v8; // rax
  __int128 *v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 FirstSetRightGroupAffinity; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int16 v20; // cx
  unsigned __int64 *v21; // rdx
  __int16 v22; // ax
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 result; // rax
  int v30; // [rsp+20h] [rbp-68h]
  __int128 v31[6]; // [rsp+28h] [rbp-60h] BYREF
  unsigned int Count; // [rsp+90h] [rbp+8h] BYREF
  __int64 v33; // [rsp+98h] [rbp+10h] BYREF
  int v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h]

  v0 = KeNumberNodes != 0;
  v1 = 0;
  v35 = 0;
  v2 = 0;
  for ( i = 0; ; v0 = i < v24 )
  {
    v30 = v2;
    if ( !v0 )
      break;
    LOWORD(v33) = 0;
    LOWORD(Count) = 0;
    v4 = *(_QWORD *)(384LL * i + qword_140E2DC38 + 376);
    KeQueryNodeActiveAffinity2(i, 0LL, 0, (unsigned __int16 *)&Count);
    v5 = Count;
    v34 = (unsigned __int16)Count;
    PoolMm = v4 + 48;
    if ( (_WORD)Count )
    {
      if ( (_WORD)Count != 1 )
      {
        v7 = i;
        LODWORD(v7) = i | 0x80000000;
        PoolMm = ExAllocatePoolMm(0x40uLL, 16LL * (unsigned __int16)Count, 1632069965, v7);
      }
      if ( PoolMm )
      {
        KeQueryNodeActiveAffinity2(i, PoolMm, v5, (unsigned __int16 *)&v33);
      }
      else
      {
        PoolMm = v4 + 48;
        v5 = 1;
        v34 = 1;
        KeQueryNodeActiveAffinity(i, (PGROUP_AFFINITY)(v4 + 48), (PUSHORT)&Count);
      }
    }
    else
    {
      v5 = 1;
      v34 = 1;
    }
    Count = v5;
    if ( !v5 )
      goto LABEL_26;
    v8 = v5;
    v9 = (__int128 *)PoolMm;
    v33 = v5;
    do
    {
      v10 = 0LL;
      v31[0] = *v9;
      v11 = *(_QWORD *)&v31[0];
      if ( *(_QWORD *)&v31[0] )
      {
        do
        {
          FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity((__int64)v31);
          v13 = 20LL;
          v14 = KiProcessorBlock[FirstSetRightGroupAffinity];
          v15 = 1LL;
          v16 = *(_BYTE *)(v14 + 35336);
          if ( v16 != 1 )
            v13 = 22LL;
          ++*(_WORD *)(v13 + v4);
          if ( v16 != 1 )
            v15 = 2LL;
          ++word_140E2DC2A[v15];
          v17 = *(_QWORD *)(v14 + 200);
          v11 &= ~v17;
          *(_QWORD *)&v31[0] = v11;
          if ( (v17 & v10) == 0 )
          {
            v18 = 26LL;
            if ( v16 != 1 )
              v18 = 28LL;
            ++*(_WORD *)(v18 + v4);
            ++word_140E2DC30[v15];
            v10 |= *(_QWORD *)(v14 + 36448);
          }
        }
        while ( v11 );
        v8 = v33;
      }
      ++v9;
      v33 = --v8;
    }
    while ( v8 );
    v19 = Count;
    v20 = 0;
    v1 = v35;
    v21 = (unsigned __int64 *)PoolMm;
    v5 = v34;
    v2 = v30;
    do
    {
      v22 = v20 + __popcnt(*v21);
      v21 += 2;
      v20 = v22;
      --v19;
    }
    while ( v19 );
    if ( !v22 )
    {
LABEL_26:
      *(_WORD *)(v4 + 32) |= 1u;
      v35 = ++v1;
    }
    v23 = *(_DWORD *)(KeNodeBlock[(unsigned __int16)i] + 300);
    v24 = (unsigned __int16)KeNumberNodes;
    if ( !v23 )
      v23 = 1;
    *(_DWORD *)(v4 + 12) = v2;
    *(_DWORD *)(v4 + 8) = v23;
    v2 += v23;
    *(_QWORD *)v4 = PoolMm;
    *(_WORD *)(v4 + 16) = v5;
    word_140E2DC28 += v5;
    *(_DWORD *)(v4 + 44) = i++;
  }
  dword_140E2DC20 = v2;
  Src = (void *)MiAllocatePool(0x40uLL, 16LL * (unsigned __int16)word_140E2DC28, 1632069965);
  if ( !Src )
    MxInstallMoreMemory(52);
  v25 = 0;
  if ( KeNumberNodes )
  {
    v26 = 0LL;
    v27 = (unsigned __int16)KeNumberNodes;
    do
    {
      v28 = *(_QWORD *)(v26 + qword_140E2DC38 + 376);
      memmove((char *)Src + 16 * v25, *(const void **)v28, 16LL * *(unsigned __int16 *)(v28 + 16));
      v26 += 384LL;
      v25 += *(unsigned __int16 *)(v28 + 16);
      --v27;
    }
    while ( v27 );
  }
  if ( v1 )
    MiReassignProcessorsToMemoryOnlyNodes();
  result = 0x4000000000LL;
  MiFlags |= 0x4000000000uLL;
  return result;
}
