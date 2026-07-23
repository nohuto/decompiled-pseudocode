/*
 * XREFs of IopTranslateAndAdjustReqDesc @ 0x14071F9BC
 * Callers:
 *     IopSetupArbiterAndTranslators @ 0x140A65728 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopTranslateAndAdjustReqDesc(__int64 a1, __int64 a2, __int64 *a3)
{
  _DWORD *v3; // r14
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // rsi
  int v8; // edi
  char *Pool2; // r13
  _DWORD *v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // eax
  _OWORD *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rsi
  _OWORD *v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 j; // rbx
  int *v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  char *v28; // [rsp+48h] [rbp-60h]
  _OWORD **v29; // [rsp+50h] [rbp-58h]
  char v30; // [rsp+B0h] [rbp+8h]
  __int64 v31; // [rsp+B0h] [rbp+8h]
  int i; // [rsp+C8h] [rbp+20h]

  v3 = (_DWORD *)(a1 + 56);
  v4 = 0;
  v27 = *(_QWORD *)(a2 + 24);
  v5 = *(unsigned int *)(a1 + 56);
  v6 = 0;
  v30 = 0;
  v7 = a1;
  v8 = -1073741823;
  if ( !(_DWORD)v5 )
    return 3221225485LL;
  *a3 = 0LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL, 8 * v5, 0x20207050u);
  if ( !Pool2 )
    return 3221225626LL;
  v11 = (_DWORD *)ExAllocatePool2(0x100uLL, 4LL * (unsigned int)*v3, 0x20207050u);
  if ( !v11 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  v12 = *(_QWORD *)(v7 + 64);
  v29 = (_OWORD **)(v7 + 64);
  v13 = 0LL;
  for ( i = 0; (unsigned int)v13 < *v3; i = v13 )
  {
    v26 = &v11[v13];
    v28 = &Pool2[8 * v13];
    v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v27 + 8), v12);
    if ( v8 >= 0 && (v14 = *v26) != 0 )
    {
      v30 = 1;
    }
    else
    {
      *(_QWORD *)v28 = v12;
      v14 = 1;
      *v26 = 0;
    }
    v6 += v14;
    v12 += 32LL;
    if ( v8 >= 0 && v4 != 288 )
      v4 = v8;
    v13 = (unsigned int)(i + 1);
  }
  if ( v30 )
    v8 = v4;
  v15 = (_OWORD *)ExAllocatePool2(0x100uLL, 32LL * v6, 0x20207050u);
  if ( !v15 )
    goto LABEL_19;
  v31 = ExAllocatePool2(0x100uLL, 0x128uLL, 0x20207050u);
  v16 = v31;
  if ( v31 )
  {
    v17 = 2LL;
    v18 = (_OWORD *)v31;
    do
    {
      *v18 = *(_OWORD *)v7;
      v18[1] = *(_OWORD *)(v7 + 16);
      v18[2] = *(_OWORD *)(v7 + 32);
      v18[3] = *(_OWORD *)(v7 + 48);
      v18[4] = *(_OWORD *)(v7 + 64);
      v18[5] = *(_OWORD *)(v7 + 80);
      v18[6] = *(_OWORD *)(v7 + 96);
      v18 += 8;
      v19 = *(_OWORD *)(v7 + 112);
      v7 += 128LL;
      *(v18 - 1) = v19;
      --v17;
    }
    while ( v17 );
    *v18 = *(_OWORD *)v7;
    v18[1] = *(_OWORD *)(v7 + 16);
    v20 = *(_QWORD *)(v7 + 32);
    v21 = 0LL;
    *((_QWORD *)v18 + 4) = v20;
    *(_QWORD *)(v31 + 16) = 0LL;
    *(_QWORD *)(v31 + 32) = 0LL;
    *(_QWORD *)(v31 + 288) = a2;
    *(_QWORD *)(v31 + 48) = v31 + 40;
    *(_QWORD *)(v31 + 40) = v31 + 40;
    *(_DWORD *)(v31 + 56) = v6;
    *(_QWORD *)(v31 + 64) = v15;
    *(_QWORD *)(v31 + 112) = v31 + 136;
    v22 = *v29;
    if ( !*v3 )
    {
LABEL_37:
      *a3 = v16;
      goto LABEL_38;
    }
    while ( 1 )
    {
      v23 = v11[v21];
      if ( !v23 )
        break;
      memmove(v15, *(const void **)&Pool2[8 * v21], 32LL * v23);
      v24 = 32LL * (unsigned int)v11[v21];
LABEL_35:
      v22 += 2;
      v21 = (unsigned int)(v21 + 1);
      v15 = (_OWORD *)((char *)v15 + v24);
      if ( (unsigned int)v21 >= *v3 )
      {
        v16 = v31;
        goto LABEL_37;
      }
    }
    *v15 = *v22;
    v15[1] = v22[1];
    if ( *((_BYTE *)v15 + 1) == 1 )
      goto LABEL_33;
    if ( *((_BYTE *)v15 + 1) != 2 )
    {
      if ( *((_BYTE *)v15 + 1) == 3 )
        goto LABEL_33;
      if ( *((_BYTE *)v15 + 1) != 4 )
      {
        if ( *((_BYTE *)v15 + 1) == 6 )
        {
          *((_DWORD *)v15 + 3) = 2;
          *((_DWORD *)v15 + 4) = 1;
          goto LABEL_34;
        }
        if ( *((_BYTE *)v15 + 1) != 7 )
        {
LABEL_34:
          v24 = 32LL;
          goto LABEL_35;
        }
LABEL_33:
        *((_DWORD *)v15 + 5) = 0;
        *((_DWORD *)v15 + 7) = 0;
        *((_DWORD *)v15 + 4) = 2;
        *((_DWORD *)v15 + 6) = 1;
        goto LABEL_34;
      }
    }
    *((_DWORD *)v15 + 2) = 2;
    *((_DWORD *)v15 + 3) = 1;
    goto LABEL_34;
  }
  ExFreePoolWithTag(v15, 0);
LABEL_19:
  v8 = -1073741670;
LABEL_38:
  for ( j = 0LL; (unsigned int)j < *v3; j = (unsigned int)(j + 1) )
  {
    if ( v11[j] )
      ExFreePoolWithTag(*(PVOID *)&Pool2[8 * j], 0);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)v8;
}
