/*
 * XREFs of EtwpRegisterPrivateSession @ 0x1407AD880
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     PidNodeCompare @ 0x1407ADE60 (PidNodeCompare.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  __int64 v4; // r12
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rax
  char *v10; // rdi
  _RTL_BALANCED_NODE *v11; // rdi
  BOOLEAN v12; // si
  int v13; // eax
  int v14; // r9d
  _RTL_BALANCED_NODE *v15; // rax
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *v17; // rbx
  unsigned int inserted; // edi
  _RTL_BALANCED_NODE *i; // rsi
  _RTL_RB_TREE *v20; // r14
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  _WORD *v24; // r15
  _RTL_BALANCED_NODE *v25; // rcx
  _RTL_BALANCED_NODE *v26; // rax
  int CurrentThreadProcessId; // [rsp+58h] [rbp-29h] BYREF
  PVOID Object; // [rsp+60h] [rbp-21h]
  __int64 v29; // [rsp+68h] [rbp-19h] BYREF
  __int64 v30; // [rsp+70h] [rbp-11h] BYREF
  __int128 v31; // [rsp+78h] [rbp-9h] BYREF
  __int128 v32; // [rsp+88h] [rbp+7h]
  __int128 v33; // [rsp+98h] [rbp+17h]

  v4 = a1 + 4352;
  v29 = 0LL;
  v30 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  DWORD2(v33) = 0;
  Object = 0LL;
  v31 = 0LL;
  v6 = KeGetCurrentThread()->PreviousMode == 1;
  v32 = 0LL;
  if ( !v6 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (char *)KeAbPreAcquire(v4 + 16, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 16), v9, v4 + 16);
  if ( v10 )
    v10[10] = 1;
  v11 = *(_RTL_BALANCED_NODE **)v4;
  v12 = 0;
  if ( *(_QWORD *)v4 )
  {
    while ( 1 )
    {
      v13 = PidNodeCompare(&CurrentThreadProcessId, v11);
      if ( v13 <= 0 )
      {
        if ( v13 >= 0 )
        {
          v17 = v11;
LABEL_19:
          for ( i = v17[1].Children[1]; i != (_RTL_BALANCED_NODE *)&v17[1].Right; i = i->Children[0] )
          {
            if ( *(_WORD *)&i->0 == a2 )
            {
              inserted = -1073741811;
LABEL_25:
              v20 = (_RTL_RB_TREE *)a1;
              goto LABEL_26;
            }
            if ( *(_WORD *)&i->0 > a2 )
              break;
          }
          LOBYTE(v14) = 1;
          LODWORD(v31) = 48;
          *((_QWORD *)&v31 + 1) = 0LL;
          DWORD2(v32) = 64;
          *(_QWORD *)&v32 = 0LL;
          v33 = 0LL;
          inserted = ObCreateObjectEx(0, (_DWORD)EtwpSessionDemuxObjectType, (unsigned int)&v31, v14);
          if ( inserted )
            goto LABEL_25;
          v24 = Object;
          v25 = (_RTL_BALANCED_NODE *)Object;
          *((_WORD *)Object + 8) = a2;
          v20 = (_RTL_RB_TREE *)a1;
          WORD2(v25->ParentValue) = ++*(_WORD *)(a1 + 4376);
          v25[1].Children[0] = v17;
          v26 = i->Children[1];
          i->Children[1] = v25;
          v26->Children[0] = v25;
          v25->Children[1] = v26;
          v25->Children[0] = i;
          ObReferenceObjectByPointer(v25, 0, EtwpSessionDemuxObjectType, 0);
          inserted = ObInsertObjectEx(v24, 0, (__int64)&v30, (__int64)&v29);
          if ( !inserted )
          {
            *a3 = v24[10];
            *a4 = v29;
            goto LABEL_28;
          }
LABEL_26:
          if ( v17[1].Children[1] == (_RTL_BALANCED_NODE *)&v17[1].Right )
          {
            RtlRbRemoveNode(v20 + 272, v17);
            ExFreePoolWithTag(v17, 0);
          }
          goto LABEL_28;
        }
        v15 = v11->Children[0];
        if ( !v11->Children[0] )
          break;
      }
      else
      {
        v15 = v11->Children[1];
        if ( !v15 )
        {
          v12 = 1;
          break;
        }
      }
      v11 = v15;
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL, 0x30uLL, 0x48777445u);
  v17 = (_RTL_BALANCED_NODE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = CurrentThreadProcessId;
    *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
    RtlRbInsertNodeEx((PRTL_RB_TREE)v4, v11, v12, (PRTL_BALANCED_NODE)Pool2);
    goto LABEL_19;
  }
  inserted = -1073741801;
LABEL_28:
  _m_prefetchw((const void *)(v4 + 16));
  v21 = *(_QWORD *)(v4 + 16);
  v22 = v21 - 16;
  if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v22 = 0LL;
  if ( (v21 & 2) != 0
    || (v23 = *(_QWORD *)(v4 + 16), v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), v22, v21)) )
  {
    ExfReleasePushLock((_QWORD *)(v4 + 16));
  }
  KeAbPostRelease(v4 + 16);
  KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  return inserted;
}
