/*
 * XREFs of MiComputeTrimAmount @ 0x140486CF0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeTrimAmount(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  int v7; // ecx
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  char v16; // cl
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  char v22; // [rsp+1Ah] [rbp+1Ah]

  v3 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a2 + 174));
  if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)(a1 + 96)
    || *(_QWORD *)(v3 + 18688) >= *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 3) < 3u || (*(_BYTE *)a1 & 0x7F) != 0) )
  {
    return 0LL;
  }
  v4 = *(_QWORD *)(a2 + 144);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL);
  if ( v4 <= v5 )
    return 0LL;
  v7 = *(_DWORD *)(a2 + 184);
  v22 = BYTE2(v7);
  if ( (v7 & 0xF) == 0 )
  {
    if ( (v7 & 0x80u) != 0 )
    {
      if ( v4 <= *(_QWORD *)(a2 + 112) )
        return 0LL;
    }
    else if ( (*(_DWORD *)(a2 - 524) & 0x40) != 0 )
    {
      goto LABEL_8;
    }
  }
  v20 = *(_QWORD *)(a2 + 112);
  if ( v4 <= v20 )
    v4 = 0LL;
  else
    v4 -= v20;
LABEL_8:
  v8 = *(unsigned __int8 *)(a1 + 1);
  v9 = 0LL;
  if ( (unsigned int)v8 >= 8 )
    return 0LL;
  v10 = (__int64 *)(a2 + 40 + 8 * v8);
  v11 = (unsigned int)(8 - v8);
  do
  {
    v12 = *v10++;
    v9 += v12;
    --v11;
  }
  while ( v11 );
  if ( !v9 )
    return 0LL;
  v13 = *(_BYTE *)a1 & 0x7F;
  if ( v13 <= 1u )
  {
    v16 = 1;
    if ( v22 == 2 )
      v16 = 3;
    v17 = v9 >> v16;
    v18 = *(_QWORD *)(a1 + 104);
    if ( v18 >= v9 )
    {
      v19 = v9 * (100 * v9 / v18) / 0x64;
      if ( v17 < v19 )
        v17 = v19;
    }
    if ( v17 <= v4 )
      v4 = v17;
    goto LABEL_28;
  }
  if ( v13 != 4 || *(_QWORD *)(v3 + 18688) >= 0xE0uLL )
  {
    if ( *(_QWORD *)(a1 + 96) <= *(_QWORD *)(a1 + 80) )
    {
      if ( v22 != 2 )
      {
        v14 = *(_QWORD *)(a1 + 104);
        v15 = *(_QWORD *)(a1 + 88);
        if ( v14 > v15 )
          v9 /= v14 / v15;
      }
      if ( v9 > v4 )
        v9 = v4;
      v4 = v9;
      goto LABEL_28;
    }
    return 0LL;
  }
  v21 = *(_QWORD *)(a2 + 144);
  if ( v21 <= v5 )
    return 0LL;
  v4 = v21 - v5;
LABEL_28:
  result = *(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 96);
  if ( v4 <= result )
    result = v4;
  ++*(_DWORD *)(*(_QWORD *)(v3 + 17600) + 4LL * (*(_BYTE *)a1 & 0x7F) + 468);
  return result;
}
