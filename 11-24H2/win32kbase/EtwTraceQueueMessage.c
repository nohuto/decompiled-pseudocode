/*
 * XREFs of EtwTraceQueueMessage @ 0x1400A4C80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqsp_EtwWriteTransfer @ 0x140033594 (McTemplateK0qqsp_EtwWriteTransfer.c)
 *     EtwTraceQueuePostMessage @ 0x1400A4EF8 (EtwTraceQueuePostMessage.c)
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1400A50E8 (McTemplateK0cppqp_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400A5190 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1400A51BC (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceQueueMessage(_DWORD *ProcessImageFileName)
{
  _DWORD *v1; // rbx
  int v2; // esi
  int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 *v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 CurrentProcess; // rsi
  __int64 v20; // r8
  char ThreadId; // r12
  const char *v22; // r14
  unsigned __int8 CallbackCount; // al

  v1 = ProcessImageFileName;
  if ( ProcessImageFileName[6] )
    goto LABEL_2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(ProcessImageFileName);
  v16 = -1;
  if ( CurrentThreadNonPaged )
  {
    v17 = *CurrentThreadNonPaged;
    CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
    if ( v17 )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v17);
      goto LABEL_15;
    }
  }
  else
  {
    v17 = 0LL;
    CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
  }
  ThreadId = -1;
LABEL_15:
  v22 = (const char *)&unk_14025D828;
  if ( CurrentProcess )
    ProcessImageFileName = (_DWORD *)PsGetProcessImageFileName(CurrentProcess);
  else
    ProcessImageFileName = &unk_14025D828;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
  {
    if ( ProcessImageFileName )
      v22 = (const char *)ProcessImageFileName;
    if ( v17 )
    {
      ProcessImageFileName = *(_DWORD **)(v17 + 464);
      if ( ProcessImageFileName )
        v16 = ProcessImageFileName[14];
    }
    McTemplateK0qqsp_EtwWriteTransfer((__int64)ProcessImageFileName, v18, v20, v16, ThreadId, v22, *((_QWORD *)v1 + 2));
  }
LABEL_2:
  v2 = v1[25];
  if ( (v2 & 4) != 0 )
  {
    EtwTraceQueuePostMessage(v1);
  }
  else if ( (v2 & 8) != 0 )
  {
    v3 = v1[24];
    if ( v3 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      {
        v4 = *((_QWORD *)v1 + 2);
        v5 = *((_QWORD *)v1 + 13);
        v6 = (__int64 *)W32GetCurrentThreadNonPaged(ProcessImageFileName);
        if ( v6 && (v10 = *v6) != 0 )
          v9 = *(unsigned __int8 *)(v10 + 1456);
        else
          LOBYTE(v9) = -1;
        McTemplateK0cppqp_EtwWriteTransfer(v7, (unsigned int)&QueueEventMessage, v8, v9, (char)v1, v5, v3, v4);
      }
    }
    else if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
    {
      CallbackCount = GetCallbackCount();
      McTemplateK0cpttttttpppqq_EtwWriteTransfer(
        v2 << 25 >> 31,
        (unsigned int)&QueueInputMessage,
        (char)v2 >> 7,
        CallbackCount,
        (char)v1);
    }
  }
}
