/*
 * XREFs of AcpiIoctlArgumentToPackageObjV2 @ 0x1400628B8
 * Callers:
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140061F70 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1400628B8 (AcpiIoctlArgumentToPackageObjV2.c)
 * Callees:
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1400628B8 (AcpiIoctlArgumentToPackageObjV2.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV2(__int64 a1, __int64 a2, char a3, unsigned int *a4, PVOID *a5)
{
  __int64 v7; // r10
  unsigned int v8; // r15d
  __int64 v9; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 i; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ebx
  unsigned int v16; // eax
  unsigned int *Pool2; // rax
  __int64 j; // rsi
  _WORD *v19; // r8
  __int16 v20; // ax
  int v21; // r9d
  __int64 v22; // rax
  __int64 v24; // [rsp+20h] [rbp-28h]

  *a4 = 0;
  *a5 = 0LL;
  if ( a1 )
  {
    v7 = *(unsigned int *)(a1 + 4);
    if ( (unsigned int)(v7 - 1) > 0xA && *(_WORD *)a1 == 4 )
    {
      v8 = 0;
      v9 = a1 + 8;
      v10 = v7 + a1 + 8;
      for ( i = a1 + 8; i < v10; i += v14 + 8 )
      {
        if ( *(_WORD *)i > 4u )
          goto LABEL_14;
        v12 = *(_DWORD *)(i + 4);
        if ( v12 > (unsigned int)v7 )
          goto LABEL_14;
        v13 = 4LL;
        if ( v12 >= 4 )
          v13 = v12;
        v14 = *(unsigned int *)(i + 4);
        if ( i + v13 + 8 > v10 )
        {
LABEL_14:
          v15 = -1073741788;
          goto LABEL_36;
        }
        ++v8;
        if ( v12 < 4 )
          v14 = 4LL;
      }
      v16 = 40 * v8 + 8;
      *a4 = v16;
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, v16, 1097884481LL);
      *a5 = Pool2;
      if ( !Pool2 )
      {
        v15 = -1073741670;
        goto LABEL_36;
      }
      *Pool2 = v8;
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= v8 )
          return 0;
        v19 = *a5;
        if ( *(_WORD *)v9 == 4 )
          v20 = 4;
        else
          v20 = *(_WORD *)v9 + 1;
        v19[20 * j + 5] = v20;
        if ( *(_WORD *)v9 )
        {
          if ( *(_WORD *)v9 == 1 || *(_WORD *)v9 == 2 )
            goto LABEL_29;
          if ( *(_WORD *)v9 != 4 )
          {
            v19[20 * j + 5] = 3;
LABEL_29:
            *(_DWORD *)&v19[20 * j + 16] = *(_DWORD *)(v9 + 4);
            *(_QWORD *)&v19[20 * j + 20] = v9 + 8;
            goto LABEL_31;
          }
          v24 = (__int64)&v19[20 * j + 20];
          v21 = (_DWORD)v19 + 8 * (5 * j + 4);
          LOBYTE(v19) = a3;
          v15 = AcpiIoctlArgumentToPackageObjV2(v9, 64, (_DWORD)v19, v21, v24);
          if ( v15 < 0 )
            goto LABEL_36;
        }
        else
        {
          *(_DWORD *)&v19[20 * j + 16] = a3 != 0 ? 8 : 4;
          *(_QWORD *)&v19[20 * j + 12] = *(unsigned int *)(v9 + 8);
        }
LABEL_31:
        v22 = *(unsigned int *)(v9 + 4);
        if ( (unsigned int)v22 < 4 )
          v22 = 4LL;
        v9 += v22 + 8;
      }
    }
  }
  v15 = -1073741811;
LABEL_36:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0x41706341u);
    *a4 = 0;
    *a5 = 0LL;
  }
  return (unsigned int)v15;
}
