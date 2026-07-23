/*
 * XREFs of RtlFindLongestRunClearCapped @ 0x1403C5C70
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x1403C41E0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLongestRunClearCapped(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v5; // edx
  int v7; // r12d
  unsigned int v8; // ecx
  unsigned int v9; // r11d
  unsigned int v10; // edi
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  __int64 v13; // r10
  unsigned int v14; // r14d
  unsigned __int8 *v15; // r15
  unsigned int v16; // r8d
  unsigned __int8 v17; // r9
  unsigned __int8 *v18; // r15
  unsigned int i; // eax
  unsigned int v20; // r12d
  unsigned int v21; // edx
  char v22; // cl
  unsigned int v23; // r9d
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // r12d
  __int64 v28; // rdx
  int v29; // eax
  __int64 result; // rax
  unsigned int v31; // ecx
  unsigned int v32; // [rsp+0h] [rbp-48h]
  unsigned int v33; // [rsp+4h] [rbp-44h]
  unsigned int v34; // [rsp+4h] [rbp-44h]
  unsigned int v35; // [rsp+8h] [rbp-40h]
  char v36; // [rsp+Ch] [rbp-3Ch]
  int v38; // [rsp+60h] [rbp+18h]
  unsigned int v39; // [rsp+68h] [rbp+20h]

  v5 = *a1;
  v36 = *a1;
  v7 = *a1 & 7;
  v38 = v7;
  v8 = (*a1 >> 3) + (v7 != 0);
  v32 = v8;
  v9 = 0;
  v10 = 0;
  v11 = (*a3 < v5 ? *a3 : 0) & 0xFFFFFFF8;
  v35 = v8 - 1;
  v12 = v11 >> 3;
  LODWORD(v13) = 0;
  v14 = v11;
  v15 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + (v11 >> 3));
  v16 = 0;
  v17 = *v15;
  v18 = v15 + 1;
  if ( v11 >> 3 == v8 - 1 && v7 )
    v17 |= byte_140012870[v5 & 7];
  for ( i = 0; ; i = v39 + 1 )
  {
    v39 = i;
    v20 = v9;
    v33 = v10;
    v21 = v16;
    if ( i >= v8 )
      break;
    if ( v17 )
    {
      v10 = *((unsigned __int8 *)RtlpBitsClearLow + v17) + (_DWORD)v13;
      if ( v10 )
      {
        if ( v10 >= a2 )
          goto LABEL_19;
        if ( v10 > v16 )
        {
          v16 = *((unsigned __int8 *)RtlpBitsClearLow + v17) + (_DWORD)v13;
          v9 = v14;
        }
      }
      v13 = *((unsigned __int8 *)RtlpBitsClearHigh + v17);
      if ( v14 != v11 )
        v10 = v33;
      v14 = 8 * v12 - v13 + 8;
      v22 = *((_BYTE *)&qword_140012878 - v13) | byte_14002BBD0[*((unsigned __int8 *)RtlpBitsClearLow + v17)];
      while ( 1 )
      {
        v17 |= v22;
        if ( v17 == 0xFF )
          break;
        v28 = *((unsigned __int8 *)RtlpBitsClearAnywhere + v17);
        if ( v16 >= (unsigned int)v28 )
          break;
        v22 = byte_14002BBD0[v28];
        v29 = 0;
        while ( ((unsigned __int8)v22 & v17) != 0 )
        {
          v22 *= 2;
          ++v29;
        }
        v9 = 8 * v12 + v29;
        if ( (unsigned int)v28 >= a2 )
        {
          result = a2;
          goto LABEL_51;
        }
        v16 = *((unsigned __int8 *)RtlpBitsClearAnywhere + v17);
      }
    }
    else
    {
      LODWORD(v13) = v13 + 8;
      if ( (unsigned int)v13 >= a2 )
      {
LABEL_19:
        *a3 = v14;
        return a2;
      }
    }
    ++v12;
    v34 = v9;
    v23 = v16;
    v24 = v13;
    v25 = v16;
    v26 = v13;
    v27 = v10;
    if ( v12 >= v32 )
    {
      if ( (_DWORD)v13 )
      {
        LODWORD(v13) = 0;
        v10 = v26;
        v16 = v24;
        v9 = v14;
        if ( v14 != v11 )
          v10 = v27;
        if ( v26 <= v25 )
          v16 = v25;
        if ( v24 <= v23 )
          v9 = v34;
      }
      v12 = 0;
      v18 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
    }
    v17 = *v18++;
    if ( v12 == v35 )
    {
      if ( v38 )
        v17 |= byte_140012870[v36 & 7];
    }
    v8 = v32;
  }
  if ( (_DWORD)v13 )
  {
    v9 = v14;
    v31 = v10 + v13;
    if ( v14 + (_DWORD)v13 != v11 )
      v31 = v13;
    if ( v31 > v16 )
      v16 = v31;
    if ( v31 <= v21 )
      v9 = v20;
  }
  else if ( !v16 )
  {
    *a3 = 0;
    return 0LL;
  }
  if ( v16 > a2 )
    v16 = a2;
  result = v16;
LABEL_51:
  *a3 = v9;
  return result;
}
