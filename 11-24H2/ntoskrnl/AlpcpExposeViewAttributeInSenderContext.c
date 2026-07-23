/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140899F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     AlpcpRestoreWriteAccess @ 0x140896794 (AlpcpRestoreWriteAccess.c)
 *     MmUnsecureVirtualMemory @ 0x140896BF0 (MmUnsecureVirtualMemory.c)
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpLocateView @ 0x14089C718 (AlpcpLocateView.c)
 *     AlpcpDeleteView @ 0x14089CE2C (AlpcpDeleteView.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408DBBC8 (MmSecureVirtualMemoryAgainstWrites.c)
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
  ULONG_PTR v11; // rcx
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // r8
  ULONG_PTR v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR v22; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 16);
  AlpcpLockForCachedReferenceBlob(v6);
  View = AlpcpLocateView(v6, a1);
  v22 = View;
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
      v23 = v15;
      v9 = View;
      v22 = v16;
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
    v11 = v22;
    v10 = v23;
LABEL_29:
    v22 = v8;
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
            KiUnstackDetachProcess((__int64)&ApcState, 0, v18, v19);
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
        KiUnstackDetachProcess((__int64)&ApcState, 0, v20, v21);
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
      v5 = AlpcpCreateView(v6, a1, &v22);
      if ( v5 >= 0 )
        goto LABEL_10;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2);
      goto LABEL_24;
    }
    *(_DWORD *)(v6 + 48) &= ~1u;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    v14 = AlpcpCreateView(v6, a1, &v22);
  }
  else
  {
    if ( v9 )
      goto LABEL_11;
    v14 = AlpcpCreateView(v6, a1, &v22);
  }
  v5 = v14;
  if ( v14 >= 0 )
  {
LABEL_10:
    v8 = v22;
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
