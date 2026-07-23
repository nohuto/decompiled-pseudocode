/*
 * XREFs of _RtlpMuiRegSerializeRegistryInfo @ 0x14082EA58
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1406A3368 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpMuiRegSerializeRegistryInfo(__int64 a1, _OWORD *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  size_t v7; // rdx
  char v8; // r8
  _DWORD *v9; // rax
  unsigned int v10; // r15d
  unsigned int v11; // edi
  _DWORD *v12; // rax
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  _QWORD *v24; // rsi
  unsigned int *v25; // rdx
  unsigned int *v26; // rdx
  unsigned int *v27; // rdx
  unsigned int *v28; // rdx
  unsigned int v29; // eax
  const void *v30; // rdx
  unsigned int v31; // eax
  const void *v32; // rdx
  unsigned int v33; // eax
  const void *v34; // rdx

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = *a3;
  if ( (_DWORD)v7 )
  {
    if ( !a2 )
      return (unsigned int)-1073741811;
    v8 = 1;
  }
  else
  {
    if ( a2 )
      return (unsigned int)-1073741811;
    v8 = 0;
  }
  v9 = *(_DWORD **)(a1 + 24);
  v10 = 168;
  v11 = 168;
  if ( v9 )
  {
    if ( (unsigned int)(*v9 + 168) < 0xA8 )
      return (unsigned int)-1073741811;
    v11 = (*v9 + 175) & 0xFFFFFFF8;
  }
  v12 = *(_DWORD **)(a1 + 32);
  if ( v12 )
  {
    v13 = v11 + *v12;
    if ( v13 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v13 + 7) & 0xFFFFFFF8;
  }
  v14 = *(_DWORD **)(a1 + 40);
  if ( v14 )
  {
    v15 = v11 + *v14;
    if ( v15 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v15 + 7) & 0xFFFFFFF8;
  }
  v16 = *(_DWORD **)(a1 + 56);
  if ( v16 )
  {
    v17 = v11 + *v16;
    if ( v17 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v17 + 7) & 0xFFFFFFF8;
  }
  v18 = *(_DWORD *)(a1 + 148);
  if ( v18 && *(_QWORD *)(a1 + 128) )
  {
    v19 = v11 + v18;
    if ( v19 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v19 + 7) & 0xFFFFFFF8;
  }
  v20 = *(_DWORD *)(a1 + 160);
  if ( v20 && *(_QWORD *)(a1 + 152) )
  {
    v21 = v11 + v20;
    if ( v21 < v11 )
      return (unsigned int)-1073741811;
    v11 = (v21 + 7) & 0xFFFFFFF8;
  }
  v22 = *(_DWORD *)(a1 + 144);
  if ( !v22 || !*(_QWORD *)(a1 + 136) )
    goto LABEL_32;
  v23 = v11 + v22;
  if ( v23 < v11 )
    return (unsigned int)-1073741811;
  v11 = (v23 + 7) & 0xFFFFFFF8;
LABEL_32:
  if ( v8 )
  {
    if ( (unsigned int)v7 >= v11 )
    {
      memset_0(a2, 0, v7);
      v24 = (_QWORD *)a2 + 21;
      *a2 = *(_OWORD *)a1;
      a2[1] = *(_OWORD *)(a1 + 16);
      a2[2] = *(_OWORD *)(a1 + 32);
      a2[3] = *(_OWORD *)(a1 + 48);
      a2[4] = *(_OWORD *)(a1 + 64);
      a2[5] = *(_OWORD *)(a1 + 80);
      a2[6] = *(_OWORD *)(a1 + 96);
      a2[7] = *(_OWORD *)(a1 + 112);
      a2[8] = *(_OWORD *)(a1 + 128);
      a2[9] = *(_OWORD *)(a1 + 144);
      *((_QWORD *)a2 + 20) = *(_QWORD *)(a1 + 160);
      v25 = *(unsigned int **)(a1 + 24);
      if ( v25 )
      {
        memmove((char *)a2 + 168, v25, *v25);
        *((_QWORD *)a2 + 23) = 0LL;
        *((_QWORD *)a2 + 3) = 168LL;
        v24 = (_QWORD *)((char *)a2 + ((**(_DWORD **)(a1 + 24) + 175) & 0xFFFFFFF8));
        v10 = (**(_DWORD **)(a1 + 24) + 175) & 0xFFFFFFF8;
      }
      v26 = *(unsigned int **)(a1 + 32);
      if ( v26 )
      {
        memmove(v24, v26, *v26);
        v24[2] = 0LL;
        v24[3] = 0LL;
        *((_QWORD *)a2 + 4) = (char *)v24 - (char *)a2;
        v24 = (_QWORD *)((char *)a2 + ((v10 + **(_DWORD **)(a1 + 32) + 7) & 0xFFFFFFF8));
        v10 = (v10 + **(_DWORD **)(a1 + 32) + 7) & 0xFFFFFFF8;
      }
      v27 = *(unsigned int **)(a1 + 40);
      if ( v27 )
      {
        memmove(v24, v27, *v27);
        v24[1] = 0LL;
        *((_QWORD *)a2 + 5) = (char *)v24 - (char *)a2;
        v24 = (_QWORD *)((char *)a2 + ((v10 + **(_DWORD **)(a1 + 40) + 7) & 0xFFFFFFF8));
        v10 = (v10 + **(_DWORD **)(a1 + 40) + 7) & 0xFFFFFFF8;
      }
      v28 = *(unsigned int **)(a1 + 56);
      if ( v28 )
      {
        memmove(v24, v28, *v28);
        *((_QWORD *)a2 + 7) = (char *)v24 - (char *)a2;
        v24 = (_QWORD *)((char *)a2 + ((v10 + **(_DWORD **)(a1 + 56) + 7) & 0xFFFFFFF8));
        v10 = (v10 + **(_DWORD **)(a1 + 56) + 7) & 0xFFFFFFF8;
      }
      v29 = *(_DWORD *)(a1 + 148);
      if ( v29 )
      {
        v30 = *(const void **)(a1 + 128);
        if ( v30 )
        {
          memmove(v24, v30, v29);
          *((_QWORD *)a2 + 16) = (char *)v24 - (char *)a2;
          v24 = (_QWORD *)((char *)a2 + ((v10 + *(_DWORD *)(a1 + 148) + 7) & 0xFFFFFFF8));
          v10 = (v10 + *(_DWORD *)(a1 + 148) + 7) & 0xFFFFFFF8;
        }
      }
      v31 = *(_DWORD *)(a1 + 160);
      if ( v31 )
      {
        v32 = *(const void **)(a1 + 152);
        if ( v32 )
        {
          memmove(v24, v32, v31);
          *((_QWORD *)a2 + 19) = (char *)v24 - (char *)a2;
          v24 = (_QWORD *)((char *)a2 + ((v10 + *(_DWORD *)(a1 + 160) + 7) & 0xFFFFFFF8));
        }
      }
      v33 = *(_DWORD *)(a1 + 144);
      if ( v33 )
      {
        v34 = *(const void **)(a1 + 136);
        if ( v34 )
        {
          memmove(v24, v34, v33);
          *((_QWORD *)a2 + 17) = (char *)v24 - (char *)a2;
        }
      }
      *((_QWORD *)a2 + 6) = 0LL;
      *((_QWORD *)a2 + 8) = 0LL;
      *((_QWORD *)a2 + 10) = 0LL;
      *((_QWORD *)a2 + 11) = 0LL;
      *((_QWORD *)a2 + 12) = 0LL;
      *((_QWORD *)a2 + 13) = 0LL;
      *(_DWORD *)a2 = 1024;
    }
    else
    {
      v3 = -1073741789;
    }
  }
  *a3 = v11;
  return v3;
}
