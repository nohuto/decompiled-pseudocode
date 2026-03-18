/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x140894200
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x140893A30 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureViewAttribute @ 0x140894028 (AlpcpCaptureViewAttribute.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v7; // rbp
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // ecx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  v9 = *(_DWORD *)(v3 + 48);
  if ( (v9 & 1) == 0 )
  {
    if ( !a2 )
      goto LABEL_5;
    if ( *(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_5;
    v16 = *(_DWORD *)(v3 + 52);
    if ( v16 > 2 )
      goto LABEL_5;
    if ( v16 != 1 )
    {
      v17 = *(_QWORD **)(v3 + 56);
      if ( v17 == (_QWORD *)BugCheckParameter2 )
        v17 = (_QWORD *)*v17;
      if ( (*(_DWORD *)(BugCheckParameter2 + 72) & 8) == 0 )
      {
        v18 = MmSecureVirtualMemoryAgainstWrites(
                *(_QWORD *)(BugCheckParameter2 + 32),
                *(_QWORD *)(BugCheckParameter2 + 40),
                *(_QWORD *)(BugCheckParameter2 + 48));
        if ( !v18 )
          goto LABEL_5;
        *(_QWORD *)(BugCheckParameter2 + 64) = v18;
      }
      *(_DWORD *)(BugCheckParameter2 + 72) &= ~1u;
      AlpcpReferenceBlob(BugCheckParameter2);
      *(_DWORD *)(v3 + 48) |= 1u;
      *(_QWORD *)(v3 + 72) = BugCheckParameter2;
      *(_QWORD *)(v3 + 80) = v17;
      goto LABEL_5;
    }
    *(_QWORD *)(v3 + 80) = BugCheckParameter2;
    *(_DWORD *)(v3 + 48) = v9 | 1;
LABEL_5:
    v10 = 0;
    ++*(_DWORD *)(BugCheckParameter2 + 76);
    goto LABEL_6;
  }
  if ( BugCheckParameter2 == *(_QWORD *)(v3 + 80) )
  {
    if ( !a2 )
    {
      v7 = *(_QWORD *)(v3 + 72);
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 64) )
        {
          KeStackAttachProcess(*(PRKPROCESS *)(v7 + 32), &ApcState);
          MmUnsecureVirtualMemory(*(HANDLE *)(v7 + 64));
          KiUnstackDetachProcess((__int64)&ApcState, 0);
          *(_QWORD *)(v7 + 64) = 0LL;
        }
        *(_DWORD *)(v7 + 72) |= 1u;
        *(_QWORD *)(v3 + 72) = 0LL;
      }
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_DWORD *)(v3 + 48) &= ~1u;
      goto LABEL_5;
    }
    if ( !*(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_5;
  }
  v10 = -1073741790;
LABEL_6:
  v11 = *(unsigned int *)(BugCheckParameter2 + 72);
  v12 = (unsigned int)v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(2 * a3)) & 2;
  *(_DWORD *)(BugCheckParameter2 + 72) = v12;
  AlpcpUnlockBlob(v3, v8, v11, v12);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7, 1, v13, v14);
  return v10;
}
