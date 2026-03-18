/*
 * XREFs of DbgkSendSystemDllMessages @ 0x140939F18
 * Callers:
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     RtlStringCbCopyW @ 0x140433420 (RtlStringCbCopyW.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsQuerySystemDllInfo @ 0x1408FB0A8 (PsQuerySystemDllInfo.c)
 *     PsWow64GetProcessNtdllType @ 0x140908828 (PsWow64GetProcessNtdllType.c)
 *     DbgkpQueueMessage @ 0x140939080 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x14093A238 (DbgkpSendApiMessage.c)
 */

int __fastcall DbgkSendSystemDllMessages(char *a1, struct _KEVENT *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  _DWORD *v7; // rdi
  int i; // esi
  struct _KTHREAD *v9; // rdx
  unsigned __int64 SListFaultAddress; // rbx
  unsigned __int64 v11; // rax
  struct _KTHREAD *v12; // rcx
  char v14; // [rsp+30h] [rbp-F8h]
  wchar_t *Teb; // [rsp+38h] [rbp-F0h]
  struct _KTHREAD *v16; // [rsp+48h] [rbp-E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v20[48]; // [rsp+B8h] [rbp-70h] BYREF

  memset(v20, 0, sizeof(v20));
  IoStatusBlock = 0LL;
  LODWORD(CurrentThread) = 0;
  memset(&ObjectAttributes, 0, 44);
  if ( a1 )
  {
    Process = (_KPROCESS *)*((_QWORD *)a1 + 68);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
  }
  v7 = a3 + 12;
  for ( i = 0; i < 6; ++i )
  {
    CurrentThread = (struct _KTHREAD *)PsQuerySystemDllInfo(i);
    v9 = CurrentThread;
    v16 = CurrentThread;
    if ( CurrentThread )
    {
      if ( i <= 0
        || (CurrentThread->Header.LockNV & 8) != 0
        && Process[1].ReadyTime
        && (LODWORD(CurrentThread) = PsWow64GetProcessNtdllType((__int64)Process), i == (_DWORD)CurrentThread) )
      {
        *(_OWORD *)v7 = 0LL;
        *((_OWORD *)v7 + 1) = 0LL;
        Teb = 0LL;
        SListFaultAddress = (unsigned __int64)v9->SListFaultAddress;
        *((_QWORD *)v7 + 1) = SListFaultAddress;
        if ( a1 && i )
        {
          v14 = 1;
          KiStackAttachProcess(Process, 0, (__int64)v20);
        }
        else
        {
          v14 = 0;
        }
        v11 = RtlImageNtHeader(SListFaultAddress);
        if ( v11 )
        {
          v7[4] = *(_DWORD *)(v11 + 12);
          v7[5] = *(_DWORD *)(v11 + 16);
        }
        if ( !a1 )
        {
          v12 = KeGetCurrentThread();
          if ( (v12->MiscFlags & 0x400) != 0 || v12->ApcStateIndex == 1 )
            Teb = 0LL;
          else
            Teb = (wchar_t *)v12->Teb;
          if ( Teb )
          {
            RtlStringCbCopyW(Teb + 2356, 0x20AuLL, (NTSTRSAFE_PCWSTR)v16->InitialStack);
            *((_QWORD *)Teb + 5) = Teb + 2356;
            *((_QWORD *)v7 + 3) = Teb + 20;
          }
        }
        if ( v14 )
          KiUnstackDetachProcess((__int64)v20, 0);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16->Header.WaitListHead;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenFile((PHANDLE)v7, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
          *(_QWORD *)v7 = 0LL;
        *a3 = 5242920;
        a3[1] = 8;
        a3[10] = 5;
        if ( a1 )
        {
          LODWORD(CurrentThread) = DbgkpQueueMessage(Process, a1, (__int64)a3, 2, a2);
          if ( (int)CurrentThread < 0 )
          {
            if ( *(_QWORD *)v7 )
              LODWORD(CurrentThread) = ObCloseHandle(*(HANDLE *)v7, 0);
          }
        }
        else
        {
          LODWORD(CurrentThread) = DbgkpSendApiMessage(Process);
          if ( *(_QWORD *)v7 )
            LODWORD(CurrentThread) = ObCloseHandle(*(HANDLE *)v7, 0);
          if ( Teb )
            *((_QWORD *)Teb + 5) = 0LL;
        }
      }
    }
  }
  return (int)CurrentThread;
}
