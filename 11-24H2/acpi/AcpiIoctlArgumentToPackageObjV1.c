/*
 * XREFs of AcpiIoctlArgumentToPackageObjV1 @ 0x140042620
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140010C04 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x140042620 (AcpiIoctlArgumentToPackageObjV1.c)
 * Callees:
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x140042620 (AcpiIoctlArgumentToPackageObjV1.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV1(_WORD *a1, __int64 a2, char a3, unsigned int *a4, PVOID *a5)
{
  __int64 v7; // r10
  unsigned int v8; // r15d
  _WORD *v9; // rdi
  unsigned __int64 v10; // r9
  _WORD *i; // rcx
  unsigned int v12; // eax
  unsigned int *Pool2; // rax
  __int64 j; // rsi
  int v15; // ebx
  _WORD *v17; // r8
  __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int16 v20; // dx
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // [rsp+20h] [rbp-28h]

  *a4 = 0;
  *a5 = 0LL;
  if ( !a1 || (v7 = (unsigned __int16)a1[1], (unsigned __int16)(v7 - 1) <= 6u) || *a1 != 4 )
  {
    v15 = -1073741811;
    goto LABEL_12;
  }
  v8 = 0;
  v9 = a1 + 2;
  v10 = (unsigned __int64)a1 + v7 + 4;
  for ( i = a1 + 2; (unsigned __int64)i < v10; i = (_WORD *)((char *)i + v23 + 4) )
  {
    if ( *i > 4u )
      goto LABEL_27;
    v20 = i[1];
    if ( v20 > (unsigned __int16)v7 )
      goto LABEL_27;
    v22 = 4LL;
    if ( v20 >= 4u )
      v22 = (unsigned __int16)i[1];
    v23 = (unsigned __int16)i[1];
    if ( (unsigned __int64)i + v22 + 4 > v10 )
    {
LABEL_27:
      v15 = -1073741788;
      goto LABEL_12;
    }
    ++v8;
    if ( v20 < 4u )
      v23 = 4LL;
  }
  v12 = 40 * v8 + 8;
  *a4 = v12;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, v12, 1097884481LL);
  *a5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v8;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= v8 )
        return 0;
      v17 = *a5;
      if ( *v9 == 4 )
        v18 = 4;
      else
        v18 = *v9 + 1;
      v17[20 * j + 5] = v18;
      if ( !*v9 )
      {
        *(_DWORD *)&v17[20 * j + 16] = a3 != 0 ? 8 : 4;
        *(_QWORD *)&v17[20 * j + 12] = *((unsigned int *)v9 + 1);
        goto LABEL_18;
      }
      if ( *v9 == 1 || *v9 == 2 )
        goto LABEL_23;
      if ( *v9 != 4 )
        break;
      v24 = (__int64)&v17[20 * j + 20];
      v21 = (_DWORD)v17 + 8 * (5 * j + 4);
      LOBYTE(v17) = a3;
      v15 = AcpiIoctlArgumentToPackageObjV1((_DWORD)v9, 64, (_DWORD)v17, v21, v24);
      if ( v15 < 0 )
        goto LABEL_12;
LABEL_18:
      v19 = (unsigned __int16)v9[1];
      if ( (unsigned __int16)v19 < 4u )
        v19 = 4LL;
      v9 = (_WORD *)((char *)v9 + v19 + 4);
    }
    v17[20 * j + 5] = 3;
LABEL_23:
    *(_DWORD *)&v17[20 * j + 16] = (unsigned __int16)v9[1];
    *(_QWORD *)&v17[20 * j + 20] = v9 + 2;
    goto LABEL_18;
  }
  v15 = -1073741670;
LABEL_12:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0x41706341u);
    *a4 = 0;
    *a5 = 0LL;
  }
  return (unsigned int)v15;
}
