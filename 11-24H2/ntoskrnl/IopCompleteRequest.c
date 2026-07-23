/*
 * XREFs of IopCompleteRequest @ 0x1402D51F0
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     IopAbortRequest @ 0x14070F4B0 (IopAbortRequest.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x140230564 (IopDecrementCompletionContextUsageCount.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IopDequeueIrpFromFileObject @ 0x1402C2DC0 (IopDequeueIrpFromFileObject.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeInsertQueueEx @ 0x1403AC260 (KeInsertQueueEx.c)
 *     IopUpdateIrpTransferCount @ 0x1403B3140 (IopUpdateIrpTransferCount.c)
 *     IopIoRingCompleteIrp @ 0x1403B4960 (IopIoRingCompleteIrp.c)
 *     IopProcessBufferedIoCompletion @ 0x1403B4A40 (IopProcessBufferedIoCompletion.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x140433F90 (IopIncrementCompletionContextUsageCountAndReadData.c)
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
  struct _MDL *v12; // rcx
  struct _MDL *Next; // rbx
  _DWORD *v14; // r12
  __int64 v15; // rcx
  PVOID v16; // rbx
  void *v17; // rcx
  __int64 v18; // rcx
  struct _KEVENT *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *v23; // r13
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  char v29; // r8
  int v30; // eax
  int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // r9
  PVOID Object; // [rsp+28h] [rbp-A0h]
  struct _KTHREAD *v36; // [rsp+40h] [rbp-88h]
  __int64 v37; // [rsp+48h] [rbp-80h]
  char v40; // [rsp+E0h] [rbp+18h]

  v5 = 0;
  Object = 0LL;
  v37 = 0LL;
  v6 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v36 = CurrentThread;
  v8 = *a4;
  if ( !a3 || (v40 = 1, *a3 != 1LL) )
    v40 = 0;
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
  v12 = *(struct _MDL **)(v6 + 8);
  if ( v12 )
  {
    do
    {
      Next = v12->Next;
      IoFreeMdl(v12);
      v12 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  v14 = (_DWORD *)(v6 + 48);
  if ( ((*(_DWORD *)(v6 + 48) & 0xC0000000) != 0xC0000000
     || *(_BYTE *)(v6 + 65) && (*v9 & 4) == 0 && v8 && (*(_DWORD *)(v8 + 80) & 2) == 0)
    && v8
    && (v15 = *(_QWORD *)(v8 + 176)) != 0 )
  {
    if ( (*v9 & 0x2000) != 0 )
    {
      v16 = *(PVOID *)v15;
      Object = *(PVOID *)v15;
      v37 = *(_QWORD *)(v15 + 8);
    }
    else
    {
      IopIncrementCompletionContextUsageCountAndReadData(v8);
      v16 = 0LL;
    }
    if ( v16 )
      ObfReferenceObjectWithTag(v16, 0x746C6644u);
  }
  else
  {
    v16 = 0LL;
  }
  if ( (*v14 & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(v6 + 65) )
  {
    v17 = *(void **)(v6 + 80);
    if ( v17 && v8 && (*v9 & 4) == 0 )
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
    goto LABEL_46;
  }
  v18 = *(_QWORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 71) & 0x10) != 0 )
    *(_DWORD *)(v18 + 4) = *(_DWORD *)(v6 + 56);
  else
    *(_QWORD *)(v18 + 8) = *(_QWORD *)(v6 + 56);
  *(_DWORD *)v18 = *v14;
  v19 = *(struct _KEVENT **)(v6 + 80);
  if ( v19 )
  {
    KeSetEvent(v19, 0, 0);
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
      *(_DWORD *)(v8 + 56) = *v14;
      goto LABEL_46;
    }
LABEL_44:
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    goto LABEL_45;
  }
LABEL_46:
  if ( (*v14 & 0xC0000000) == 0xC0000000
    && (!*(_BYTE *)(v6 + 65) || (*v9 & 4) != 0 || v8 && (*(_DWORD *)(v8 + 80) & 2) != 0) )
  {
    if ( (*v9 & 0x2000) != 0 )
      IopDequeueIrpFromFileObject(v6, v8);
    if ( v8 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v8, 0x746C6644u);
    if ( (*v9 & 0x8000) != 0 )
    {
      v20 = *(_QWORD *)(v6 + 88);
      do
      {
        v21 = v20;
        v22 = ((v20 >> 1) & 3) - 1;
        v20 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v6 + 88),
                v20 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v22),
                v20);
      }
      while ( v21 != v20 );
      if ( !(_DWORD)v22 )
        IoFreeIrp((PIRP)v6);
    }
    else
    {
      *(_QWORD *)(v6 + 152) = v36;
      IopDequeueIrpFromThread((_QWORD *)v6);
      IoFreeIrp((PIRP)v6);
    }
  }
  else
  {
    IopUpdateIrpTransferCount(v6, v11);
    if ( (*v9 & 0x2000) != 0 )
    {
      IopDequeueIrpFromFileObject(v6, v8);
      v23 = v36;
    }
    else
    {
      v23 = v36;
      *(_QWORD *)(v6 + 152) = v36;
      IopDequeueIrpFromThread((_QWORD *)v6);
    }
    v24 = *v9;
    v25 = *v9 & 0x8000;
    if ( v25 || (*(_QWORD *)(v6 + 88) &= ~1uLL, (v26 = *(_QWORD *)(v6 + 88)) == 0) )
    {
      if ( !v16 || !*(_QWORD *)(v6 + 96) )
        goto LABEL_83;
      if ( (*(_DWORD *)(v8 + 80) & 0x2000000) == 0
        || *(_BYTE *)(v6 + 65)
        || (v30 = 1, (*(_DWORD *)(v6 + 48) & 0xC0000000) == 0x80000000) )
      {
        v30 = 0;
      }
      if ( !v30 )
      {
        *(_QWORD *)a1 = v37;
        *(_DWORD *)(v6 + 184) = 0;
        v31 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
        if ( v31 == 8 || v31 == 20 )
          v5 = 1;
        KeInsertQueueEx(v16, v6 + 168, v5);
      }
      else
      {
LABEL_83:
        if ( (v24 & 0x8000) != 0 )
        {
          v32 = *(_QWORD *)(v6 + 88);
          do
          {
            v33 = v32;
            v34 = ((v32 >> 1) & 3) - 1;
            v32 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v6 + 88),
                    v32 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v34),
                    v32);
          }
          while ( v33 != v32 );
          if ( !(_DWORD)v34 )
            IoFreeIrp((PIRP)v6);
          v16 = Object;
        }
        else
        {
          IoFreeIrp((PIRP)v6);
        }
      }
    }
    else
    {
      if ( v40 )
        v27 = *(char *)(v6 + 70);
      else
        v27 = 2;
      v28 = *(_QWORD *)(v6 + 96);
      v29 = *(_BYTE *)(v6 + 64);
      *(_BYTE *)a1 = 18;
      *(_BYTE *)(a1 + 2) = 88;
      if ( v27 == 2 )
        LOBYTE(v27) = v23->ApcStateIndex;
      *(_BYTE *)(a1 + 80) = v27;
      *(_QWORD *)(a1 + 8) = v23;
      *(_QWORD *)(a1 + 32) = IopUserRundown;
      *(_QWORD *)(a1 + 40) = IopUserRundown;
      *(_QWORD *)(a1 + 48) = v26;
      *(_BYTE *)(a1 + 81) = v29;
      *(_QWORD *)(a1 + 56) = v28;
      *(_BYTE *)(a1 + 82) = 0;
      *(_BYTE *)(a1 + 1) = 0;
      KeInsertQueueApc(a1, *(_QWORD *)(v6 + 72), 0LL, 2LL);
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(v16, 0x746C6644u);
    if ( v8 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v8, 0x746C6644u);
  }
}
