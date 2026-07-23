/*
 * XREFs of BiVerifyBootPartition @ 0x140814C10
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiVerifyBootPartition(int *a1, _QWORD *a2, _QWORD *a3, int **a4, _QWORD *a5, unsigned int *a6)
{
  PVOID v7; // rcx
  _QWORD *v8; // r11
  _DWORD *v9; // rbp
  unsigned int v10; // r12d
  int v11; // eax
  _DWORD *v12; // r13
  char *v13; // rdi
  int *v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // eax
  int v18; // edx
  unsigned int v19; // ebx
  unsigned __int64 v21; // r8
  _DWORD *v22; // r11
  int v23; // eax
  __int64 v24; // rax
  char *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rbx
  size_t v28; // rbx
  unsigned int v29; // r14d
  char *Pool2; // rax
  PVOID P; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp+10h]
  _QWORD *v34; // [rsp+A0h] [rbp+18h]
  int **v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v7 = 0LL;
  v32 = 0;
  P = 0LL;
  v8 = a2;
  v9 = 0LL;
  v10 = 0;
  v11 = *a1;
  v12 = 0LL;
  v13 = 0LL;
  if ( *a1 == 2 )
  {
    v12 = a1 + 4;
    v14 = a1 + 8;
LABEL_9:
    v16 = 32;
    goto LABEL_13;
  }
  if ( v11 == 6 )
  {
    v9 = a1 + 4;
LABEL_8:
    v14 = v9 + 4;
    goto LABEL_9;
  }
  if ( v11 == 10 )
  {
    v15 = (unsigned int)a1[9];
    if ( *(int *)((char *)a1 + v15 + 16) != 6 )
      return (unsigned int)-1073741811;
    v9 = (int *)((char *)a1 + v15 + 32);
    goto LABEL_8;
  }
  if ( v11 != 8 )
    return (unsigned int)-1073741811;
  v17 = a1[6];
  if ( !v17 )
    return (unsigned int)-1073741811;
  v16 = v17 + 16;
  v14 = (int *)((char *)a1 + v16);
LABEL_13:
  v18 = *v14;
  if ( !*v14 )
    goto LABEL_34;
  if ( v18 != 6 )
  {
    if ( v18 != 7 )
      return (unsigned int)-1073741811;
    goto LABEL_34;
  }
  v21 = (unsigned int)a1[2];
  v10 = v16 + 24;
  v22 = (int *)((char *)a1 + v16 + 24);
  if ( v21 < (unsigned __int64)(v16 + 44) + 16 || (unsigned int)v21 < v10 + v22[2] || *v22 || v22[4] != 5 )
    return (unsigned int)-1073741811;
  v23 = BiConvertBootEnvironmentDeviceToNt((int *)((char *)a1 + v10), 0, 0, &P, &v32);
  v7 = P;
  v19 = v23;
  if ( v23 >= 0 )
  {
    if ( v32 < 0x2E || *(_DWORD *)P != 3 || (v24 = *((unsigned int *)P + 5), *(_DWORD *)((char *)P + v24) != 2) )
    {
      v19 = -1073741811;
      goto LABEL_44;
    }
    v25 = (char *)P + v24;
    v26 = -1LL;
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)&v25[2 * v27 + 20] );
    v28 = (unsigned int)(2 * v27);
    do
      ++v26;
    while ( *((_WORD *)P + v26 + 12) );
    v29 = 2 * v26 + 2;
    Pool2 = (char *)ExAllocatePool2(0x102uLL, v29 + (unsigned int)v28, 0x4B444342u);
    v13 = Pool2;
    if ( !Pool2 )
    {
      v7 = P;
      v19 = -1073741801;
      goto LABEL_44;
    }
    memmove(Pool2, v25 + 20, v28);
    memmove(&v13[v28], (char *)P + 24, v29);
    v7 = P;
    a4 = v35;
    a3 = v34;
    v8 = v33;
LABEL_34:
    v19 = 0;
    if ( v8 )
      *v8 = v9;
    if ( a3 )
      *a3 = v12;
    if ( a4 )
      *a4 = v14;
    if ( a6 )
      *a6 = v10;
    if ( a5 )
    {
      *a5 = v13;
      v13 = 0LL;
    }
  }
LABEL_44:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x4B444342u);
  return v19;
}
