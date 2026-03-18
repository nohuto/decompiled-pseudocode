/*
 * XREFs of AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140890950 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpLocateView @ 0x1408930E8 (AlpcpLocateView.c)
 *     AlpcpDeleteView @ 0x14089310C (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x1408E48E8 (AlpcpRestoreWriteAccess.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall AlpcpExposeViewAttributeInSenderContext(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v5; // r15d
  ULONG_PTR v6; // rsi
  __int64 View; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG_PTR v27; // [rsp+20h] [rbp-50h]
  __int64 v28; // [rsp+20h] [rbp-50h]
  __int64 v29; // [rsp+28h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 144);
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 16);
  AlpcpLockForCachedReferenceBlob(v6);
  View = AlpcpLocateView(v6, a1);
  v27 = View;
  v10 = View;
  v11 = View;
  v12 = View;
  v13 = View;
  if ( View )
  {
    v8 = View;
    v9 = View;
    while ( 1 )
    {
      v29 = v8;
      v11 = View;
      v28 = v9;
      if ( AlpcpReferenceBlob(v10) > 0 )
        break;
      AlpcpUnlockBlob(v6, v21, v8, v9);
      AlpcpLockForCachedReferenceBlob(v6);
      View = AlpcpLocateView(v6, a1);
      v10 = View;
      v11 = View;
      v8 = View;
      v12 = View;
      v9 = View;
      v13 = View;
      if ( !View )
        goto LABEL_29;
    }
    v13 = v28;
    v12 = v29;
LABEL_29:
    v27 = v10;
  }
  if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
  {
    if ( v12 == *(_QWORD *)(v6 + 80) )
    {
LABEL_12:
      *(_QWORD *)(a2 + 144) = v10;
      ++*(_DWORD *)(v10 + 76);
      goto LABEL_13;
    }
    if ( v13 && v10 == *(_QWORD *)(v6 + 72) )
    {
      if ( (*(_DWORD *)(v2 + 72) & 8) == 0 )
      {
        v22 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
        if ( !v22 )
        {
          if ( *(_QWORD *)(v10 + 64) )
          {
            KeStackAttachProcess(*(PRKPROCESS *)(v10 + 32), &ApcState);
            MmUnsecureVirtualMemory(*(HANDLE *)(v10 + 64));
            KiUnstackDetachProcess((__int64)&ApcState, 0);
            *(_QWORD *)(v10 + 64) = 0LL;
          }
          *(_DWORD *)(v10 + 72) |= 1u;
          AlpcpDereferenceBlobEx(v10, 1, v23, v24);
          *(_DWORD *)(v6 + 48) &= ~1u;
          *(_QWORD *)(v6 + 72) = 0LL;
          *(_QWORD *)(v6 + 80) = 0LL;
          goto LABEL_12;
        }
        *(_QWORD *)(v2 + 64) = v22;
      }
      *(_DWORD *)(v2 + 72) &= ~1u;
      AlpcpReferenceBlob(v2);
      if ( *(_QWORD *)(v10 + 64) )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(v10 + 32), &ApcState);
        MmUnsecureVirtualMemory(*(HANDLE *)(v10 + 64));
        KiUnstackDetachProcess((__int64)&ApcState, 0);
        *(_QWORD *)(v10 + 64) = 0LL;
      }
      *(_DWORD *)(v10 + 72) |= 1u;
      *(_QWORD *)(v6 + 72) = v2;
      *(_QWORD *)(v6 + 80) = v10;
      AlpcpDereferenceBlobEx(v10, 1, v25, v26);
      goto LABEL_12;
    }
    if ( (*(_DWORD *)(v2 + 72) & 8) != 0 )
      goto LABEL_8;
    v14 = MmSecureVirtualMemoryAgainstWrites(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), *(_QWORD *)(v2 + 48));
    if ( v14 )
    {
      *(_QWORD *)(v2 + 64) = v14;
LABEL_8:
      *(_DWORD *)(v2 + 72) &= ~1u;
      AlpcpReferenceBlob(v2);
      *(_QWORD *)(v6 + 72) = v2;
      *(_QWORD *)(v6 + 80) = 0LL;
      if ( v10 )
      {
        *(_QWORD *)(v6 + 80) = v10;
        goto LABEL_12;
      }
      v5 = AlpcpCreateView(v6);
      if ( v5 >= 0 )
        goto LABEL_10;
      AlpcpRestoreWriteAccess(v2);
      AlpcpDereferenceBlobEx(v2, 1, v19, v20);
      goto LABEL_24;
    }
    *(_DWORD *)(v6 + 48) &= ~1u;
    *(_QWORD *)(v6 + 72) = 0LL;
    *(_QWORD *)(v6 + 80) = 0LL;
    v18 = AlpcpCreateView(v6);
  }
  else
  {
    if ( v11 )
      goto LABEL_11;
    v18 = AlpcpCreateView(v6);
  }
  v5 = v18;
  if ( v18 >= 0 )
  {
LABEL_10:
    v10 = v27;
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
  AlpcpUnlockBlob(v6, v12, v8, v9);
  AlpcpDereferenceBlobEx(v2, 1, v15, v16);
  return (unsigned int)v5;
}
