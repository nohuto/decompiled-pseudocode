/*
 * XREFs of IopTranslateAndAdjustReqDesc @ 0x140715D2C
 * Callers:
 *     IopSetupArbiterAndTranslators @ 0x140A699E8 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopTranslateAndAdjustReqDesc(__int64 a1, __int64 a2, __int64 *a3)
{
  _DWORD *v3; // r14
  int v4; // ebx
  int v5; // r15d
  __int64 v6; // rsi
  int v7; // edi
  char *Pool2; // r13
  _DWORD *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // eax
  _OWORD *v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int64 v20; // rsi
  _OWORD *v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 j; // rbx
  int *v25; // [rsp+30h] [rbp-78h]
  __int64 v26; // [rsp+40h] [rbp-68h]
  char *v27; // [rsp+48h] [rbp-60h]
  _OWORD **v28; // [rsp+50h] [rbp-58h]
  char v29; // [rsp+B0h] [rbp+8h]
  __int64 v30; // [rsp+B0h] [rbp+8h]
  int i; // [rsp+C8h] [rbp+20h]

  v3 = (_DWORD *)(a1 + 56);
  v4 = 0;
  v26 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v29 = 0;
  v6 = a1;
  v7 = -1073741823;
  if ( !*(_DWORD *)(a1 + 56) )
    return 3221225485LL;
  *a3 = 0LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v10 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( !v10 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  v11 = *(_QWORD *)(v6 + 64);
  v28 = (_OWORD **)(v6 + 64);
  v12 = 0LL;
  for ( i = 0; (unsigned int)v12 < *v3; i = v12 )
  {
    v25 = &v10[v12];
    v27 = &Pool2[8 * v12];
    v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v26 + 8));
    if ( v7 >= 0 && (v13 = *v25) != 0 )
    {
      v29 = 1;
    }
    else
    {
      *(_QWORD *)v27 = v11;
      v13 = 1;
      *v25 = 0;
    }
    v5 += v13;
    v11 += 32LL;
    if ( v7 >= 0 && v4 != 288 )
      v4 = v7;
    v12 = (unsigned int)(i + 1);
  }
  if ( v29 )
    v7 = v4;
  v14 = (_OWORD *)ExAllocatePool2(0x100uLL);
  if ( !v14 )
    goto LABEL_19;
  v30 = ExAllocatePool2(0x100uLL);
  v15 = v30;
  if ( v30 )
  {
    v16 = 2LL;
    v17 = (_OWORD *)v30;
    do
    {
      *v17 = *(_OWORD *)v6;
      v17[1] = *(_OWORD *)(v6 + 16);
      v17[2] = *(_OWORD *)(v6 + 32);
      v17[3] = *(_OWORD *)(v6 + 48);
      v17[4] = *(_OWORD *)(v6 + 64);
      v17[5] = *(_OWORD *)(v6 + 80);
      v17[6] = *(_OWORD *)(v6 + 96);
      v17 += 8;
      v18 = *(_OWORD *)(v6 + 112);
      v6 += 128LL;
      *(v17 - 1) = v18;
      --v16;
    }
    while ( v16 );
    *v17 = *(_OWORD *)v6;
    v17[1] = *(_OWORD *)(v6 + 16);
    v19 = *(_QWORD *)(v6 + 32);
    v20 = 0LL;
    *((_QWORD *)v17 + 4) = v19;
    *(_QWORD *)(v30 + 16) = 0LL;
    *(_QWORD *)(v30 + 32) = 0LL;
    *(_QWORD *)(v30 + 288) = a2;
    *(_QWORD *)(v30 + 48) = v30 + 40;
    *(_QWORD *)(v30 + 40) = v30 + 40;
    *(_DWORD *)(v30 + 56) = v5;
    *(_QWORD *)(v30 + 64) = v14;
    *(_QWORD *)(v30 + 112) = v30 + 136;
    v21 = *v28;
    if ( !*v3 )
    {
LABEL_37:
      *a3 = v15;
      goto LABEL_38;
    }
    while ( 1 )
    {
      v22 = v10[v20];
      if ( !v22 )
        break;
      memmove(v14, *(const void **)&Pool2[8 * v20], 32LL * v22);
      v23 = 32LL * (unsigned int)v10[v20];
LABEL_35:
      v21 += 2;
      v20 = (unsigned int)(v20 + 1);
      v14 = (_OWORD *)((char *)v14 + v23);
      if ( (unsigned int)v20 >= *v3 )
      {
        v15 = v30;
        goto LABEL_37;
      }
    }
    *v14 = *v21;
    v14[1] = v21[1];
    if ( *((_BYTE *)v14 + 1) == 1 )
      goto LABEL_33;
    if ( *((_BYTE *)v14 + 1) != 2 )
    {
      if ( *((_BYTE *)v14 + 1) == 3 )
        goto LABEL_33;
      if ( *((_BYTE *)v14 + 1) != 4 )
      {
        if ( *((_BYTE *)v14 + 1) == 6 )
        {
          *((_DWORD *)v14 + 3) = 2;
          *((_DWORD *)v14 + 4) = 1;
          goto LABEL_34;
        }
        if ( *((_BYTE *)v14 + 1) != 7 )
        {
LABEL_34:
          v23 = 32LL;
          goto LABEL_35;
        }
LABEL_33:
        *((_DWORD *)v14 + 5) = 0;
        *((_DWORD *)v14 + 7) = 0;
        *((_DWORD *)v14 + 4) = 2;
        *((_DWORD *)v14 + 6) = 1;
        goto LABEL_34;
      }
    }
    *((_DWORD *)v14 + 2) = 2;
    *((_DWORD *)v14 + 3) = 1;
    goto LABEL_34;
  }
  ExFreePoolWithTag(v14, 0);
LABEL_19:
  v7 = -1073741670;
LABEL_38:
  for ( j = 0LL; (unsigned int)j < *v3; j = (unsigned int)(j + 1) )
  {
    if ( v10[j] )
      ExFreePoolWithTag(*(PVOID *)&Pool2[8 * j], 0);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v10, 0);
  return (unsigned int)v7;
}
