/*
 * XREFs of EtwpRegisterPrivateSession @ 0x1407AD42C
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentThreadProcessId @ 0x1404296F0 (PsGetCurrentThreadProcessId.c)
 *     ObReferenceObjectByPointer @ 0x140432520 (ObReferenceObjectByPointer.c)
 *     PidNodeCompare @ 0x1407ADA10 (PidNodeCompare.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  __int64 v4; // r12
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 *v11; // rdi
  bool v12; // si
  int v13; // eax
  int v14; // r9d
  unsigned __int64 *v15; // rax
  unsigned __int64 Pool2; // rax
  unsigned __int64 *v17; // rbx
  unsigned int inserted; // edi
  unsigned __int64 i; // rsi
  __int64 v20; // r14
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  __int64 v23; // rtt
  _WORD *v24; // r15
  _WORD *v25; // rcx
  _QWORD *v26; // rax
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
  v9 = KeAbPreAcquire(v4 + 16, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 16), (__int64)v9, v4 + 16);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = *(unsigned __int64 **)v4;
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
          for ( i = v17[4]; (unsigned __int64 *)i != v17 + 4; i = *(_QWORD *)i )
          {
            if ( *(_WORD *)(i + 16) == a2 )
            {
              inserted = -1073741811;
LABEL_25:
              v20 = a1;
              goto LABEL_26;
            }
            if ( *(_WORD *)(i + 16) > a2 )
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
          v25 = Object;
          *((_WORD *)Object + 8) = a2;
          v20 = a1;
          v25[10] = ++*(_WORD *)(a1 + 4376);
          *((_QWORD *)v25 + 3) = v17;
          v26 = *(_QWORD **)(i + 8);
          *(_QWORD *)(i + 8) = v25;
          *v26 = v25;
          *((_QWORD *)v25 + 1) = v26;
          *(_QWORD *)v25 = i;
          ObReferenceObjectByPointer(v25, 0, EtwpSessionDemuxObjectType, 0);
          inserted = ObInsertObjectEx(v24, 0, (__int64)&v30, (__int64)&v29);
          if ( !inserted )
          {
            *a3 = v24[10];
            *a4 = v29;
            goto LABEL_28;
          }
LABEL_26:
          if ( (unsigned __int64 *)v17[4] == v17 + 4 )
          {
            RtlRbRemoveNode((unsigned __int64 *)(v20 + 4352), v17);
            ExFreePoolWithTag(v17, 0);
          }
          goto LABEL_28;
        }
        v15 = (unsigned __int64 *)*v11;
        if ( !*v11 )
          break;
      }
      else
      {
        v15 = (unsigned __int64 *)v11[1];
        if ( !v15 )
        {
          v12 = 1;
          break;
        }
      }
      v11 = v15;
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v17 = (unsigned __int64 *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = CurrentThreadProcessId;
    *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
    RtlRbInsertNodeEx((__int64 *)v4, (unsigned __int64)v11, v12, Pool2);
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
