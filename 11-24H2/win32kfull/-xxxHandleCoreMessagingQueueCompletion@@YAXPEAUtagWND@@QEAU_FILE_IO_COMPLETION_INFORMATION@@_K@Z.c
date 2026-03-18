/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x140066188
 * Callers:
 *     _DrainThreadCoreMessagingCompletions2 @ 0x1400600A4 (_DrainThreadCoreMessagingCompletions2.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x140064D40 (xxxMsgWaitForMultipleObjectsEx.c)
 *     NtUserGetQueueStatus @ 0x140065820 (NtUserGetQueueStatus.c)
 *     _GetQueueStatus @ 0x140065B90 (_GetQueueStatus.c)
 *     xxxRemoveQueueCompletion @ 0x140065F00 (xxxRemoveQueueCompletion.c)
 *     xxxDrainQueueCompletions @ 0x140066030 (xxxDrainQueueCompletions.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 */

void __fastcall xxxHandleCoreMessagingQueueCompletion(
        struct tagWND *a1,
        struct _FILE_IO_COMPLETION_INFORMATION *const a2,
        PVOID a3)
{
  __int64 v5; // rbx
  PVOID ApcContext; // rdx
  __int64 *v7; // r14
  ULONG64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  _QWORD *KeyContext; // rdi
  _QWORD *v13; // rcx
  ULONG_PTR v14[2]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0LL;
  ApcContext = a2->ApcContext;
  v7 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8 * (_QWORD)ApcContext + 8);
  v8 = MmUserProbeAddress;
  v9 = v7;
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v10 = *v9;
  if ( (((unsigned int)a3 & 0x80000000) != 0 || a3 != ApcContext) && !v10 && !(unsigned int)PostMessage(a1, 96LL, 1LL) )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v14, (__int64)a1);
    xxxSendMessage(a1, 0x60u);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v14, v11);
  }
  KeyContext = a2->KeyContext;
  if ( !PsGetCurrentProcessWow64Process(v8, ApcContext, a3) )
    v5 = 3LL;
  if ( (v5 & (__int64)a2->KeyContext) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = KeyContext;
  if ( (unsigned __int64)KeyContext >= MmUserProbeAddress )
    v13 = (_QWORD *)MmUserProbeAddress;
  *v13 = v10;
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  *v7 = (__int64)KeyContext;
}
