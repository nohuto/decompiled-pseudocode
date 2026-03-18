/*
 * XREFs of IovpLocalCompletionRoutine @ 0x140BA6B70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     MdlInvariantPostDriverCompletion @ 0x140611A40 (MdlInvariantPostDriverCompletion.c)
 *     ViErrorReport1 @ 0x140612574 (ViErrorReport1.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA3FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140BA6DE4 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest5 @ 0x140BA6E50 (IovpCompleteRequest5.c)
 *     IovpCompleteRequest3 @ 0x140BA6E9C (IovpCompleteRequest3.c)
 *     VfPendingMoreProcessingRequired @ 0x140BA7000 (VfPendingMoreProcessingRequired.c)
 *     VfIoCompletionCheckState @ 0x140BA710C (VfIoCompletionCheckState.c)
 *     ViIoCallbackSnapState @ 0x140BA7EF4 (ViIoCallbackSnapState.c)
 */

__int64 __fastcall IovpLocalCompletionRoutine(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  char v7; // r12
  char v8; // r14
  char v9; // al
  __int64 v10; // rdx
  unsigned int v11; // ebp
  void *v13; // r14
  const void *v14; // r12
  __int64 v15; // rbp
  __int64 v16; // r9
  _QWORD *v17; // r14
  __int64 v18; // rbx
  char v19; // al
  __int64 v20; // r14
  _BYTE *v21; // r13
  char v22; // [rsp+68h] [rbp+10h]
  char v23; // [rsp+70h] [rbp+18h]

  v4 = *a3;
  *(_BYTE *)(v4 + 1) = *((_BYTE *)a3 + 33);
  *(_BYTE *)(v4 + 2) = *((_BYTE *)a3 + 34);
  *(_BYTE *)(v4 + 3) = *((_BYTE *)a3 + 35) | *(_BYTE *)(v4 + 3) & 2;
  *(_QWORD *)(v4 + 8) = a3[5];
  *(_QWORD *)(v4 + 16) = a3[6];
  *(_QWORD *)(v4 + 24) = a3[7];
  *(_QWORD *)(v4 + 32) = a3[8];
  *(_QWORD *)(v4 + 48) = a3[10];
  *(_QWORD *)(v4 + 56) = a3[3];
  *(_QWORD *)(v4 + 64) = a3[1];
  v7 = *(_BYTE *)(a2 + 67);
  v8 = *(_BYTE *)(a2 + 66) + 1;
  v22 = v8;
  v23 = v7;
  IovpCompleteRequest2(a2, a3[2]);
  if ( *(_BYTE *)v4 != 22 )
  {
    v9 = *(_BYTE *)(v4 + 3) & 2;
    *(_WORD *)(v4 + 1) = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_BYTE *)(v4 + 3) = v9 | 0x10;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
  }
  v10 = *(_QWORD *)(v4 + 56);
  if ( v10 )
  {
    IovpCompleteRequest3(a2, v10, a3[2]);
    if ( (MmVerifierData & 0x10) != 0 && ViIoCallbacksInitialized )
      v13 = (void *)ViIoCallbackSnapState();
    else
      v13 = 0LL;
    v14 = *(const void **)(v4 + 56);
    v15 = *(_QWORD *)(v4 + 64);
    if ( (unsigned int)VfPendingMoreProcessingRequired(a1, a2, v4, (_DWORD)v14, v15) )
    {
      v11 = -1073741802;
      v14 = VfPendingMoreProcessingRequired;
    }
    else
    {
      v11 = guard_dispatch_icall_no_overrides(a1, a2, v15, v16);
    }
    if ( v13 )
      VfIoCompletionCheckState(v13, (ULONG_PTR)v14);
    v17 = (_QWORD *)a3[2];
    if ( *v17 )
    {
      v20 = v17[1];
      *(_BYTE *)(v20 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 8));
      if ( v11 != -1073741802 )
      {
        v21 = *(_BYTE **)(a2 + 184);
        if ( *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66)
          && (unsigned __int8)(*v21 - 3) <= 1u
          && *(_QWORD *)(a2 + 8)
          && (MmVerifierData & 0x6000) != 0 )
        {
          MdlInvariantPostDriverCompletion(v20, a2);
        }
        if ( *(_QWORD *)(v20 + 216) && *(int *)(v20 + 56) >= 0 && (v21[3] & 1) == 0 )
        {
          ViErrorReport1(0x228u, v14, (const void *)a2);
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        }
      }
      VfIrpDatabaseEntryReleaseLock((_QWORD *)v20);
    }
    v7 = v23;
    v8 = v22;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v11 = (unsigned int)VfPendingMoreProcessingRequired(a1, a2, v4, 0, *(_QWORD *)(v4 + 64)) != 0 ? 0xC0000016 : 0;
  }
  IovpCompleteRequest5(a3[2]);
  if ( v11 != -1073741802 && v7 != v8 )
  {
    v18 = v4 + 72;
    *a3 = v18;
    a3[1] = *(_QWORD *)(v18 + 64);
    *((_OWORD *)a3 + 2) = *(_OWORD *)v18;
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v18 + 16);
    *((_OWORD *)a3 + 4) = *(_OWORD *)(v18 + 32);
    *((_OWORD *)a3 + 5) = *(_OWORD *)(v18 + 48);
    a3[12] = *(_QWORD *)(v18 + 64);
    v19 = *(_BYTE *)(v18 + 3);
    if ( *(int *)(a2 + 48) >= 0 )
    {
      if ( (v19 & 0x40) != 0 )
        goto LABEL_42;
    }
    else if ( v19 < 0 )
    {
      goto LABEL_42;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v19 & 0x20) == 0 )
    {
      a3[3] = 0LL;
      *(_BYTE *)(v18 + 3) |= 0xE0u;
LABEL_22:
      *(_QWORD *)(v18 + 64) = a3;
      *(_QWORD *)(v18 + 56) = IovpLocalCompletionRoutine;
      return v11;
    }
LABEL_42:
    a3[3] = *(_QWORD *)(v18 + 56);
    goto LABEL_22;
  }
  return v11;
}
