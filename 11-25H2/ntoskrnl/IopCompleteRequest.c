/*
 * XREFs of IopCompleteRequest @ 0x14029FD20
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopAbortRequest @ 0x140705820 (IopAbortRequest.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x140252C50 (IopDequeueIrpFromThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeInsertQueueEx @ 0x140281900 (KeInsertQueueEx.c)
 *     IopDequeueIrpFromFileObject @ 0x140284230 (IopDequeueIrpFromFileObject.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     IopUpdateIrpTransferCount @ 0x1402A1480 (IopUpdateIrpTransferCount.c)
 *     IopIoRingCompleteIrp @ 0x1402A2964 (IopIoRingCompleteIrp.c)
 *     IopProcessBufferedIoCompletion @ 0x1402A2A40 (IopProcessBufferedIoCompletion.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     IopDecrementCompletionContextUsageCount @ 0x140349B30 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14043E000 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     Feature_Servicing_IOCompletionPortFix__private_IsEnabledDeviceUsageNoInline @ 0x1405925D4 (Feature_Servicing_IOCompletionPortFix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  int v5; // r14d
  __int64 v6; // rdi
  ULONG_PTR v7; // rsi
  int *v8; // r15
  int v9; // eax
  unsigned __int64 v10; // r13
  struct _MDL *v11; // rcx
  struct _MDL *Next; // rbx
  __int64 v13; // rcx
  PVOID v14; // rbx
  _DWORD *v15; // r12
  struct _KEVENT *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  struct _KTHREAD *v22; // r13
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  char v28; // r8
  int v29; // eax
  int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r8
  __int64 v33; // r9
  PVOID Object; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  char v39; // [rsp+D8h] [rbp+20h]

  v5 = 0;
  Object = 0LL;
  v35 = 0LL;
  v6 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v7 = *a4;
  if ( !a3 || (v39 = 1, *a3 != 1LL) )
    v39 = 0;
  v8 = (int *)(v6 + 16);
  v9 = *(_DWORD *)(v6 + 16);
  if ( (v9 & 0x200000) != 0 )
  {
    IopIoRingCompleteIrp((PIRP)v6);
    return;
  }
  if ( (v9 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v6 + 48);
    *(_QWORD *)(v6 + 160) = *a5;
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return;
  }
  if ( (v9 & 0x2000) != 0 )
    v10 = *(_QWORD *)(v6 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v10 = 0LL;
  IopProcessBufferedIoCompletion(v6);
  v11 = *(struct _MDL **)(v6 + 8);
  if ( v11 )
  {
    do
    {
      Next = v11->Next;
      IoFreeMdl(v11);
      v11 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  if ( (unsigned int)Feature_Servicing_IOCompletionPortFix__private_IsEnabledDeviceUsageNoInline(v11)
    && ((*(_DWORD *)(v6 + 48) & 0xC0000000) != 0xC0000000
     || *(_BYTE *)(v6 + 65) && (*v8 & 4) == 0 && v7 && (*(_DWORD *)(v7 + 80) & 2) == 0)
    && v7
    && (v13 = *(_QWORD *)(v7 + 176)) != 0 )
  {
    if ( (*v8 & 0x2000) != 0 )
    {
      v14 = *(PVOID *)v13;
      Object = *(PVOID *)v13;
      v35 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      IopIncrementCompletionContextUsageCountAndReadData(v7);
      v14 = 0LL;
    }
    if ( v14 )
      ObfReferenceObjectWithTag(v14, 0x746C6644u);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (_DWORD *)(v6 + 48);
  if ( (*(_DWORD *)(v6 + 48) & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(v6 + 65) )
  {
    v16 = *(struct _KEVENT **)(v6 + 80);
    if ( v16 && v7 && (*v8 & 4) == 0 )
      ObfDereferenceObjectWithTag(v16, 0x746C6644u);
    goto LABEL_47;
  }
  v17 = *(_QWORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 71) & 0x10) != 0 )
    *(_DWORD *)(v17 + 4) = *(_DWORD *)(v6 + 56);
  else
    *(_QWORD *)(v17 + 8) = *(_QWORD *)(v6 + 56);
  *(_DWORD *)v17 = *v15;
  v16 = *(struct _KEVENT **)(v6 + 80);
  if ( v16 )
  {
    KeSetEvent(v16, 0, 0);
    if ( !v7 )
      goto LABEL_47;
    if ( (*v8 & 4) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(v6 + 80), 0x746C6644u);
    if ( (*(_DWORD *)(v7 + 80) & 2) == 0 || (*v8 & 0x1000) != 0 )
      goto LABEL_47;
    goto LABEL_45;
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
    {
LABEL_46:
      *(_DWORD *)(v7 + 56) = *v15;
      goto LABEL_47;
    }
LABEL_45:
    KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    goto LABEL_46;
  }
LABEL_47:
  if ( (*v15 & 0xC0000000) == 0xC0000000
    && (!*(_BYTE *)(v6 + 65) || (*v8 & 4) != 0 || v7 && (*(_DWORD *)(v7 + 80) & 2) != 0) )
  {
    if ( (*v8 & 0x2000) != 0 )
      IopDequeueIrpFromFileObject(v6, v7);
    if ( v7 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
    if ( (*v8 & 0x8000) != 0 )
    {
      v18 = *(_QWORD *)(v6 + 88);
      do
      {
        v19 = v18;
        v20 = ((v18 >> 1) & 3) - 1;
        v18 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v6 + 88),
                v18 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v20),
                v18);
      }
      while ( v19 != v18 );
      if ( !(_DWORD)v20 )
        IoFreeIrp((PIRP)v6);
    }
    else
    {
      *(_QWORD *)(v6 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v6);
      IoFreeIrp((PIRP)v6);
    }
  }
  else
  {
    if ( !(unsigned int)Feature_Servicing_IOCompletionPortFix__private_IsEnabledDeviceUsageNoInline(v16) )
    {
      if ( v7 )
      {
        v21 = *(_QWORD *)(v7 + 176);
        if ( v21 )
        {
          if ( (*v8 & 0x2000) != 0 )
          {
            v14 = *(PVOID *)v21;
            Object = *(PVOID *)v21;
            v35 = *(_QWORD *)(v21 + 8);
          }
          else
          {
            IopIncrementCompletionContextUsageCountAndReadData(v7);
            v14 = Object;
          }
          if ( v14 )
            ObfReferenceObjectWithTag(v14, 0x746C6644u);
        }
      }
    }
    IopUpdateIrpTransferCount(v6, v10);
    if ( (*v8 & 0x2000) != 0 )
    {
      IopDequeueIrpFromFileObject(v6, v7);
      v22 = CurrentThread;
    }
    else
    {
      v22 = CurrentThread;
      *(_QWORD *)(v6 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v6);
    }
    v23 = *v8;
    v24 = *v8 & 0x8000;
    if ( v24 || (*(_QWORD *)(v6 + 88) &= ~1uLL, (v25 = *(_QWORD *)(v6 + 88)) == 0) )
    {
      if ( !v14 || !*(_QWORD *)(v6 + 96) )
        goto LABEL_92;
      if ( (*(_DWORD *)(v7 + 80) & 0x2000000) == 0
        || *(_BYTE *)(v6 + 65)
        || (v29 = 1, (*(_DWORD *)(v6 + 48) & 0xC0000000) == 0x80000000) )
      {
        v29 = 0;
      }
      if ( !v29 )
      {
        *(_QWORD *)a1 = v35;
        *(_DWORD *)(v6 + 184) = 0;
        v30 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
        if ( v30 == 8 || v30 == 20 )
          v5 = 1;
        KeInsertQueueEx((__int64)v14, (_QWORD *)(v6 + 168), v5);
      }
      else
      {
LABEL_92:
        if ( (v23 & 0x8000) != 0 )
        {
          v31 = *(_QWORD *)(v6 + 88);
          do
          {
            v32 = v31;
            v33 = ((v31 >> 1) & 3) - 1;
            v31 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v6 + 88),
                    v31 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v33),
                    v31);
          }
          while ( v32 != v31 );
          if ( !(_DWORD)v33 )
            IoFreeIrp((PIRP)v6);
          v14 = Object;
        }
        else
        {
          IoFreeIrp((PIRP)v6);
        }
      }
    }
    else
    {
      if ( v39 )
        v26 = *(char *)(v6 + 70);
      else
        v26 = 2;
      v27 = *(_QWORD *)(v6 + 96);
      v28 = *(_BYTE *)(v6 + 64);
      *(_BYTE *)a1 = 18;
      *(_BYTE *)(a1 + 2) = 88;
      if ( v26 == 2 )
        LOBYTE(v26) = v22->ApcStateIndex;
      *(_BYTE *)(a1 + 80) = v26;
      *(_QWORD *)(a1 + 8) = v22;
      *(_QWORD *)(a1 + 32) = IopUserRundown;
      *(_QWORD *)(a1 + 40) = IopUserRundown;
      *(_QWORD *)(a1 + 48) = v25;
      *(_BYTE *)(a1 + 81) = v28;
      *(_QWORD *)(a1 + 56) = v27;
      *(_BYTE *)(a1 + 82) = 0;
      *(_BYTE *)(a1 + 1) = 0;
      KeInsertQueueApc(a1, *(_QWORD *)(v6 + 72), 0LL, 2LL);
    }
    if ( v14 )
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    if ( v7 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  }
}
