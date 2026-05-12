/*
 * XREFs of RaidXrbSetDataBufferAddress @ 0x140012540
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x140012460 (RaidpAdapterContinueScatterGather.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x140066780 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaidXrbSetDataBufferAddress(_QWORD *a1, __int64 a2, char a3)
{
  char v4; // r10
  __int64 v5; // rcx
  char v6; // r12
  PVOID MappedSystemVa; // rbp
  __int64 v8; // rbx
  __int64 v9; // r11
  struct _MDL *v10; // r14
  unsigned int v11; // esi
  bool v12; // cc
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  PMDL v16; // rcx
  unsigned int v17; // ecx
  int v19; // r9d
  unsigned int v20; // r8d
  unsigned int v21; // r11d
  unsigned int v22; // eax
  unsigned int v23; // r13d
  unsigned int *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // r12
  unsigned __int64 v29; // rcx
  int v30; // r9d
  unsigned int v31; // ecx
  unsigned int *v32; // r14
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  int v35; // [rsp+30h] [rbp-58h]
  unsigned int *Src; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned int Size; // [rsp+90h] [rbp+8h]
  char v39; // [rsp+A0h] [rbp+18h]
  PMDL MemoryDescriptorList; // [rsp+A8h] [rbp+20h] BYREF

  v39 = a3;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  MappedSystemVa = 0LL;
  v37 = 0LL;
  v8 = a1[21];
  if ( a3 )
  {
    v37 = 0LL;
    if ( *(_BYTE *)(v8 + 2) == 40 && (*(_BYTE *)(v8 + 24) & 0xC0) == 0xC0 )
    {
      v20 = *(_DWORD *)(v8 + 56);
      v21 = 0;
      if ( v20 )
      {
        v32 = (unsigned int *)(v8 + 120);
        do
        {
          v33 = *v32;
          if ( (unsigned int)v33 >= 0x80 )
          {
            v34 = *(unsigned int *)(v8 + 16);
            if ( (unsigned int)v33 <= (unsigned int)v34 && *(_DWORD *)(v33 + v8) == 1 && v33 + 24 <= v34 )
            {
              v5 = v33 + v8;
              v37 = v33 + v8;
              goto LABEL_37;
            }
          }
          ++v21;
          ++v32;
        }
        while ( v21 < v20 );
        v5 = 0LL;
      }
LABEL_37:
      a3 = v39;
    }
    v9 = a1[19];
    v10 = (struct _MDL *)a1[17];
  }
  else
  {
    v9 = a1[14];
    v10 = (struct _MDL *)a1[13];
  }
  if ( *(_BYTE *)(v8 + 2) != 40 )
  {
    v11 = *(unsigned __int8 *)(v8 + 2);
    v4 = *(_BYTE *)(v8 + 72);
    v6 = *(_BYTE *)(v8 + 4);
    Src = *(unsigned int **)(v8 + 24);
    Size = *(_DWORD *)(v8 + 16);
    v35 = *(_DWORD *)(v8 + 12);
    goto LABEL_5;
  }
  v11 = *(_DWORD *)(v8 + 20);
  v35 = *(_DWORD *)(v8 + 24);
  if ( v5 && a3 )
  {
    Src = *(unsigned int **)(v5 + 16);
    v22 = *(_DWORD *)(v5 + 8);
  }
  else
  {
    v22 = *(_DWORD *)(v8 + 60);
    Src = *(unsigned int **)(v8 + 64);
  }
  Size = v22;
  if ( v11 )
  {
    v12 = v11 <= 0x17;
    if ( v11 != 23 )
      goto LABEL_6;
  }
  v23 = *(_DWORD *)(v8 + 56);
  LODWORD(MemoryDescriptorList) = 0;
  if ( !v23 )
    goto LABEL_5;
  v24 = (unsigned int *)(v8 + 120);
  do
  {
    v25 = *v24;
    if ( (unsigned int)v25 < 0x80 )
      goto LABEL_50;
    v26 = *(unsigned int *)(v8 + 16);
    if ( (unsigned int)v25 > (unsigned int)v26 )
      goto LABEL_50;
    v27 = *(_DWORD *)(v25 + v8);
    v28 = v25 + v8;
    if ( v27 == 64 )
    {
      if ( v11 )
        goto LABEL_50;
      v29 = (unsigned int)v25 + 40LL;
LABEL_49:
      if ( v29 <= v26 )
      {
        if ( *(_BYTE *)(v28 + 10) )
          v4 = *(_BYTE *)(v28 + 24);
LABEL_21:
        v6 = 0;
        goto LABEL_22;
      }
      goto LABEL_50;
    }
    v30 = v27 - 65;
    if ( !v30 )
    {
      if ( v11 )
        goto LABEL_50;
      v29 = (unsigned int)v25 + 56LL;
      goto LABEL_49;
    }
    v19 = v30 - 1;
    if ( v19 )
    {
      if ( v19 == 30 && v11 == 23 && (unsigned __int64)(unsigned int)v25 + 24 <= v26 )
      {
        v6 = *(_BYTE *)(v28 + 8);
        goto LABEL_8;
      }
    }
    else if ( !v11 && (unsigned __int64)(unsigned int)v25 + 40 <= v26 )
    {
      if ( *(_DWORD *)(v28 + 12) )
        v4 = *(_BYTE *)(v28 + 32);
      goto LABEL_21;
    }
LABEL_50:
    ++v24;
    LODWORD(MemoryDescriptorList) = (_DWORD)MemoryDescriptorList + 1;
  }
  while ( (unsigned int)MemoryDescriptorList < v23 );
  v6 = 0;
LABEL_5:
  v12 = v11 <= 0x17;
LABEL_6:
  if ( !v12 || (v13 = 8389124, !_bittest(&v13, v11)) )
  {
LABEL_22:
    if ( a2 != -376
      && (*(_BYTE *)(a2 + 473) == 3
       || (unsigned __int8)(*(_BYTE *)(a2 + 473) - 1) <= 1u && (v11 || ((v4 - 8) & 0x5D) != 0)) )
    {
      goto LABEL_8;
    }
    return 0LL;
  }
LABEL_8:
  if ( !v9 )
    return 0LL;
  v14 = *(_QWORD *)(a2 + 880);
  MemoryDescriptorList = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(v14 + 8) + 120LL))(
          v14,
          v9,
          v10,
          &MemoryDescriptorList);
  if ( v15 >= 0 )
  {
    v16 = MemoryDescriptorList;
    a1[18] = MemoryDescriptorList;
    if ( v10 == v16 )
    {
      v15 = -2147483622;
    }
    else
    {
      if ( (v16->MdlFlags & 5) != 0 )
        MappedSystemVa = v16->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v16, 0, MmCached, 0LL, 0, 0x40000020u);
      v15 = 0;
    }
  }
  v17 = v15;
  if ( v15 == -2147483622 )
    return 0;
  if ( v15 >= 0 )
  {
    if ( !MappedSystemVa )
      return 3221225626LL;
    if ( (v35 & 0x80u) == 0 || v39 )
    {
      v31 = Size;
      if ( v11 == 23 && v6 == 9 && *Src )
        v31 = *Src;
      memmove(MappedSystemVa, Src, v31);
    }
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      if ( v39 )
        *(_QWORD *)(v37 + 16) = MappedSystemVa;
      else
        *(_QWORD *)(v8 + 64) = MappedSystemVa;
    }
    else
    {
      *(_QWORD *)(v8 + 24) = MappedSystemVa;
    }
    return 0;
  }
  return v17;
}
