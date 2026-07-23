/*
 * XREFs of KiMarkBugCheckRegions @ 0x140505D78
 * Callers:
 *     KiCollectTriageDumpDataBlocks @ 0x1405B0318 (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     MmIsAddressValid @ 0x1402433E0 (MmIsAddressValid.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     MmQueryApiSetSchema @ 0x1404B0B8C (MmQueryApiSetSchema.c)
 *     sub_1405182C8 @ 0x1405182C8 (sub_1405182C8.c)
 */

char __fastcall KiMarkBugCheckRegions(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v6; // r15d
  int v7; // esi
  __int64 v8; // r14
  unsigned int v9; // edi
  ULONG *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  int v13; // r9d
  int v14; // edx
  int v15; // r8d
  int v16; // ebx
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // r14
  int *v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  ULONG *v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  int v26; // r9d
  int v27; // edx
  int v28; // r8d
  int v29; // ebx
  __int64 v30; // rcx
  ULONG *v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  int v34; // r8d
  int v35; // edx
  __int64 v36; // rcx
  char result; // al
  ULONG MaxDataSize[2]; // [rsp+20h] [rbp-28h] BYREF
  PVOID VirtualAddress; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v42; // [rsp+A8h] [rbp+60h] BYREF

  _mm_lfence();
  v6 = 4;
  if ( KdpBreakpointChangeCount )
    IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
  if ( qword_140E0F2A0 )
  {
    *(_QWORD *)&KiMismatchSummary = qword_140E0F2A0;
    IoAddTriageDumpDataBlock((ULONG)&KiMismatchSummary, (PVOID)8);
  }
  v7 = 3;
  if ( (_DWORD)a4 == 257 && dword_140E0F298 )
  {
    v8 = qword_140E0F288;
    v9 = 0;
    while ( 1 )
    {
      _mm_lfence();
      if ( !MmIsAddressValid((PVOID)((v8 + v9) & 0xFFFFFFFFFFFFF000uLL)) )
        goto LABEL_21;
      v10 = MaxDataSize;
      v11 = 4LL;
      v12 = MmPteBase + ((((v8 + v9) & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *(_QWORD *)v10 = v12;
        v10 += 2;
        v12 = MmPteBase + ((v12 >> 9) & 0x7FFFFFFFF8LL);
        --v11;
      }
      while ( v11 );
      v13 = 0;
      v14 = 3;
      do
      {
        v15 = v14;
        if ( v13 )
          goto LABEL_16;
        if ( !v14 )
          break;
        if ( (**(_DWORD **)&MaxDataSize[2 * v14] & 0x80) != 0 )
        {
          --v14;
          v13 = 1;
          v15 = v14;
LABEL_16:
          *(_QWORD *)&MaxDataSize[2 * v14] = 0LL;
        }
        --v14;
      }
      while ( v15 );
      v16 = 4;
      do
      {
        v17 = *(_QWORD *)&MaxDataSize[2 * (v16 - 1)];
        if ( !v17 )
          break;
        IoAddTriageDumpDataBlock(v17, (PVOID)8);
        --v16;
      }
      while ( v16 );
LABEL_21:
      v9 += 4096;
      if ( v9 >= dword_140E0F298 )
      {
        dword_140E0F298 = 4096;
        break;
      }
    }
  }
  v18 = &qword_140E0F288;
  v19 = 2LL;
  v20 = &dword_140E0F298;
  do
  {
    v21 = (unsigned int)*v20;
    if ( (_DWORD)v21 )
      IoAddTriageDumpDataBlock(*v18, (PVOID)v21);
    ++v20;
    ++v18;
    --v19;
  }
  while ( v19 );
  if ( !a3 )
    goto LABEL_60;
  IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, (PVOID)0x1000);
  v22 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  IoAddTriageDumpDataBlock((a3 & 0xFFFFF000) + 4096, (PVOID)0x1000);
  _mm_lfence();
  if ( MmIsAddressValid((PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL)) )
  {
    v23 = MaxDataSize;
    v24 = 4LL;
    v25 = MmPteBase + (((a3 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
    do
    {
      *(_QWORD *)v23 = v25;
      v23 += 2;
      v25 = MmPteBase + ((v25 >> 9) & 0x7FFFFFFFF8LL);
      --v24;
    }
    while ( v24 );
    v26 = 0;
    v27 = 3;
    while ( 1 )
    {
      v28 = v27;
      if ( !v26 )
      {
        if ( !v27 )
          goto LABEL_38;
        if ( (**(_DWORD **)&MaxDataSize[2 * v27] & 0x80) == 0 )
          goto LABEL_37;
        --v27;
        v26 = 1;
        v28 = v27;
      }
      *(_QWORD *)&MaxDataSize[2 * v27] = 0LL;
LABEL_37:
      --v27;
      if ( !v28 )
      {
LABEL_38:
        v29 = 4;
        do
        {
          v30 = *(_QWORD *)&MaxDataSize[2 * (v29 - 1)];
          if ( !v30 )
            break;
          IoAddTriageDumpDataBlock(v30, (PVOID)8);
          --v29;
        }
        while ( v29 );
        break;
      }
    }
  }
  _mm_lfence();
  if ( !MmIsAddressValid((PVOID)v22) )
    goto LABEL_53;
  v31 = MaxDataSize;
  v32 = 4LL;
  v33 = MmPteBase + ((v22 >> 9) & 0x7FFFFFFFF8LL);
  do
  {
    *(_QWORD *)v31 = v33;
    v31 += 2;
    v33 = MmPteBase + ((v33 >> 9) & 0x7FFFFFFFF8LL);
    --v32;
  }
  while ( v32 );
  v34 = 0;
  do
  {
    v35 = v7;
    if ( v34 )
      goto LABEL_49;
    if ( !v7 )
      goto LABEL_51;
    if ( (**(_DWORD **)&MaxDataSize[2 * v7] & 0x80) != 0 )
    {
      --v7;
      v34 = 1;
      v35 = v7;
LABEL_49:
      *(_QWORD *)&MaxDataSize[2 * v7] = 0LL;
    }
    --v7;
  }
  while ( v35 );
  do
  {
LABEL_51:
    v36 = *(_QWORD *)&MaxDataSize[2 * (v6 - 1)];
    if ( !v36 )
      break;
    IoAddTriageDumpDataBlock(v36, (PVOID)8);
    --v6;
  }
  while ( v6 );
LABEL_53:
  if ( (PVOID)a3 == HvlpHypercallCodeVa )
    IoAddTriageDumpDataBlock((ULONG)&HvlpHypercallCodeVa, (PVOID)8);
  if ( a3 == *(_QWORD *)&HvlpVsmVtlCallVa )
    IoAddTriageDumpDataBlock((ULONG)&HvlpVsmVtlCallVa, (PVOID)8);
  MmQueryApiSetSchema(&VirtualAddress, &v42);
  if ( MmIsAddressValid(VirtualAddress) && a3 == *(_QWORD *)VirtualAddress )
    IoAddTriageDumpDataBlock((ULONG)VirtualAddress, (PVOID)8);
LABEL_60:
  result = sub_1405182C8(a1, a2, a3, a4);
  if ( *(_QWORD *)&::MaxDataSize )
    return IoAddTriageDumpDataBlock(::MaxDataSize, (PVOID)0xAE8);
  return result;
}
