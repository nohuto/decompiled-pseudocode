/*
 * XREFs of sub_14003CF60 @ 0x14003CF60
 * Callers:
 *     sub_140037EB4 @ 0x140037EB4 (sub_140037EB4.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_14002E7F4 @ 0x14002E7F4 (sub_14002E7F4.c)
 *     sub_14002E8F8 @ 0x14002E8F8 (sub_14002E8F8.c)
 *     sub_14003CB24 @ 0x14003CB24 (sub_14003CB24.c)
 *     sub_14003E4A0 @ 0x14003E4A0 (sub_14003E4A0.c)
 */

__int64 __fastcall sub_14003CF60(int a1, _DWORD *a2, unsigned int **a3, PVOID *a4, _QWORD *a5)
{
  int v6; // ebx
  _DWORD *v7; // rdx
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // esi
  __int64 i; // r14
  __int64 v12; // r13
  unsigned int j; // r12d
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned int *Pool2; // r14
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rsi
  PVOID v23; // rbx
  char *v24; // rdi
  __int64 v25; // r9
  int v26; // ecx
  int v27; // eax
  char *v28; // rbx
  __int64 v29; // r9
  _BYTE *v30; // rdx
  int v31; // r9d
  __int64 k; // rdi
  __int64 v33; // r15
  unsigned int m; // esi
  _DWORD *v35; // rdx
  PVOID v36; // rdx
  unsigned int v38; // [rsp+68h] [rbp-81h] BYREF
  __int64 v39; // [rsp+70h] [rbp-79h] BYREF
  __int64 v40; // [rsp+78h] [rbp-71h]
  __int64 v41; // [rsp+80h] [rbp-69h] BYREF
  PVOID P; // [rsp+88h] [rbp-61h]
  PVOID v43; // [rsp+90h] [rbp-59h]
  __int64 v44; // [rsp+98h] [rbp-51h]
  __int64 v45; // [rsp+A0h] [rbp-49h] BYREF
  char v46[24]; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-29h]
  __int128 v48; // [rsp+C8h] [rbp-21h]
  __int64 v49; // [rsp+D8h] [rbp-11h]
  __int64 v50; // [rsp+E8h] [rbp-1h]

  LODWORD(v39) = 0;
  v38 = 0;
  sub_140010680(v46, 0, 0x58uLL);
  v45 = 0LL;
  v43 = 0LL;
  v6 = sub_14002E8F8((_DWORD *)qword_140019820, 0LL);
  if ( v6 < 0 )
    return (unsigned int)v6;
  P = (PVOID)ExAllocatePool2(64LL, 4LL * (unsigned int)*a2, 1919119952LL);
  v7 = P;
  if ( !P )
    return (unsigned int)-1073741670;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  LODWORD(v40) = 0;
  for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
  {
    v7[i] = v9;
    v12 = *(_QWORD *)&a2[10 * i + 6];
    if ( v12 )
    {
      v9 += *(_DWORD *)(v12 + 16);
      for ( j = 0; j < *(_DWORD *)(v12 + 16); ++j )
      {
        v6 = sub_14003CB24(a2, i, j, (__int64)v7, 0LL, &v39, &v38, (unsigned int *)&v41, 0LL, 0LL, 0LL);
        if ( v6 < 0 )
          goto LABEL_19;
        v8 = v38 + v40;
        v10 += v39;
        v7 = P;
        LODWORD(v40) = v38 + v40;
      }
    }
  }
  if ( !v9 )
  {
    v6 = -1073741637;
    goto LABEL_19;
  }
  v14 = (320 * v9 + 55) & 0xFFFFFFF8;
  v15 = v14 + 16 * v10;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, v15 + 4 * v8, 1919119952LL);
  if ( !Pool2 )
  {
    v6 = -1073741670;
LABEL_19:
    ExFreePoolWithTag(P, 0x72637250u);
    if ( v43 )
      ExFreePoolWithTag(v43, 0x72637250u);
    return (unsigned int)v6;
  }
  v43 = (PVOID)ExAllocatePool2(64LL, 56LL * v9, 1919119952LL);
  v17 = (char *)v43;
  if ( !v43 )
  {
    v6 = -1073741670;
LABEL_18:
    ExFreePoolWithTag(Pool2, 0x72637250u);
    goto LABEL_19;
  }
  v18 = (__int64)Pool2 + v14;
  v40 = v18;
  v39 = (__int64)Pool2 + v15;
  v19 = 0LL;
  *Pool2 = v9;
  while ( (unsigned int)v19 < *a2 )
  {
    v20 = (unsigned int)v19;
    v21 = *(_QWORD *)&a2[10 * v19 + 6];
    if ( v21 )
    {
      v22 = 0LL;
      while ( (unsigned int)v22 < *(_DWORD *)(v21 + 16) )
      {
        v23 = P;
        v44 = 80 * v22;
        v24 = &v17[56 * (unsigned int)(v22 + *((_DWORD *)P + v20))];
        v25 = (__int64)&Pool2[80 * (unsigned int)(v22 + *((_DWORD *)P + v20)) + 12];
        v26 = 5 * *(_DWORD *)(80 * v22 + v21 + 28);
        v41 = v25;
        *(_DWORD *)(v25 + 288) = 2 * v26;
        v27 = *(_DWORD *)(80 * v22 + v21 + 24);
        *(_WORD *)(v25 + 305) = 257;
        *(_DWORD *)(v25 + 292) = 10 * v27;
        LOBYTE(v27) = *(_BYTE *)(80 * v22 + v21 + 32) & 1;
        *(_QWORD *)(v25 + 312) = v18;
        *(_BYTE *)(v25 + 308) = v27;
        *(_OWORD *)(v25 + 264) = *(_OWORD *)(80 * v22 + v21 + 88);
        *(_QWORD *)(v25 + 280) = *(_QWORD *)(v21 + 8);
        KeInitializeAffinityEx2(v25, 32LL);
        v6 = sub_14003CB24(
               a2,
               v19,
               v22,
               (__int64)v23,
               (__int64)Pool2,
               (_DWORD *)(v41 + 300),
               &v38,
               (unsigned int *)(v41 + 296),
               v40,
               v39,
               v41);
        if ( v6 < 0 )
          goto LABEL_18;
        v28 = (char *)(v41 + 304);
        if ( (unsigned int)KeIsEqualAffinityEx(v41, &unk_140019580) )
          *v28 = 1;
        v29 = v44;
        v24[48] = *v28;
        v30 = (_BYTE *)(v21 + v29 + 48);
        *((_QWORD *)v24 + 4) = *(_QWORD *)(v29 + v21 + 52);
        if ( *v30 != 126 )
        {
          v6 = sub_14003E4A0(a1, (_DWORD)v30, -1, *(_DWORD *)(v29 + v21 + 36), (__int64)&v45, 0LL, 0LL, (__int64)v46);
          if ( v6 < 0 )
            goto LABEL_18;
          *(_QWORD *)v24 = v47;
          *(_OWORD *)(v24 + 8) = v48;
          *((_QWORD *)v24 + 3) = v49;
          *((_QWORD *)v24 + 5) = v50;
          if ( HIBYTE(word_140019A69) )
          {
            if ( (unsigned int)v22 >= 3 )
              DWORD2(v48) = 3;
            else
              DWORD2(v48) = v22 + 1;
          }
        }
        if ( (_BYTE)word_140019A69 )
        {
          if ( !v24[48] )
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              v31 = 17;
LABEL_45:
              LOBYTE(v30) = 2;
              sub_140003D28(off_140018050->DeviceExtension, (_DWORD)v30, 3, v31, (__int64)&unk_140013150);
            }
LABEL_46:
            v6 = -1073741637;
            goto LABEL_18;
          }
          if ( *(_QWORD *)v24 || *((_QWORD *)v24 + 4) )
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              v31 = 18;
              goto LABEL_45;
            }
            goto LABEL_46;
          }
        }
        v17 = (char *)v43;
        v18 = 16LL * *(unsigned int *)(v41 + 300) + v40;
        v40 = v18;
        v22 = (unsigned int)(v22 + 1);
        v39 += 4LL * v38;
        v20 = (unsigned int)v19;
      }
    }
    v19 = (unsigned int)(v19 + 1);
  }
  for ( k = 0LL; (unsigned int)k < *Pool2; k = (unsigned int)(k + 1) )
  {
    v33 = 80 * k;
    for ( m = 0; m < Pool2[v33 + 87]; ++m )
    {
      v35 = (_DWORD *)(*(_QWORD *)&Pool2[v33 + 90] + 16LL * m);
      if ( *v35 != -1 )
      {
        v6 = sub_14002E7F4((__int64)&Pool2[v33 + 12], (__int64)v35);
        if ( v6 < 0 )
          goto LABEL_18;
      }
    }
  }
  v6 = 0;
  v36 = v43;
  *a3 = Pool2;
  *a4 = P;
  *a5 = v36;
  return (unsigned int)v6;
}
