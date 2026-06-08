/*
 * XREFs of sub_140039A78 @ 0x140039A78
 * Callers:
 *     sub_14003802C @ 0x14003802C (sub_14003802C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_14002E36C @ 0x14002E36C (sub_14002E36C.c)
 *     sub_14002E988 @ 0x14002E988 (sub_14002E988.c)
 *     sub_140046E08 @ 0x140046E08 (sub_140046E08.c)
 */

__int64 __fastcall sub_140039A78(__int64 a1, PVOID **a2)
{
  __int64 v2; // rsi
  PVOID *v4; // rdi
  __int64 v5; // r14
  unsigned int *Pool2; // rax
  unsigned int *v7; // r13
  int v8; // ebx
  int v9; // ebx
  int v10; // r8d
  unsigned int v11; // ebp
  unsigned int *v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // r12d
  __int64 v20; // rax
  char *v21; // r15
  unsigned int *v22; // r14
  __int64 v23; // r13
  char *v24; // rbx
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 i; // rbp
  __int64 v29; // r15
  unsigned int j; // r12d
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  unsigned int v34; // eax
  PVOID *v35; // r14
  unsigned int *v37; // [rsp+30h] [rbp-58h]
  unsigned __int64 v40; // [rsp+A0h] [rbp+18h]
  PVOID *v41; // [rsp+A8h] [rbp+20h]

  v2 = (unsigned int)dword_1400197EC;
  v4 = 0LL;
  v5 = 0LL;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, (unsigned int)(16 * dword_1400197EC + 4), 1919119952LL);
  v37 = Pool2;
  v7 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v2;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 29LL, Pool2);
    if ( v8 >= 0 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      if ( (_DWORD)v2 )
      {
        v12 = v7 + 4;
        v13 = v2;
        do
        {
          v14 = *v12;
          v15 = *(v12 - 1);
          v12 += 4;
          v9 += v15;
          v10 += v14 * v15;
          if ( v11 >= v14 )
            v14 = v11;
          v11 = v14;
          --v13;
        }
        while ( v13 );
      }
      v16 = (320 * v2 + 55) & 0xFFFFFFF8;
      v17 = v16 + 16 * v9;
      v18 = ExAllocatePool2(64LL, v17 + 4 * v10, 1919119952LL);
      v41 = (PVOID *)v18;
      v4 = (PVOID *)v18;
      if ( !v18 )
        goto LABEL_10;
      v19 = 0;
      v20 = v18 + v16;
      v21 = (char *)v4 + v17;
      if ( (_DWORD)v2 )
      {
        v22 = v7 + 3;
        v23 = v20;
        v24 = (char *)v4 + 356;
        do
        {
          KeInitializeAffinityEx2(v24 - 308, 32LL);
          *v24 = 1;
          v25 = 0;
          *((_DWORD *)v24 - 5) = *(v22 - 2);
          *((_DWORD *)v24 - 4) = *(v22 - 1);
          *((_DWORD *)v24 - 2) = *v22;
          *((_DWORD *)v24 - 3) = v22[1];
          *(_QWORD *)(v24 + 4) = v23;
          v23 += 16LL * *v22;
          if ( *v22 )
          {
            do
            {
              v26 = v25++;
              *(_QWORD *)(*(_QWORD *)(v24 + 4) + 16 * v26 + 8) = v21;
              v21 += 4 * v22[1];
            }
            while ( v25 < *v22 );
          }
          sub_140046E08(a1, v19++, 27LL, v24 - 44);
          v24 += 320;
          v22 += 4;
        }
        while ( v19 < (unsigned int)v2 );
        v4 = v41;
        v7 = v37;
      }
      v27 = 4 * v11 + 24;
      v40 = v27;
      v5 = ExAllocatePool2(64LL, v27, 1919119952LL);
      if ( v5 )
      {
        for ( i = 0LL; (unsigned int)i < (unsigned int)v2; i = (unsigned int)(i + 1) )
        {
          v29 = 40 * i;
          for ( j = 0; j < HIDWORD(v4[v29 + 43]); ++j )
          {
            sub_140010680((char *)v5, 0, v27);
            *(_DWORD *)v5 = i;
            *(_DWORD *)(v5 + 4) = j;
            *(_DWORD *)(v5 + 8) = v4[v29 + 43];
            v8 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1400194F8)(*(_QWORD *)(a1 + 1120), v5);
            if ( v8 < 0 )
              goto LABEL_31;
            v8 = sub_14002E36C((__int64)v4, i, j, (unsigned int)v4[v29 + 43], v5);
            if ( v8 < 0 )
              goto LABEL_31;
            v31 = *(_QWORD *)(v5 + 16);
            v32 = (__int64)v4[v29 + 45] + 16 * j;
            if ( v31 )
              v33 = *(_DWORD *)(v31 + 56);
            else
              v33 = -1;
            *(_DWORD *)v32 = v33;
            v34 = *(_DWORD *)(v5 + 12);
            *(_DWORD *)(v32 + 4) = v34;
            sub_140010380(*(char **)(v32 + 8), (char *)(v5 + 24), 4LL * v34);
            v27 = v40;
          }
          v8 = sub_14002E988((__int64)v4, i);
          if ( v8 < 0 )
            goto LABEL_31;
          v27 = v40;
        }
        v8 = 0;
        *a2 = v4;
        v4 = 0LL;
      }
      else
      {
LABEL_10:
        v8 = -1073741670;
      }
    }
LABEL_31:
    ExFreePoolWithTag(v7, 0x72637250u);
    if ( v5 )
      ExFreePoolWithTag((PVOID)v5, 0x72637250u);
    if ( v4 )
    {
      if ( (_DWORD)v2 )
      {
        v35 = v4 + 40;
        do
        {
          if ( *v35 )
            ExFreePoolWithTag(*v35, 0x72637250u);
          v35 += 40;
          --v2;
        }
        while ( v2 );
      }
      ExFreePoolWithTag(v4, 0x72637250u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
