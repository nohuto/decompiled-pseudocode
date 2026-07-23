/*
 * XREFs of LdrpInitializeThread @ 0x180073EB0
 * Callers:
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x180074730 (LdrpCallInitRoutine.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800EEA30 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F2C94 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpInitializeThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v3; // rbx
  _PEB *ProcessEnvironmentBlock; // rsi
  __int64 result; // rax
  NTSTATUS i; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // r8
  unsigned __int64 ActiveFrame; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+20h] [rbp-198h] BYREF
  __int64 v14; // [rsp+28h] [rbp-190h]
  __int64 v15; // [rsp+30h] [rbp-188h]
  _QWORD v16[2]; // [rsp+40h] [rbp-178h] BYREF
  __int128 v17; // [rsp+50h] [rbp-168h] BYREF
  __int128 v18; // [rsp+60h] [rbp-158h]
  __int128 v19; // [rsp+70h] [rbp-148h]
  __int64 v20; // [rsp+80h] [rbp-138h]
  _QWORD v21[2]; // [rsp+90h] [rbp-128h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-118h]
  __int128 v23; // [rsp+B0h] [rbp-108h]
  __int128 v24; // [rsp+C0h] [rbp-F8h]
  __int64 v25; // [rsp+D0h] [rbp-E8h]
  __int64 v26; // [rsp+E0h] [rbp-D8h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+F0h] [rbp-C8h] BYREF
  _UNKNOWN *retaddr; // [rsp+1B8h] [rbp+0h]

  DelayInterval.QuadPart = 0LL;
  v3 = NtCurrentTeb();
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
  if ( UseCOR && (v3->SameTebFlags & 0x400) != 0 )
  {
    a3 = MEMORY[0x7FFE0330];
    a2 = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *(_QWORD *)(a1 + 128) = a2 ^ MEMORY[0x7FFE0330];
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))LdrpAcquireSchedulerSharedDataSlot)(
    v3,
    a2,
    a3,
    a1,
    (LARGE_INTEGER)DelayInterval.QuadPart);
  RtlpInitializeThreadActivationContextStack(v3);
  if ( (NtCurrentTeb()->SameTebFlags & 8) != 0 )
  {
    result = (__int64)NtCurrentTeb();
    if ( (*(_BYTE *)(result + 6126) & 0x20) == 0 )
      return result;
  }
  result = 0x2000LL;
  if ( (v3->SameTebFlags & 0x2000) != 0 )
    return result;
  for ( i = LdrpAllocateTls(); i < 0; i = LdrpAllocateTls() )
  {
    if ( i != -1073741801 )
      break;
    DelayInterval.QuadPart = -3000000LL;
    ZwDelayExecution(0, &DelayInterval);
  }
  if ( i < 0 )
  {
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, i);
    RtlRaiseStatus(i);
  }
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  v8 = qword_1801D4950;
  while ( 1 )
  {
    v14 = v8;
    if ( (__int64 *)v8 == &qword_1801D4950 )
      break;
    v26 = v8;
    if ( *(int *)(*(_QWORD *)(v8 + 152) + 56LL) < 9 )
    {
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v9 = (_QWORD *)(v8 + 48);
      if ( ProcessEnvironmentBlock->ImageBaseAddress == *(void **)(v8 + 48) )
        goto LABEL_27;
      v7 = *(unsigned int *)(v8 + 104);
      if ( (v7 & 0x40000) != 0 )
        goto LABEL_27;
      v15 = *(_QWORD *)(v8 + 56);
      if ( !v15 )
        goto LABEL_27;
      v7 &= 0x80004u;
      if ( (_DWORD)v7 != 524292 )
        goto LABEL_27;
      if ( byte_1801D4988 )
        goto LABEL_38;
      v16[0] = 72LL;
      v16[1] = 1LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v10 = *(_QWORD *)(v8 + 136);
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer )
        ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      else
        ActiveFrame = 0LL;
      memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
      *((_QWORD *)&v18 + 1) = ~ActiveFrame;
      *(_QWORD *)&v19 = ~v10;
      *((_QWORD *)&v19 + 1) = retaddr;
      if ( !ActiveFrame || (*(_DWORD *)(ActiveFrame + 16) & 0x70) == 0x20 )
      {
        *(_QWORD *)&v17 = ActiveFrame;
        *((_QWORD *)&v17 + 1) = v10;
        LODWORD(v18) = 32;
        if ( ActiveFrame )
        {
          if ( *(_QWORD *)(ActiveFrame + 8) != v10 )
          {
LABEL_32:
            ActivationContextStackPointer->ActiveFrame = (_RTL_ACTIVATION_CONTEXT_STACK_FRAME *)&v17;
            goto LABEL_24;
          }
        }
        else if ( v10 )
        {
          goto LABEL_32;
        }
        LODWORD(v18) = 48;
      }
      else
      {
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
        ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
        ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
        ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
        ExceptionRecord.ExceptionCode = -1072365548;
        ExceptionRecord.ExceptionFlags = 1;
        RtlRaiseException(&ExceptionRecord);
      }
LABEL_24:
      v8 = v14;
      if ( *(_WORD *)(v14 + 110) )
        LdrpCallTlsInitializers(2LL, v14);
      LdrpCallInitRoutine(v15, *v9, 2LL);
      RtlDeactivateActivationContextUnsafeFast((__int64)v16);
LABEL_27:
      v8 = *(_QWORD *)v8;
    }
  }
  if ( *(_WORD *)(LdrpImageEntry + 110) && !byte_1801D4988 )
  {
    v21[0] = 72LL;
    v21[1] = 1LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    RtlActivateActivationContextUnsafeFast(v21, *(_QWORD *)(LdrpImageEntry + 136));
    LdrpCallTlsInitializers(2LL, LdrpImageEntry);
    RtlDeactivateActivationContextUnsafeFast((__int64)v21);
  }
LABEL_38:
  LdrpReleaseLoaderLock(v7, 21, 0);
  return LdrpDropLastInProgressCount();
}
