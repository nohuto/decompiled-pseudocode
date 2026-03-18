/*
 * XREFs of _UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator() @ 0x140100C8C
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x140100E24 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x140101CD8 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x140196DF8 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x14026992C (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion_::_2_::_lambda_1_::operator()(union _SLIST_HEADER ***a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  union _SLIST_HEADER *v5; // rbx
  union _SLIST_HEADER **v6; // r14
  union _SLIST_HEADER **v7; // rbp
  union _SLIST_HEADER **v8; // r15
  union _SLIST_HEADER *v9; // rdi
  PSLIST_ENTRY v10; // rax
  PSLIST_ENTRY v11; // rsi
  union _SLIST_HEADER *v12; // rax
  union _SLIST_HEADER *v13; // rdi
  union _SLIST_HEADER *v14; // rcx
  void *v16; // rax
  signed __int32 v17[18]; // [rsp+0h] [rbp-48h] BYREF
  PSLIST_ENTRY v18; // [rsp+50h] [rbp+8h] BYREF
  union _SLIST_HEADER *v19; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))((*a1[1])->Alignment + 16))(*a1[1])
    || *(struct _KTHREAD **)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 24200LL) == KeGetCurrentThread() )
  {
    v6 = *a1;
    v7 = a1[1];
    v8 = a1[2];
    v9 = (*a1)[1];
    v10 = ExpInterlockedPopEntrySList(v9 + 1);
    v11 = v10;
    if ( v10 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v9);
    }
    else
    {
      v10 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      v11 = v10;
      if ( !v10 )
      {
        v18 = 0LL;
        goto LABEL_11;
      }
    }
    v18 = v10;
    v12 = (union _SLIST_HEADER *)EngAllocMem(0, 0x40u, 0x676D6466u);
    v13 = v12;
    if ( !v12 )
    {
      CEventPool::CEventPoolEntry::Destroy(v11);
      goto LABEL_7;
    }
    v19 = v12;
    *((_DWORD *)&v12[1].HeaderX64 + 2) = 8;
    v12[2].Region = (ULONGLONG)v11;
    *((_DWORD *)&v12[1].HeaderX64 + 3) = 8;
    v12[1].Alignment = (ULONGLONG)&v12[3].Region;
    v12[3].Region = (ULONGLONG)*v7;
    *((_DWORD *)&v12->HeaderX64 + 2) = 0;
    v14 = *v6;
    if ( !LOBYTE((*v6)->Alignment) )
    {
      *((_DWORD *)&v12->HeaderX64 + 2) = 1;
      ExpInterlockedPushEntrySList(v14 + 1, (PSLIST_ENTRY)v12);
      _InterlockedOr(v17, 0);
      v5 = v13;
LABEL_7:
      *v8 = v5;
      return v5 == 0LL ? 0xC0000001 : 0;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v19);
LABEL_11:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v18);
    goto LABEL_7;
  }
  v16 = (void *)(*(__int64 (__fastcall **)(_QWORD))((*a1[1])->Alignment + 8))(*a1[1]);
  if ( v16 )
    GrepQueueApc((void (*)(void *, void *, void *))UmfdHostLifeTimeManager::TryResurrectPffApcRoutine, v16, 0LL);
  return 3221225473LL;
}
