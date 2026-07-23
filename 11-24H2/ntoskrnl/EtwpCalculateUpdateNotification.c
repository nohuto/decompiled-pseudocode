/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x1408376F0
 * Callers:
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140837AF0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpCopySchematizedFilters @ 0x14083A308 (EtwpCopySchematizedFilters.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

bool __fastcall EtwpCalculateUpdateNotification(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        char a5,
        char a6,
        int a7,
        __int64 *a8)
{
  int v8; // r14d
  unsigned __int16 v10; // cx
  __int16 v11; // r10
  __int16 v12; // si
  _OWORD *v13; // rbx
  int v14; // edx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // r10
  _DWORD *v20; // r8
  int v21; // esi
  int v22; // ebx
  __int64 v23; // rdi
  __int64 v24; // r9
  unsigned int v25; // r8d
  _DWORD *v26; // rdx
  __int64 v27; // r9
  unsigned int v28; // edi
  ULONG_PTR v29; // rdx
  _DWORD *v30; // rax
  _DWORD *v31; // rbx
  int v33; // eax
  __int64 Pool2; // rax
  __int128 Source2; // [rsp+20h] [rbp-59h] BYREF
  __int128 v36; // [rsp+30h] [rbp-49h]
  __m256i v37; // [rsp+40h] [rbp-39h]
  _OWORD v38[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v39; // [rsp+80h] [rbp+7h]
  __int64 v40; // [rsp+90h] [rbp+17h]

  v8 = 0;
  if ( a5 )
  {
    if ( a6 )
      v10 = *(_WORD *)(a1 + 106);
    else
      v10 = *(_WORD *)(a1 + 102);
    v11 = 0;
  }
  else if ( a6 )
  {
    v10 = *(_WORD *)(a1 + 104);
    v11 = *(_WORD *)(a1 + 100);
  }
  else
  {
    v10 = *(_WORD *)(a1 + 100);
    v11 = *(_WORD *)(a1 + 104);
  }
  v12 = *(_WORD *)(a1 + 98) & 8;
  if ( v12 )
  {
    if ( v10 || a7 != 1 )
      goto LABEL_35;
    if ( !a3 )
      return 0;
  }
  else
  {
    if ( (a2 & a3) == 0 && (v10 & a2) == 0 )
      return 0;
    if ( a5 != 2 && a4 == v10 && !v11 && !*(_WORD *)(a1 + 102) && !*(_WORD *)(a1 + 106) )
    {
LABEL_35:
      *a8 = 0LL;
      return 1;
    }
  }
  memset_0(&Source2, 0, 0x78uLL);
  v13 = (_OWORD *)*a8;
  v14 = 0;
  v15 = *(_QWORD *)(a1 + 32);
  Source2 = *(_OWORD *)*a8;
  v36 = v13[1];
  v37 = *(__m256i *)((_BYTE *)v13 + 1);
  *(_QWORD *)&v38[0] = *((_QWORD *)v13 + 8);
  v16 = *(_OWORD *)(v15 + 40);
  *(_QWORD *)((char *)&Source2 + 4) = 0x100000078LL;
  *(_OWORD *)&v37.m256i_u64[1] = v16;
  v17 = *(_QWORD *)(v15 + 640);
  if ( v17 )
  {
    v18 = 0;
    v19 = v17 + 88;
    v20 = (_DWORD *)(v15 + 128);
    do
    {
      if ( *v20 )
      {
        if ( *(_QWORD *)v19 )
        {
          v33 = *(unsigned __int16 *)(a1 + 100);
          if ( _bittest(&v33, (unsigned __int8)v18) )
            v14 += (*(_DWORD *)(*(_QWORD *)v19 + 16LL) + 7) & 0xFFFFFFF8;
        }
      }
      ++v18;
      v20 += 8;
      v19 += 104LL;
    }
    while ( v18 < 0x10 );
    if ( v14 )
      DWORD1(Source2) = v14 + 136;
  }
  EtwpComputeRegEntryEnableInfo(a1, (char *)v38 + 8);
  if ( v12 )
  {
    LODWORD(v40) = 0;
    *((_QWORD *)&v39 + 1) = 0LL;
  }
  if ( v13 )
  {
    if ( *((_DWORD *)v13 + 1) == DWORD1(Source2) && RtlCompareMemory(v13, &Source2, 0x78uLL) == 120 )
    {
      if ( *a8 )
        return 1;
    }
    else
    {
      *a8 = 0LL;
    }
  }
  v21 = *(unsigned __int16 *)(a1 + 100);
  v22 = 0;
  v23 = *(_QWORD *)(a1 + 32);
  v24 = *(_QWORD *)(v23 + 640);
  if ( v24 )
  {
    v25 = 0;
    v26 = (_DWORD *)(v23 + 128);
    v27 = v24 + 88;
    do
    {
      if ( *v26 && *(_QWORD *)v27 && _bittest(&v21, (unsigned __int8)v25) )
        v22 += (*(_DWORD *)(*(_QWORD *)v27 + 16LL) + 7) & 0xFFFFFFF8;
      ++v25;
      v26 += 8;
      v27 += 104LL;
    }
    while ( v25 < 0x10 );
    if ( v22 )
    {
      Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)(v22 + 136), 0x44777445u);
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 8) = 1;
        *(_OWORD *)Pool2 = Source2;
        *(_OWORD *)(Pool2 + 16) = v36;
        *(__m256i *)(Pool2 + 32) = v37;
        *(_OWORD *)(Pool2 + 64) = v38[0];
        *(_OWORD *)(Pool2 + 80) = v38[1];
        *(_OWORD *)(Pool2 + 96) = v39;
        *(_QWORD *)(Pool2 + 112) = v40;
        *(_DWORD *)(Pool2 + 116) = 1;
        *a8 = Pool2;
        *(_DWORD *)(Pool2 + 8) = 1;
        *(_DWORD *)(*a8 + 4) = v22 + 136;
        *(_DWORD *)(Pool2 + 132) = 0x80000000;
        *(_DWORD *)(Pool2 + 128) = v22;
        *(_QWORD *)(Pool2 + 120) = 136LL;
        EtwpCopySchematizedFilters((void *)(Pool2 + 136));
        return 1;
      }
      return 0;
    }
  }
  v28 = DWORD1(Source2);
  v29 = DWORD1(Source2);
  *a8 = 0LL;
  v30 = (_DWORD *)ExAllocatePool2(0x100uLL, v29, 0x44777445u);
  v31 = v30;
  if ( v30 )
  {
    memmove(v30, &Source2, v28);
    v31[2] = 1;
    *a8 = (__int64)v31;
  }
  else
  {
    v8 = -1073741801;
  }
  return v8 >= 0;
}
