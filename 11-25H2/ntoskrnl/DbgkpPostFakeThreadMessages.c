/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x1409B9A84
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409BA9F8 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1409BAE18 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     PsMultiResumeThread @ 0x140462278 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     DbgkpQueueMessage @ 0x14091F880 (DbgkpQueueMessage.c)
 *     DbgkSendSystemDllMessages @ 0x1409B9DBC (DbgkSendSystemDllMessages.c)
 *     PsSuspendThread @ 0x1409BA290 (PsSuspendThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409BA844 (PsSynchronizeWithThreadInsertion.c)
 *     DbgkpSectionToFileHandle @ 0x140A7F280 (DbgkpSectionToFileHandle.c)
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
  char v18; // [rsp+30h] [rbp-1F8h]
  struct _KTHREAD *v21; // [rsp+50h] [rbp-1D8h]
  _BYTE v23[40]; // [rsp+A0h] [rbp-188h] BYREF
  int v24; // [rsp+C8h] [rbp-160h]
  HANDLE Handle; // [rsp+D8h] [rbp-150h]
  __int64 v26; // [rsp+E0h] [rbp-148h]
  unsigned int PointerToSymbolTable; // [rsp+E8h] [rbp-140h]
  unsigned int NumberOfSymbols; // [rsp+ECh] [rbp-13Ch]
  __int64 v29; // [rsp+F8h] [rbp-130h]
  _BYTE v30[48]; // [rsp+1B0h] [rbp-78h] BYREF

  memset(v30, 0, sizeof(v30));
  memset_0(v23, 0, 0x110uLL);
  v7 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread;
  v10 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v11 = 1;
    v18 = 1;
    goto LABEL_17;
  }
  v11 = 0;
  v18 = 0;
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
        memset_0(v23, 0, 0x110uLL);
        if ( !v11 || (v12 & 0x10) != 0 )
        {
          v13 = 0;
          v24 = 1;
          Handle = *(HANDLE *)(a3 + 1376);
        }
        else
        {
          v13 = 1;
          v24 = 2;
          v16 = *(_QWORD *)(a1 + 680);
          if ( v16 )
            Handle = (HANDLE)DbgkpSectionToFileHandle(v16);
          else
            Handle = 0LL;
          v26 = *(_QWORD *)(a1 + 688);
          KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v30);
          v17 = RtlImageNtHeader(*(PVOID *)(a1 + 688));
          if ( v17 )
          {
            v29 = 0LL;
            PointerToSymbolTable = v17->FileHeader.PointerToSymbolTable;
            NumberOfSymbols = v17->FileHeader.NumberOfSymbols;
          }
          KiUnstackDetachProcess((__int64)v30, 0LL);
        }
        v10 = DbgkpQueueMessage((PVOID)a1, (char *)a3, (__int64)v23, v12, a2);
        if ( v10 < 0 )
        {
          if ( (v12 & 0x20) != 0 )
            PsMultiResumeThread(a3, 0LL, 1u);
          if ( (v12 & 8) != 0 )
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a3 + 1416));
          if ( v24 == 2 && Handle )
            ObCloseHandle(Handle, 0);
          ObfDereferenceObjectWithTag((PVOID)a3, 0x6E457350u);
          break;
        }
        if ( v13 )
        {
          v11 = 0;
          v18 = 0;
          ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
          v7 = (void *)a3;
          DbgkSendSystemDllMessages((PVOID)a3);
        }
        else
        {
          v11 = v18;
        }
        CurrentThread = v21;
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
