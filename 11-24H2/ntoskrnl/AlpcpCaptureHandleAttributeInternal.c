/*
 * XREFs of AlpcpCaptureHandleAttributeInternal @ 0x14089385C
 * Callers:
 *     AlpcpCaptureHandleAttribute @ 0x140893540 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x140A9C5D8 (AlpcpCaptureHandleAttribute32.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpAllocateBlob @ 0x140893EF0 (AlpcpAllocateBlob.c)
 *     ObCaptureObjectStateForDuplication @ 0x1408946D0 (ObCaptureObjectStateForDuplication.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttributeInternal(__int64 a1, __int64 a2)
{
  char PreviousMode; // r12
  __int64 v4; // rsi
  ULONG_PTR v5; // rdi
  char *Pool2; // r14
  void *Blob; // rax
  _KPROCESS *Process; // r13
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

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = PreviousMode;
  if ( (*(_DWORD *)a1 & 0xFFF0FFFF) != 0 )
    return 3221225485LL;
  LODWORD(v4) = 1;
  v5 = 0LL;
  Pool2 = 0LL;
  if ( (*(_DWORD *)a1 & 0x40000) == 0 )
    goto LABEL_3;
  v4 = *(unsigned int *)(a1 + 16);
  if ( (unsigned int)v4 > 0x200 )
    return 3221227298LL;
  if ( (unsigned int)v4 <= 1 )
    return 3221225485LL;
  Pool2 = (char *)ExAllocatePool2(0x40uLL, 24 * v4, 0x4863704Cu);
  if ( !Pool2 )
    return 3221225495LL;
  v13 = *(_QWORD *)(a1 + 8);
  if ( KeGetCurrentThread()->PreviousMode && 16LL * (unsigned int)v4 && (v13 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
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
LABEL_3:
  Blob = (void *)AlpcpAllocateBlob(AlpcHandleDataType, 48LL * (unsigned int)v4, 0LL);
  v5 = (ULONG_PTR)Blob;
  if ( Blob )
  {
    memset_0(Blob, 0, 48LL * (unsigned int)v4);
    *(_DWORD *)(v5 + 4) = v4;
    if ( PreviousMode )
      Process = KeGetCurrentThread()->ApcState.Process;
    else
      Process = PsInitialSystemProcess;
    v9 = 0;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= (unsigned int)v4 )
      {
        *(_QWORD *)(a2 + 48) = v5;
        v5 = 0LL;
        goto LABEL_12;
      }
      v20 = 48 * j;
      v9 = ObCaptureObjectStateForDuplication(Process, v18, v5 + 48 * j + 8);
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
