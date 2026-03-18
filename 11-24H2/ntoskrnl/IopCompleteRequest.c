/*
 * XREFs of IopCompleteRequest @ 0x1402A5AC0
 * Callers:
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     IopAbortRequest @ 0x140711920 (IopAbortRequest.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 * Callees:
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x14027AFD4 (IopDecrementCompletionContextUsageCount.c)
 *     IopDequeueIrpFromFileObject @ 0x14031A230 (IopDequeueIrpFromFileObject.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KeInsertQueueEx @ 0x1403BD5D0 (KeInsertQueueEx.c)
 *     IopUpdateIrpTransferCount @ 0x1403C4580 (IopUpdateIrpTransferCount.c)
 *     IopIoRingCompleteIrp @ 0x1403C5DA0 (IopIoRingCompleteIrp.c)
 *     IopProcessBufferedIoCompletion @ 0x1403C5E80 (IopProcessBufferedIoCompletion.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14043E370 (IopIncrementCompletionContextUsageCountAndReadData.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v8; // rsi
  int *v9; // r15
  int v10; // eax
  unsigned __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _MDL *v14; // rcx
  struct _MDL *Next; // rbx
  _DWORD *v16; // r12
  __int64 v17; // rcx
  PVOID v18; // rbx
  void *v19; // rcx
  __int64 v20; // rcx
  struct _KEVENT *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _KTHREAD *v27; // r13
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  char v33; // r8
  int v34; // eax
  int v35; // ecx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // r9
  PVOID Object; // [rsp+28h] [rbp-A0h]
  struct _KTHREAD *v40; // [rsp+40h] [rbp-88h]
  __int64 v41; // [rsp+48h] [rbp-80h]
  char v44; // [rsp+E0h] [rbp+18h]

  v5 = 0;
  Object = 0LL;
  v41 = 0LL;
  v6 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v40 = CurrentThread;
  v8 = *a4;
  if ( !a3 || (v44 = 1, *a3 != 1LL) )
    v44 = 0;
  v9 = (int *)(v6 + 16);
  v10 = *(_DWORD *)(v6 + 16);
  if ( (v10 & 0x200000) != 0 )
  {
    *(_QWORD *)(v6 + 152) = CurrentThread;
    IopIoRingCompleteIrp((PIRP)v6);
    return;
  }
  if ( (v10 & 0x80u) != 0 )
  {
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(v6 + 48);
    *(_QWORD *)(v6 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    return;
  }
  if ( (v10 & 0x2000) != 0 )
    v11 = *(_QWORD *)(v6 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v11 = 0LL;
  IopProcessBufferedIoCompletion(v6);
  v14 = *(struct _MDL **)(v6 + 8);
  if ( v14 )
  {
    do
    {
      Next = v14->Next;
      IoFreeMdl(v14);
      v14 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  v16 = (_DWORD *)(v6 + 48);
  if ( ((*(_DWORD *)(v6 + 48) & 0xC0000000) != 0xC0000000
     || *(_BYTE *)(v6 + 65) && (*v9 & 4) == 0 && v8 && (*(_DWORD *)(v8 + 80) & 2) == 0)
    && v8
    && (v17 = *(_QWORD *)(v8 + 176)) != 0 )
  {
    if ( (*v9 & 0x2000) != 0 )
    {
      v18 = *(PVOID *)v17;
      Object = *(PVOID *)v17;
      v41 = *(_QWORD *)(v17 + 8);
    }
    else
    {
      IopIncrementCompletionContextUsageCountAndReadData(v8);
      v18 = 0LL;
    }
    if ( v18 )
      ObfReferenceObjectWithTag(v18, 0x746C6644u);
  }
  else
  {
    v18 = 0LL;
  }
  if ( (*v16 & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(v6 + 65) )
  {
    v19 = *(void **)(v6 + 80);
    if ( v19 && v8 && (*v9 & 4) == 0 )
      ObfDereferenceObjectWithTag(v19, 0x746C6644u);
    goto LABEL_46;
  }
  v20 = *(_QWORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 71) & 0x10) != 0 )
    *(_DWORD *)(v20 + 4) = *(_DWORD *)(v6 + 56);
  else
    *(_QWORD *)(v20 + 8) = *(_QWORD *)(v6 + 56);
  *(_DWORD *)v20 = *v16;
  v21 = *(struct _KEVENT **)(v6 + 80);
  if ( v21 )
  {
    KeSetEvent(v21, 0, 0);
    if ( !v8 )
      goto LABEL_46;
    if ( (*v9 & 4) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(v6 + 80), 0x746C6644u);
    if ( (*(_DWORD *)(v8 + 80) & 2) == 0 || (*v9 & 0x1000) != 0 )
      goto LABEL_46;
    goto LABEL_44;
  }
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 80) & 0x4000000) != 0 )
    {
LABEL_45:
      *(_DWORD *)(v8 + 56) = *v16;
      goto LABEL_46;
    }
LABEL_44:
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    goto LABEL_45;
  }
LABEL_46:
  if ( (*v16 & 0xC0000000) == 0xC0000000
    && (!*(_BYTE *)(v6 + 65) || (*v9 & 4) != 0 || v8 && (*(_DWORD *)(v8 + 80) & 2) != 0) )
  {
    if ( (*v9 & 0x2000) != 0 )
      IopDequeueIrpFromFileObject(v6, v8);
    if ( v8 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v8, 0x746C6644u);
    if ( (*v9 & 0x8000) != 0 )
    {
      v22 = *(_QWORD *)(v6 + 88);
      do
      {
        v23 = v22;
        v24 = ((v22 >> 1) & 3) - 1;
        v22 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v6 + 88),
                v22 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v24),
                v22);
      }
      while ( v23 != v22 );
      if ( !(_DWORD)v24 )
        IoFreeIrp((PIRP)v6);
    }
    else
    {
      *(_QWORD *)(v6 + 152) = v40;
      IopDequeueIrpFromThread((_QWORD *)v6, v12, v13);
      IoFreeIrp((PIRP)v6);
    }
  }
  else
  {
    IopUpdateIrpTransferCount(v6, v11);
    if ( (*v9 & 0x2000) != 0 )
    {
      IopDequeueIrpFromFileObject(v6, v8);
      v27 = v40;
    }
    else
    {
      v27 = v40;
      *(_QWORD *)(v6 + 152) = v40;
      IopDequeueIrpFromThread((_QWORD *)v6, v25, v26);
    }
    v28 = *v9;
    v29 = *v9 & 0x8000;
    if ( v29 || (*(_QWORD *)(v6 + 88) &= ~1uLL, (v30 = *(_QWORD *)(v6 + 88)) == 0) )
    {
      if ( !v18 || !*(_QWORD *)(v6 + 96) )
        goto LABEL_83;
      if ( (*(_DWORD *)(v8 + 80) & 0x2000000) == 0
        || *(_BYTE *)(v6 + 65)
        || (v34 = 1, (*(_DWORD *)(v6 + 48) & 0xC0000000) == 0x80000000) )
      {
        v34 = 0;
      }
      if ( !v34 )
      {
        *(_QWORD *)a1 = v41;
        *(_DWORD *)(v6 + 184) = 0;
        v35 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
        if ( v35 == 8 || v35 == 20 )
          v5 = 1;
        KeInsertQueueEx(v18, v6 + 168, v5);
      }
      else
      {
LABEL_83:
        if ( (v28 & 0x8000) != 0 )
        {
          v36 = *(_QWORD *)(v6 + 88);
          do
          {
            v37 = v36;
            v38 = ((v36 >> 1) & 3) - 1;
            v36 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v6 + 88),
                    v36 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v38),
                    v36);
          }
          while ( v37 != v36 );
          if ( !(_DWORD)v38 )
            IoFreeIrp((PIRP)v6);
          v18 = Object;
        }
        else
        {
          IoFreeIrp((PIRP)v6);
        }
      }
    }
    else
    {
      if ( v44 )
        v31 = *(char *)(v6 + 70);
      else
        v31 = 2;
      v32 = *(_QWORD *)(v6 + 96);
      v33 = *(_BYTE *)(v6 + 64);
      *(_BYTE *)a1 = 18;
      *(_BYTE *)(a1 + 2) = 88;
      if ( v31 == 2 )
        LOBYTE(v31) = v27->ApcStateIndex;
      *(_BYTE *)(a1 + 80) = v31;
      *(_QWORD *)(a1 + 8) = v27;
      *(_QWORD *)(a1 + 32) = IopUserRundown;
      *(_QWORD *)(a1 + 40) = IopUserRundown;
      *(_QWORD *)(a1 + 48) = v30;
      *(_BYTE *)(a1 + 81) = v33;
      *(_QWORD *)(a1 + 56) = v32;
      *(_BYTE *)(a1 + 82) = 0;
      *(_BYTE *)(a1 + 1) = 0;
      KeInsertQueueApc(a1, *(_QWORD *)(v6 + 72), 0LL, 2LL);
    }
    if ( v18 )
      ObfDereferenceObjectWithTag(v18, 0x746C6644u);
    if ( v8 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v8, 0x746C6644u);
  }
}
