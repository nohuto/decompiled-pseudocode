/*
 * XREFs of IovpLocalCompletionRoutine @ 0x140BA8B70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MdlInvariantPostDriverCompletion @ 0x140610000 (MdlInvariantPostDriverCompletion.c)
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140BA8DE4 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest5 @ 0x140BA8E50 (IovpCompleteRequest5.c)
 *     IovpCompleteRequest3 @ 0x140BA8E9C (IovpCompleteRequest3.c)
 *     VfPendingMoreProcessingRequired @ 0x140BA9000 (VfPendingMoreProcessingRequired.c)
 *     VfIoCompletionCheckState @ 0x140BA910C (VfIoCompletionCheckState.c)
 *     ViIoCallbackSnapState @ 0x140BA9EF4 (ViIoCallbackSnapState.c)
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
  _QWORD *v15; // r14
  __int64 v16; // rbx
  char v17; // al
  __int64 v18; // r14
  _BYTE *v19; // r13
  char v20; // [rsp+68h] [rbp+10h]
  char v21; // [rsp+70h] [rbp+18h]

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
  v20 = v8;
  v21 = v7;
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
    if ( (unsigned int)VfPendingMoreProcessingRequired(a1, a2, v4, (_DWORD)v14, *(_QWORD *)(v4 + 64)) )
    {
      v11 = -1073741802;
      v14 = VfPendingMoreProcessingRequired;
    }
    else
    {
      v11 = guard_dispatch_icall_no_overrides(a1, a2);
    }
    if ( v13 )
      VfIoCompletionCheckState(v13, (ULONG_PTR)v14);
    v15 = (_QWORD *)a3[2];
    if ( *v15 )
    {
      v18 = v15[1];
      *(_BYTE *)(v18 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 8));
      if ( v11 != -1073741802 )
      {
        v19 = *(_BYTE **)(a2 + 184);
        if ( *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66)
          && (unsigned __int8)(*v19 - 3) <= 1u
          && *(_QWORD *)(a2 + 8)
          && (MmVerifierData & 0x6000) != 0 )
        {
          MdlInvariantPostDriverCompletion(v18, a2);
        }
        if ( *(_QWORD *)(v18 + 216) && *(int *)(v18 + 56) >= 0 && (v19[3] & 1) == 0 )
        {
          ViErrorReport1(0x228u, v14, (const void *)a2);
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        }
      }
      VfIrpDatabaseEntryReleaseLock((_QWORD *)v18);
    }
    v7 = v21;
    v8 = v20;
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
    v16 = v4 + 72;
    *a3 = v16;
    a3[1] = *(_QWORD *)(v16 + 64);
    *((_OWORD *)a3 + 2) = *(_OWORD *)v16;
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v16 + 16);
    *((_OWORD *)a3 + 4) = *(_OWORD *)(v16 + 32);
    *((_OWORD *)a3 + 5) = *(_OWORD *)(v16 + 48);
    a3[12] = *(_QWORD *)(v16 + 64);
    v17 = *(_BYTE *)(v16 + 3);
    if ( *(int *)(a2 + 48) >= 0 )
    {
      if ( (v17 & 0x40) != 0 )
        goto LABEL_42;
    }
    else if ( v17 < 0 )
    {
      goto LABEL_42;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v17 & 0x20) == 0 )
    {
      a3[3] = 0LL;
      *(_BYTE *)(v16 + 3) |= 0xE0u;
LABEL_22:
      *(_QWORD *)(v16 + 64) = a3;
      *(_QWORD *)(v16 + 56) = IovpLocalCompletionRoutine;
      return v11;
    }
LABEL_42:
    a3[3] = *(_QWORD *)(v16 + 56);
    goto LABEL_22;
  }
  return v11;
}
