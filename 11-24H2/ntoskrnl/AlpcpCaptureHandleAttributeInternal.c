/*
 * XREFs of AlpcpCaptureHandleAttributeInternal @ 0x14093F21C
 * Callers:
 *     AlpcpCaptureHandleAttribute @ 0x14093EF00 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x140AA1248 (AlpcpCaptureHandleAttribute32.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpAllocateBlob @ 0x14093F8B0 (AlpcpAllocateBlob.c)
 *     ObCaptureObjectStateForDuplication @ 0x140940090 (ObCaptureObjectStateForDuplication.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttributeInternal(__int64 a1, __int64 a2)
{
  char PreviousMode; // r12
  unsigned int v4; // esi
  ULONG_PTR v5; // rdi
  char *Pool2; // r14
  void *Blob; // rax
  __int64 v8; // r8
  __int64 i; // r9
  _KPROCESS *Process; // r13
  int v11; // ebx
  __int64 j; // r12
  int v13; // ecx
  __int64 v15; // r10
  int v16; // ecx
  char *v17; // [rsp+58h] [rbp-50h]
  char v18; // [rsp+B0h] [rbp+8h]
  __int64 v20; // [rsp+C0h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = PreviousMode;
  if ( (*(_DWORD *)a1 & 0xFFF0FFFF) != 0 )
    return 3221225485LL;
  v4 = 1;
  v5 = 0LL;
  Pool2 = 0LL;
  if ( (*(_DWORD *)a1 & 0x40000) == 0 )
    goto LABEL_3;
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 > 0x200 )
    return 3221227298LL;
  if ( v4 <= 1 )
    return 3221225485LL;
  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  v15 = *(_QWORD *)(a1 + 8);
  if ( KeGetCurrentThread()->PreviousMode && 16LL * v4 && (v15 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    v17 = &Pool2[24 * i];
    v8 = v15 + 16LL * (unsigned int)i;
    v16 = *(_DWORD *)v8;
    *(_DWORD *)v17 = *(_DWORD *)v8;
    *((_QWORD *)v17 + 1) = *(unsigned int *)(v8 + 4);
    *((_DWORD *)v17 + 4) = *(_DWORD *)(v8 + 8);
    *((_DWORD *)v17 + 5) = *(_DWORD *)(v8 + 12);
    if ( (v16 & 0xFFF4FFFF) != 0 )
    {
      v11 = -1073741811;
      goto LABEL_12;
    }
  }
LABEL_3:
  Blob = (void *)AlpcpAllocateBlob(AlpcHandleDataType, 48LL * v4, 0LL);
  v5 = (ULONG_PTR)Blob;
  if ( Blob )
  {
    memset_0(Blob, 0, 48LL * v4);
    *(_DWORD *)(v5 + 4) = v4;
    if ( PreviousMode )
      Process = KeGetCurrentThread()->ApcState.Process;
    else
      Process = PsInitialSystemProcess;
    v11 = 0;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= v4 )
      {
        *(_QWORD *)(a2 + 48) = v5;
        v5 = 0LL;
        goto LABEL_12;
      }
      v20 = 48 * j;
      v11 = ObCaptureObjectStateForDuplication(Process, v18, v5 + 48 * j + 8);
      if ( v11 >= 0 )
      {
        v8 = 48 * j;
        v13 = *(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(*(_QWORD *)(v20 + v5 + 24)
                                                                                                - 24LL) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(*(_QWORD *)(v20 + v5 + 24) - 48) >> 8)]
                        + 68);
        *(_DWORD *)(v20 + v5) = v13;
        if ( (v13 & 0xFFD) == 0 )
          break;
      }
    }
    v11 = -1073741790;
  }
  else
  {
    v11 = -1073741670;
  }
LABEL_12:
  if ( v5 )
    AlpcpDereferenceBlobEx(v5, 1, v8, i);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4863704Cu);
  return (unsigned int)v11;
}
