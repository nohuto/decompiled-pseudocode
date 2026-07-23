/*
 * XREFs of PopManageTransitionRecordRequest @ 0x140A44A04
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14041C424 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6BAC4 (PoDelistPowerStateTransitionBlocker.c)
 */

__int64 __fastcall PopManageTransitionRecordRequest(char a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER v3; // r13
  ULONG v4; // r9d
  __int64 v7; // rcx
  int v8; // ebx
  _QWORD *v10; // r15
  PETHREAD CurrentThread; // rsi
  void *v12; // rcx
  PEPROCESS v13; // r14
  PETHREAD *v14; // rbp
  PEPROCESS v15; // rcx
  _QWORD *v16; // rax
  PETHREAD *v17; // rcx
  ULONG v18; // edx
  PETHREAD Thread; // [rsp+30h] [rbp-48h] BYREF
  PEPROCESS Process; // [rsp+98h] [rbp+20h] BYREF

  v3.QuadPart = 0LL;
  v4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)a3 < 0x38 )
    return (unsigned int)-1073741789;
  if ( (unsigned int)(dword_140F0BB34 - 1) > 1 )
    return (unsigned int)-1073741101;
  v7 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
      return (unsigned int)PoDelistPowerStateTransitionBlocker(v7, a2, a3, 0LL);
    return (unsigned int)-1073741811;
  }
  if ( a1 == 1 )
  {
    v10 = (_QWORD *)(a2 + 16);
    CurrentThread = KeGetCurrentThread();
    Thread = CurrentThread;
    Process = CurrentThread->ApcState.Process;
    v12 = *(void **)(a2 + 16);
    if ( v12 && *(_QWORD *)(a2 + 24) )
    {
      v8 = PsLookupProcessByProcessId(v12, &Process);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v8 = PsLookupThreadByThreadId(*(HANDLE *)(a2 + 24), &Thread);
      if ( v8 < 0 )
      {
        v15 = Process;
        goto LABEL_23;
      }
      CurrentThread = Thread;
      v4 = 0;
    }
    v13 = Process;
    v14 = (PETHREAD *)(a2 + 24);
  }
  else
  {
    if ( a1 )
      return (unsigned int)-1073741811;
    v16 = (_QWORD *)(a2 + 16);
    v13 = *(PEPROCESS *)(a2 + 16);
    v17 = (PETHREAD *)(a2 + 24);
    v18 = *(_DWORD *)(a2 + 40);
    CurrentThread = *v17;
    if ( v18 == 1 || (v10 = v16, v14 = v17, v18 == 2) )
    {
      v10 = v16;
      v14 = v17;
      if ( *(_QWORD *)(a2 + 48) )
      {
        v3 = *(LARGE_INTEGER *)(a2 + 48);
        v4 = v18;
      }
    }
  }
  if ( !v13 || !CurrentThread )
    return (unsigned int)-1073741811;
  v8 = PopPushPowerStateTransitionRecordWithCallback(
         (LARGE_INTEGER)v13,
         (LONGLONG)CurrentThread,
         *(LARGE_INTEGER *)(a2 + 32),
         v4,
         v3);
  if ( a1 == 1 && *v10 && *v14 )
  {
    ObfDereferenceObject(v13);
    v15 = (PEPROCESS)CurrentThread;
LABEL_23:
    ObfDereferenceObject(v15);
  }
  return (unsigned int)v8;
}
