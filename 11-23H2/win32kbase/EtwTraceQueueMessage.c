/*
 * XREFs of EtwTraceQueueMessage @ 0x1C0094D70
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1C00DEF06 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x1C00DF40A (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1C00DF680 (McTemplateK0cppqp_EtwWriteTransfer.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1C013BFDC (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 *     McTemplateK0qqsp_EtwWriteTransfer @ 0x1C013E2A4 (McTemplateK0qqsp_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceQueueMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v6; // r15d
  int v7; // ebp
  __int64 ThreadWin32Thread; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebp
  int v13; // r8d
  __int64 CurrentProcess; // r15
  char ThreadId; // r12
  void *v16; // rbx
  void *ProcessImageFileName; // rcx
  __int64 v18; // rax
  int v19; // ecx
  int v20; // r15d
  char v21; // bp
  __int64 v22; // r14
  __int64 v23; // rbx
  int v24; // r9d
  int v25; // ecx
  int v26; // r8d
  int v27; // ecx
  int v28; // r12d
  char v29; // bp
  __int64 v30; // r14
  __int64 v31; // rbx
  int v32; // r9d
  __int64 v33; // rbx
  __int64 v34; // rdi
  int v35; // r9d
  int v36; // ecx
  int v37; // r8d
  int v38; // [rsp+28h] [rbp-80h]
  int v39; // [rsp+30h] [rbp-78h]

  LOBYTE(v4) = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v12 = -1;
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11);
    if ( ThreadWin32Thread )
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
    else
      ThreadId = -1;
    v16 = &unk_1C0263738;
    if ( CurrentProcess )
      ProcessImageFileName = (void *)PsGetProcessImageFileName(CurrentProcess);
    else
      ProcessImageFileName = &unk_1C0263738;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000000LL) != 0 )
    {
      if ( ProcessImageFileName )
        v16 = ProcessImageFileName;
      if ( ThreadWin32Thread )
      {
        v18 = *(_QWORD *)(ThreadWin32Thread + 424);
        if ( v18 )
          v12 = *(_DWORD *)(v18 + 56);
      }
      McTemplateK0qqsp_EtwWriteTransfer(
        (_DWORD)ProcessImageFileName,
        *(_QWORD *)(a1 + 16),
        v13,
        v12,
        ThreadId,
        (__int64)v16,
        *(_QWORD *)(a1 + 16));
    }
  }
  v6 = *(_DWORD *)(a1 + 100);
  if ( (v6 & 4) != 0 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return;
    v19 = *(_DWORD *)(a1 + 24);
    v20 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v19 - 581) <= 2 )
    {
      v21 = *(_DWORD *)(a1 + 24);
      if ( v19 == 582 || v19 == 581 || v19 == 583 )
      {
        v22 = *(_QWORD *)(a1 + 40);
        v4 = *(_QWORD *)(a1 + 32);
        goto LABEL_34;
      }
    }
    else
    {
      v21 = 0;
    }
    LOBYTE(v22) = 0;
LABEL_34:
    v23 = *(_QWORD *)(a1 + 16);
    LOBYTE(v24) = GetCallbackCount();
    McTemplateK0cppppqq_EtwWriteTransfer(v25, (unsigned int)&QueuePostMessage, v26, v24, a1, v23, v4, v22, v21, v20);
    return;
  }
  if ( (v6 & 8) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 96);
    if ( v7 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      {
        v33 = *(_QWORD *)(a1 + 16);
        v34 = *(_QWORD *)(a1 + 104);
        LOBYTE(v35) = GetCallbackCount();
        McTemplateK0cppqp_EtwWriteTransfer(v36, (unsigned int)&QueueEventMessage, v37, v35, a1, v34, v7, v33);
      }
      return;
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) == 0 )
      return;
    v27 = *(_DWORD *)(a1 + 24);
    v28 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v27 - 581) <= 2 )
    {
      v29 = *(_DWORD *)(a1 + 24);
      if ( v27 == 582 || v27 == 581 || v27 == 583 )
      {
        v30 = *(_QWORD *)(a1 + 40);
        v4 = *(_QWORD *)(a1 + 32);
        goto LABEL_42;
      }
    }
    else
    {
      v29 = 0;
    }
    LOBYTE(v30) = 0;
LABEL_42:
    v31 = *(_QWORD *)(a1 + 16);
    LOBYTE(v32) = GetCallbackCount();
    McTemplateK0cpttttttpppqq_EtwWriteTransfer(
      -__CFSHR__(v6, 7),
      (unsigned int)&QueueInputMessage,
      -__CFSHR__(v6, 8),
      v32,
      a1,
      v38,
      v39,
      -__CFSHR__(v6, 6),
      -__CFSHR__(v6, 7),
      -__CFSHR__(v6, 5),
      -__CFSHR__(v6, 8),
      v31,
      v4,
      v30,
      v29,
      v28);
  }
}
