/*
 * XREFs of DbgkSendSystemDllMessages @ 0x1408F541C
 * Callers:
 *     DbgkpPostFakeThreadMessages @ 0x1408F50E4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsWow64GetProcessNtdllType @ 0x1408DFF44 (PsWow64GetProcessNtdllType.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     PsQuerySystemDllInfo @ 0x14091D988 (PsQuerySystemDllInfo.c)
 *     DbgkpSendApiMessage @ 0x140A5A2C0 (DbgkpSendApiMessage.c)
 */

int __fastcall DbgkSendSystemDllMessages(char *a1, struct _KEVENT *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  _DWORD *v7; // rdi
  int i; // esi
  struct _KTHREAD *v9; // rdx
  void *SListFaultAddress; // rbx
  PIMAGE_NT_HEADERS v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rcx
  char v16; // [rsp+30h] [rbp-F8h]
  wchar_t *Teb; // [rsp+38h] [rbp-F0h]
  struct _KTHREAD *v18; // [rsp+48h] [rbp-E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v22[48]; // [rsp+B8h] [rbp-70h] BYREF

  memset(v22, 0, sizeof(v22));
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
    CurrentThread = (struct _KTHREAD *)PsQuerySystemDllInfo((unsigned int)i);
    v9 = CurrentThread;
    v18 = CurrentThread;
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
        SListFaultAddress = v9->SListFaultAddress;
        *((_QWORD *)v7 + 1) = SListFaultAddress;
        if ( a1 && i )
        {
          v16 = 1;
          KiStackAttachProcess(Process, 0, (__int64)v22);
        }
        else
        {
          v16 = 0;
        }
        v11 = RtlImageNtHeader(SListFaultAddress);
        if ( v11 )
        {
          v7[4] = v11->FileHeader.PointerToSymbolTable;
          v7[5] = v11->FileHeader.NumberOfSymbols;
        }
        if ( !a1 )
        {
          v14 = KeGetCurrentThread();
          if ( (v14->MiscFlags & 0x400) != 0 || v14->ApcStateIndex == 1 )
            Teb = 0LL;
          else
            Teb = (wchar_t *)v14->Teb;
          if ( Teb )
          {
            RtlStringCbCopyW(Teb + 2356, 0x20AuLL, (NTSTRSAFE_PCWSTR)v18->InitialStack);
            *((_QWORD *)Teb + 5) = Teb + 2356;
            *((_QWORD *)v7 + 3) = Teb + 20;
          }
        }
        if ( v16 )
          KiUnstackDetachProcess((__int64)v22, 0, v12, v13);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18->Header.WaitListHead;
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
