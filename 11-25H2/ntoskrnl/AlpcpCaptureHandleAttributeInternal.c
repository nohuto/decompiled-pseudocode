/*
 * XREFs of AlpcpCaptureHandleAttributeInternal @ 0x1408AE47C
 * Callers:
 *     AlpcpCaptureHandleAttribute @ 0x1408AE0B4 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x140A9B488 (AlpcpCaptureHandleAttribute32.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObCaptureObjectStateForDuplication @ 0x1408AD75C (ObCaptureObjectStateForDuplication.c)
 *     AlpcpAllocateBlob @ 0x1408AF0C0 (AlpcpAllocateBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttributeInternal(char *a1, __int64 a2)
{
  char *v2; // r15
  char PreviousMode; // r12
  unsigned int v4; // esi
  ULONG_PTR v5; // rdi
  char *Pool2; // r14
  void *Blob; // rax
  struct _EX_RUNDOWN_REF *Process; // r13
  int v9; // ebx
  __int64 j; // r12
  int v11; // ecx
  __int64 v13; // r10
  __int64 i; // r9
  int v15; // ecx
  char *v16; // [rsp+58h] [rbp-50h]
  int *v17; // [rsp+60h] [rbp-48h]
  char v18; // [rsp+B0h] [rbp+8h]
  __int64 v20; // [rsp+C0h] [rbp+18h]

  v2 = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = PreviousMode;
  if ( (*(_DWORD *)a1 & 0xFFF0FFFF) != 0 )
    return 3221225485LL;
  v4 = 1;
  v5 = 0LL;
  Pool2 = 0LL;
  if ( (*(_DWORD *)a1 & 0x40000) == 0 )
    goto LABEL_3;
  v4 = *((_DWORD *)a1 + 4);
  if ( v4 > 0x200 )
    return 3221227298LL;
  if ( v4 <= 1 )
    return 3221225485LL;
  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  v13 = *((_QWORD *)v2 + 1);
  if ( KeGetCurrentThread()->PreviousMode && 16LL * v4 && (v13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    v16 = &Pool2[24 * i];
    v17 = (int *)(v13 + 16LL * (unsigned int)i);
    v15 = *v17;
    *(_DWORD *)v16 = *v17;
    *((_QWORD *)v16 + 1) = (unsigned int)v17[1];
    *((_DWORD *)v16 + 4) = v17[2];
    *((_DWORD *)v16 + 5) = v17[3];
    if ( (v15 & 0xFFF4FFFF) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_12;
    }
  }
  v2 = Pool2;
LABEL_3:
  Blob = (void *)AlpcpAllocateBlob(AlpcHandleDataType, 48LL * v4);
  v5 = (ULONG_PTR)Blob;
  if ( Blob )
  {
    memset_0(Blob, 0, 48LL * v4);
    *(_DWORD *)(v5 + 4) = v4;
    if ( PreviousMode )
      Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
    else
      Process = (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess;
    v9 = 0;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= v4 )
      {
        *(_QWORD *)(a2 + 48) = v5;
        v5 = 0LL;
        goto LABEL_12;
      }
      v20 = 48 * j;
      v9 = ObCaptureObjectStateForDuplication(
             Process,
             *(_QWORD *)&v2[24 * j + 8],
             *(_DWORD *)&v2[24 * j + 20],
             (*(_DWORD *)&v2[24 * j] & 0x10000 | 0x40000u) >> 15,
             v18,
             v5 + 48 * j + 8);
      if ( v9 >= 0 )
      {
        v11 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(*(_QWORD *)(v20 + v5 + 24)
                                                                                                - 24LL) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(*(_QWORD *)(v20 + v5 + 24) - 48) >> 8)]
                        + 68);
        *(_DWORD *)(v20 + v5) = v11;
        if ( (v11 & 0xFFD) == 0 )
          break;
      }
    }
    v9 = -1073741790;
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_12:
  if ( v5 )
    AlpcpDereferenceBlobEx(v5);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4863704Cu);
  return (unsigned int)v9;
}
