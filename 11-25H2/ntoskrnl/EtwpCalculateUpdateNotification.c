/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x14089B0D4
 * Callers:
 *     EtwpNotifyDisallowedGuidChange @ 0x1409EED94 (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14089B4A0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpCopySchematizedFilters @ 0x14089E8F4 (EtwpCopySchematizedFilters.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

bool __fastcall EtwpCalculateUpdateNotification(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        char a6,
        int a7,
        __int64 *a8)
{
  unsigned __int8 v9; // al
  char v10; // cl
  __int16 v11; // r14
  _OWORD *v12; // rsi
  int v13; // r9d
  __int64 v14; // r10
  __int128 v15; // xmm0
  __int64 v16; // r11
  __int64 v17; // r11
  unsigned int v18; // r8d
  _DWORD *v19; // r10
  __int64 v20; // rsi
  unsigned __int8 v21; // r15
  int v22; // ebx
  __int64 v23; // r10
  unsigned int v24; // r8d
  _DWORD *v25; // r9
  __int64 v26; // r10
  unsigned int v27; // r14d
  int v28; // esi
  _DWORD *v29; // rax
  _DWORD *v30; // rbx
  __int64 Pool2; // rax
  __int128 Source2; // [rsp+28h] [rbp-69h] BYREF
  __int128 v34; // [rsp+38h] [rbp-59h]
  __m256i v35; // [rsp+48h] [rbp-49h]
  _OWORD v36[2]; // [rsp+68h] [rbp-29h] BYREF
  __int128 v37; // [rsp+88h] [rbp-9h]
  __int64 v38; // [rsp+98h] [rbp+7h]

  if ( a5 )
  {
    if ( a6 )
      v9 = *(_BYTE *)(a1 + 103);
    else
      v9 = *(_BYTE *)(a1 + 101);
    v10 = 0;
  }
  else if ( a6 )
  {
    v9 = *(_BYTE *)(a1 + 102);
    v10 = *(_BYTE *)(a1 + 100);
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 100);
    v10 = *(_BYTE *)(a1 + 102);
  }
  v11 = *(_WORD *)(a1 + 98) & 8;
  if ( v11 )
  {
    if ( v9 || a7 != 1 )
    {
LABEL_35:
      *a8 = 0LL;
      return 1;
    }
    if ( !a3 )
      return 0;
  }
  else
  {
    if ( (a2 & a3) == 0 && (v9 & a2) == 0 )
      return 0;
    if ( a5 != 2 && a4 == v9 && !v10 && !*(_BYTE *)(a1 + 101) && !*(_BYTE *)(a1 + 103) )
      goto LABEL_35;
  }
  memset_0(&Source2, 0, 0x78uLL);
  v12 = (_OWORD *)*a8;
  v13 = 0;
  v14 = *(_QWORD *)(a1 + 32);
  Source2 = *(_OWORD *)*a8;
  v34 = v12[1];
  v35 = *(__m256i *)((_BYTE *)v12 + 1);
  *(_QWORD *)&v36[0] = *((_QWORD *)v12 + 8);
  v15 = *(_OWORD *)(v14 + 40);
  *(_QWORD *)((char *)&Source2 + 4) = 0x100000078LL;
  *(_OWORD *)&v35.m256i_u64[1] = v15;
  v16 = *(_QWORD *)(v14 + 384);
  if ( v16 )
  {
    v17 = v16 + 88;
    v18 = 0;
    v19 = (_DWORD *)(v14 + 128);
    do
    {
      if ( *v19 && *(_QWORD *)v17 && ((unsigned __int8)(1 << v18) & *(_BYTE *)(a1 + 100)) != 0 )
        v13 += (*(_DWORD *)(*(_QWORD *)v17 + 16LL) + 7) & 0xFFFFFFF8;
      ++v18;
      v19 += 8;
      v17 += 104LL;
    }
    while ( v18 < 8 );
    if ( v13 )
      DWORD1(Source2) = v13 + 136;
  }
  EtwpComputeRegEntryEnableInfo(a1, (char *)v36 + 8);
  if ( v11 )
  {
    LODWORD(v38) = 0;
    *((_QWORD *)&v37 + 1) = 0LL;
  }
  if ( v12 )
  {
    if ( *((_DWORD *)v12 + 1) != DWORD1(Source2) || RtlCompareMemory(v12, &Source2, 0x78uLL) != 120 )
      *a8 = 0LL;
    if ( *a8 )
      return 1;
  }
  v20 = *(_QWORD *)(a1 + 32);
  v21 = *(_BYTE *)(a1 + 100);
  v22 = 0;
  v23 = *(_QWORD *)(v20 + 384);
  if ( v23 )
  {
    v24 = 0;
    v25 = (_DWORD *)(v20 + 128);
    v26 = v23 + 88;
    do
    {
      if ( *v25 && *(_QWORD *)v26 && ((unsigned __int8)(1 << v24) & v21) != 0 )
        v22 += (*(_DWORD *)(*(_QWORD *)v26 + 16LL) + 7) & 0xFFFFFFF8;
      ++v24;
      v25 += 8;
      v26 += 104LL;
    }
    while ( v24 < 8 );
    if ( v22 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 8) = 1;
        *(_OWORD *)Pool2 = Source2;
        *(_OWORD *)(Pool2 + 16) = v34;
        *(__m256i *)(Pool2 + 32) = v35;
        *(_OWORD *)(Pool2 + 64) = v36[0];
        *(_OWORD *)(Pool2 + 80) = v36[1];
        *(_OWORD *)(Pool2 + 96) = v37;
        *(_QWORD *)(Pool2 + 112) = v38;
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
  v27 = DWORD1(Source2);
  *a8 = 0LL;
  v28 = 0;
  v29 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v30 = v29;
  if ( v29 )
  {
    memmove(v29, &Source2, v27);
    v30[2] = 1;
    *a8 = (__int64)v30;
  }
  else
  {
    v28 = -1073741801;
  }
  return v28 >= 0;
}
