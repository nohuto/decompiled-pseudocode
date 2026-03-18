/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1408B2D00 (AlpcpDispatchReplyToWaitingThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     AlpcpLocateView @ 0x1408AC0E0 (AlpcpLocateView.c)
 *     AlpcpDeleteView @ 0x1408AF704 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcpCreateView @ 0x1408B3D94 (AlpcpCreateView.c)
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x1408B4984 (AlpcpRestoreWriteAccess.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // r15d
  ULONG_PTR v6; // rsi
  __int64 View; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  ULONG_PTR v18; // [rsp+20h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+28h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 16);
  AlpcpLockForCachedReferenceBlob(v6);
  View = AlpcpLocateView(v6, a1);
  v18 = View;
  v8 = View;
  v9 = View;
  v10 = View;
  v11 = View;
  if ( View )
  {
    v15 = View;
    v16 = View;
    while ( 1 )
    {
      v20 = v15;
      v9 = View;
      v19 = v16;
      if ( AlpcpReferenceBlob(v8) > 0 )
        break;
      AlpcpUnlockBlob(v6);
      AlpcpLockForCachedReferenceBlob(v6);
      View = AlpcpLocateView(v6, a1);
      v8 = View;
      v9 = View;
      v15 = View;
      v10 = View;
      v16 = View;
      v11 = View;
      if ( !View )
        goto LABEL_29;
    }
    v11 = v19;
    v10 = v20;
LABEL_29:
    v18 = v8;
  }
  if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
  {
    if ( v10 == *(_QWORD *)(v6 + 80) )
    {
LABEL_12:
      *(_QWORD *)(a2 + 144) = v8;
      ++*(_DWORD *)(v8 + 76);
      goto LABEL_13;
    }
    if ( v11 && v8 == *(_QWORD *)(v6 + 72) )
    {
      if ( (*(_DWORD *)(v2 + 72) & 8) == 0 )
      {
        v17 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
        if ( !v17 )
        {
          if ( *(_QWORD *)(v8 + 64) )
          {
            KeStackAttachProcess(*(PRKPROCESS *)(v8 + 32), &ApcState);
            MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
            KiUnstackDetachProcess((__int64)&ApcState, 0LL);
            *(_QWORD *)(v8 + 64) = 0LL;
          }
          *(_DWORD *)(v8 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v8);
          *(_DWORD *)(v6 + 48) &= ~1u;
          *(_QWORD *)(v6 + 72) = 0LL;
          *(_QWORD *)(v6 + 80) = 0LL;
          goto LABEL_12;
        }
        *(_QWORD *)(v2 + 64) = v17;
      }
      *(_DWORD *)(v2 + 72) &= ~1u;
      AlpcpReferenceBlob(v2);
      if ( *(_QWORD *)(v8 + 64) )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(v8 + 32), &ApcState);
        MmUnsecureVirtualMemory(*(HANDLE *)(v8 + 64));
        KiUnstackDetachProcess((__int64)&ApcState, 0LL);
        *(_QWORD *)(v8 + 64) = 0LL;
      }
      *(_DWORD *)(v8 + 72) |= 1u;
      *(_QWORD *)(v6 + 72) = v2;
      *(_QWORD *)(v6 + 80) = v8;
      AlpcpDereferenceBlobEx(v8);
      goto LABEL_12;
    }
    if ( (*(_DWORD *)(v2 + 72) & 8) != 0 )
      goto LABEL_8;
    v12 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
    if ( v12 )
    {
      *(_QWORD *)(v2 + 64) = v12;
LABEL_8:
      *(_DWORD *)(v2 + 72) &= ~1u;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(v6 + 72) = v2;
      *(_QWORD *)(v6 + 80) = 0LL;
      if ( v8 )
      {
        *(_QWORD *)(v6 + 80) = v8;
        goto LABEL_12;
      }
      v5 = AlpcpCreateView(v6);
      if ( v5 >= 0 )
        goto LABEL_10;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2);
      goto LABEL_24;
    }
    *(_DWORD *)(v6 + 48) &= ~1u;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    v14 = AlpcpCreateView(v6);
  }
  else
  {
    if ( v9 )
      goto LABEL_11;
    v14 = AlpcpCreateView(v6);
  }
  v5 = v14;
  if ( v14 >= 0 )
  {
LABEL_10:
    v8 = v18;
LABEL_11:
    *(_DWORD *)(a2 + 40) |= 0x8000u;
    goto LABEL_12;
  }
LABEL_24:
  *(_QWORD *)(a2 + 144) = 0LL;
LABEL_13:
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 72) & 2) != 0 )
  {
    AlpcpDeleteView(v2);
    *(_DWORD *)(v2 + 72) &= ~2u;
  }
  AlpcpUnlockBlob(v6);
  AlpcpDereferenceBlobEx(v2);
  return (unsigned int)v5;
}
