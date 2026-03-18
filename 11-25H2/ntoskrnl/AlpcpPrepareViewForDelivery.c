/*
 * XREFs of AlpcpPrepareViewForDelivery @ 0x1408AF1C8
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x1408AF320 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureViewAttribute @ 0x1408B01AC (AlpcpCaptureViewAttribute.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall AlpcpPrepareViewForDelivery(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v7; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // ecx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0LL;
  AlpcpLockForCachedReferenceBlob(v3);
  v8 = *(_DWORD *)(v3 + 48);
  if ( (v8 & 1) == 0 )
  {
    if ( !a2 )
      goto LABEL_5;
    if ( *(_DWORD *)(BugCheckParameter2 + 76) )
      goto LABEL_5;
    v11 = *(_DWORD *)(v3 + 52);
    if ( v11 > 2 )
      goto LABEL_5;
    if ( v11 != 1 )
    {
      v12 = *(_QWORD **)(v3 + 56);
      if ( v12 == (_QWORD *)BugCheckParameter2 )
        v12 = (_QWORD *)*v12;
      if ( (*(_DWORD *)(BugCheckParameter2 + 72) & 8) == 0 )
      {
        v13 = MmSecureVirtualMemoryAgainstWrites(
                *(_QWORD *)(BugCheckParameter2 + 32),
                *(_QWORD *)(BugCheckParameter2 + 40),
                *(_QWORD *)(BugCheckParameter2 + 48));
        if ( !v13 )
          goto LABEL_5;
        *(_QWORD *)(BugCheckParameter2 + 64) = v13;
      }
      *(_DWORD *)(BugCheckParameter2 + 72) &= ~1u;
      AlpcpReferenceBlob(BugCheckParameter2);
      *(_DWORD *)(v3 + 48) |= 1u;
      *(_QWORD *)(v3 + 72) = BugCheckParameter2;
      *(_QWORD *)(v3 + 80) = v12;
      goto LABEL_5;
    }
    *(_QWORD *)(v3 + 80) = BugCheckParameter2;
    *(_DWORD *)(v3 + 48) = v8 | 1;
LABEL_5:
    v9 = 0;
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
          KiUnstackDetachProcess((__int64)&ApcState, 0LL);
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
  v9 = -1073741790;
LABEL_6:
  *(_DWORD *)(BugCheckParameter2 + 72) ^= ((unsigned __int8)*(_DWORD *)(BugCheckParameter2 + 72) ^ (unsigned __int8)(2 * a3)) & 2;
  AlpcpUnlockBlob(v3);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7);
  return v9;
}
