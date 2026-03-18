/*
 * XREFs of NestAsyncEvalObject @ 0x14006D32C
 * Callers:
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 * Callees:
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     PushPost @ 0x140008C34 (PushPost.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     PushCall @ 0x140013020 (PushCall.c)
 *     GetThreadCurrentContext @ 0x1400147AC (GetThreadCurrentContext.c)
 *     LogSchedEvent @ 0x14002DA00 (LogSchedEvent.c)
 *     ReferenceObjectEx @ 0x140030DA0 (ReferenceObjectEx.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 */

__int64 __fastcall NestAsyncEvalObject(_WORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadCurrentContext; // rdi
  KIRQL v11; // r10
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 ObjectPath; // rax
  const char *v19; // rdx
  void *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rbx

  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ThreadCurrentContext = GetThreadCurrentContext();
  KeReleaseSpinLock(&SpinLock, v11);
  LogSchedEvent(1312904025, ThreadCurrentContext, (__int64)a1, (__int64)EvalMethodComplete, ThreadCurrentContext);
  if ( ThreadCurrentContext )
  {
    a5 = 0LL;
    v12 = PushFrame((_QWORD *)ThreadCurrentContext, 1481917262, 0x80u, (__int64)ParseNestedContext, &a5);
    if ( !v12 )
    {
      *(_QWORD *)(a5 + 32) = a1;
      ReferenceObjectEx((__int64)a1);
      *(_QWORD *)(v13 + 40) = a1;
      ReferenceObjectEx(v14);
      *(_QWORD *)(v15 + 88) = EvalMethodComplete;
      v16 = a6;
      *(_QWORD *)(v15 + 96) = a2;
      *(_QWORD *)(v15 + 104) = v16;
      *(_QWORD *)(v15 + 120) = *(_QWORD *)(ThreadCurrentContext + 104);
      *(_DWORD *)(v15 + 112) = *(_DWORD *)(ThreadCurrentContext + 64);
      LODWORD(v16) = *(_DWORD *)(ThreadCurrentContext + 64);
      *(_QWORD *)(ThreadCurrentContext + 104) = v15;
      *(_DWORD *)(ThreadCurrentContext + 64) = v16 & 0xFFFFFE7F | 0x80;
      if ( a1[33] == 8 )
      {
        if ( !(unsigned int)PushCall((_QWORD *)ThreadCurrentContext, (__int64)a1, v15 + 48) )
        {
          v17 = *(_QWORD *)(ThreadCurrentContext + 416);
          if ( a3 == *(_DWORD *)(v17 + 60) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              ObjectPath = GetObjectPath((__int64)a1);
              v19 = byte_140075488;
              v20 = (void *)ObjectPath;
              if ( ObjectPath )
                v19 = (const char *)ObjectPath;
              ConPrintf("\nAMLI: %s(", v19);
              if ( v20 )
                ExFreePoolWithTag(v20, 0);
            }
            *(_DWORD *)(v17 + 56) = 0;
            if ( a3 )
            {
              v21 = 0LL;
              while ( !(unsigned int)DupObjData(
                                       *(_QWORD *)(ThreadCurrentContext + 320),
                                       *(_QWORD *)(v17 + 64) + 40 * v21,
                                       a4 + 40 * v21) )
              {
                if ( (gDebugger & 0xD0) != 0 )
                {
                  PrintObject(a4 + 40LL * *(unsigned int *)(v17 + 56));
                  if ( *(_DWORD *)(v17 + 56) + 1 < a3 )
                    ConPrintf(",");
                }
                v21 = (unsigned int)(*(_DWORD *)(v17 + 56) + 1);
                *(_DWORD *)(v17 + 56) = v21;
                if ( (unsigned int)v21 >= a3 )
                  goto LABEL_19;
              }
            }
            else
            {
LABEL_19:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              *(_DWORD *)(v17 + 16) = *(_DWORD *)(v17 + 16) & 0xFFFF0000 | 2;
            }
          }
          else
          {
            LogError(-1072431093);
            AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431093);
            PrintDebugMessage(0x6Cu, (const void *)a3, (const void *)*(unsigned int *)(v17 + 60), 0LL, 0LL);
          }
        }
      }
      else
      {
        v22 = v15 + 48;
        if ( !(unsigned int)PushPost(ThreadCurrentContext, (int)ProcessEvalObj, (__int64)a1, 0LL, v15 + 48) )
          ReadObject(ThreadCurrentContext, (__int64)(a1 + 32), v22);
      }
      return 32772;
    }
  }
  else
  {
    v12 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(0LL, -1072431098);
    PrintDebugMessage(0x6Du, a1, 0LL, 0LL, 0LL);
  }
  return v12;
}
