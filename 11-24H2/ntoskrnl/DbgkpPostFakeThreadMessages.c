/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x1408F50E4
 * Callers:
 *     DbgkpSetProcessDebugObject @ 0x1409E3B48 (DbgkpSetProcessDebugObject.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409E3E60 (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     PsMultiResumeThread @ 0x140455D04 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     PsSuspendThread @ 0x140A0CF10 (PsSuspendThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140A1A6F4 (PsSynchronizeWithThreadInsertion.c)
 *     DbgkpSectionToFileHandle @ 0x140A7DB28 (DbgkpSectionToFileHandle.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(__int64 a1, struct _KEVENT *a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  void *v7; // r14
  void *v8; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // r12d
  char v11; // r13
  int v12; // esi
  char v13; // r13
  _QWORD *NextProcessThread; // rax
  __int64 v16; // rcx
  PIMAGE_NT_HEADERS v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // [rsp+30h] [rbp-1F8h]
  struct _KTHREAD *v23; // [rsp+50h] [rbp-1D8h]
  _BYTE v25[40]; // [rsp+A0h] [rbp-188h] BYREF
  int v26; // [rsp+C8h] [rbp-160h]
  HANDLE Handle; // [rsp+D8h] [rbp-150h]
  __int64 v28; // [rsp+E0h] [rbp-148h]
  unsigned int PointerToSymbolTable; // [rsp+E8h] [rbp-140h]
  unsigned int NumberOfSymbols; // [rsp+ECh] [rbp-13Ch]
  __int64 v31; // [rsp+F8h] [rbp-130h]
  _BYTE v32[48]; // [rsp+1B0h] [rbp-78h] BYREF

  memset(v32, 0, sizeof(v32));
  memset_0(v25, 0, 0x110uLL);
  v7 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v23 = CurrentThread;
  v10 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v11 = 1;
    v20 = 1;
    goto LABEL_17;
  }
  v11 = 0;
  v20 = 0;
  v7 = (void *)a3;
  ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
  while ( a3 )
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
    v8 = (void *)a3;
    ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
    if ( (*(_DWORD *)(a3 + 116) & 0x400) == 0 )
    {
      if ( (*(_DWORD *)(a3 + 1440) & 2) != 0
        || (PsSynchronizeWithThreadInsertion(a3, CurrentThread), (*(_DWORD *)(a3 + 1440) & 2) != 0) )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a3 + 1416)) )
          v12 = (((int)PsSuspendThread(a3, 0LL) >> 31) & 0xFFFFFFE0) + 42;
        else
          v12 = 18;
        memset_0(v25, 0, 0x110uLL);
        if ( !v11 || (v12 & 0x10) != 0 )
        {
          v13 = 0;
          v26 = 1;
          Handle = *(HANDLE *)(a3 + 1376);
        }
        else
        {
          v13 = 1;
          v26 = 2;
          v16 = *(_QWORD *)(a1 + 680);
          if ( v16 )
            Handle = (HANDLE)DbgkpSectionToFileHandle(v16);
          else
            Handle = 0LL;
          v28 = *(_QWORD *)(a1 + 688);
          KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v32);
          v17 = RtlImageNtHeader(*(PVOID *)(a1 + 688));
          if ( v17 )
          {
            v31 = 0LL;
            PointerToSymbolTable = v17->FileHeader.PointerToSymbolTable;
            NumberOfSymbols = v17->FileHeader.NumberOfSymbols;
          }
          KiUnstackDetachProcess((__int64)v32, 0, v18, v19);
        }
        v10 = DbgkpQueueMessage((PVOID)a1, (char *)a3, (__int64)v25, v12, a2);
        if ( v10 < 0 )
        {
          if ( (v12 & 0x20) != 0 )
            PsMultiResumeThread(a3, 0LL, 1u);
          if ( (v12 & 8) != 0 )
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a3 + 1416));
          if ( v26 == 2 && Handle )
            ObCloseHandle(Handle, 0);
          ObfDereferenceObjectWithTag((PVOID)a3, 0x6E457350u);
          break;
        }
        if ( v13 )
        {
          v11 = 0;
          v20 = 0;
          ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
          v7 = (void *)a3;
          DbgkSendSystemDllMessages((PVOID)a3);
        }
        else
        {
          v11 = v20;
        }
        CurrentThread = v23;
      }
    }
    NextProcessThread = PsGetNextProcessThread(a1, (_QWORD *)a3);
LABEL_17:
    a3 = (__int64)NextProcessThread;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
  }
  else if ( v7 )
  {
    *a4 = v7;
    *a5 = v8;
  }
  else
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v10;
}
