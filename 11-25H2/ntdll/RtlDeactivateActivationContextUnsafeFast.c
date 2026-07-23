/*
 * XREFs of RtlDeactivateActivationContextUnsafeFast @ 0x18004E410
 * Callers:
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpInitializeNode @ 0x180073610 (LdrpInitializeNode.c)
 *     RtlDispatchAPC @ 0x180073970 (RtlDispatchAPC.c)
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18007F260 (TppCallbackCheckThreadAfterCallback.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpProcessDetachNode @ 0x1800DFDC4 (LdrpProcessDetachNode.c)
 *     LdrpQuerySxSMUIFile @ 0x1800EE464 (LdrpQuerySxSMUIFile.c)
 *     LdrShutdownProcess @ 0x1800FDE80 (LdrShutdownProcess.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

void __fastcall RtlDeactivateActivationContextUnsafeFast(__int64 a1)
{
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rdi
  unsigned __int64 ActiveFrame; // rcx
  unsigned __int64 v4; // rdx
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // ecx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-69h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+5Fh]

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
  if ( ActivationContextStackPointer )
    ActiveFrame = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
  else
    ActiveFrame = 0LL;
  v4 = *(unsigned int *)(a1 + 32);
  if ( (v4 & 0x40) != 0 )
  {
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    v6 = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365551;
    ExceptionRecord.ExceptionInformation[2] = v6;
    ExceptionRecord.ExceptionFlags = 0;
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  if ( (v4 & 0x20) == 0 )
  {
    ExceptionRecord.NumberParameters = 3;
    ExceptionRecord.ExceptionInformation[1] = a1 + 16;
    ExceptionRecord.ExceptionInformation[0] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
    ExceptionRecord.ExceptionCode = -1072365552;
    goto LABEL_23;
  }
  if ( (v4 & 0x60) != 0x20 )
  {
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[3] = v4;
    ExceptionRecord.ExceptionCode = -1072365548;
    goto LABEL_23;
  }
  if ( *(_QWORD *)a1 >= 0x48uLL
    && (*(_QWORD *)(a1 + 40) != ~*(_QWORD *)(a1 + 16) || *(_QWORD *)(a1 + 48) != ~*(_QWORD *)(a1 + 24)) )
  {
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
    ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
    ExceptionRecord.ExceptionInformation[2] = a1 + 16;
    ExceptionRecord.ExceptionInformation[3] = v4;
    ExceptionRecord.ExceptionCode = -1072365548;
    goto LABEL_23;
  }
  if ( ActiveFrame )
  {
    v5 = *(_DWORD *)(ActiveFrame + 16);
    if ( (v5 & 0x70) != 0x20
      || (v5 & 8) == 0
      && *(_QWORD *)(ActiveFrame - 16) >= 0x48uLL
      && (*(_QWORD *)(ActiveFrame + 24) != ~*(_QWORD *)ActiveFrame
       || *(_QWORD *)(ActiveFrame + 32) != ~*(_QWORD *)(ActiveFrame + 8)) )
    {
      ExceptionRecord.NumberParameters = 4;
      ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
      ExceptionRecord.ExceptionInformation[1] = ActiveFrame;
      ExceptionRecord.ExceptionInformation[2] = ActiveFrame;
      ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(ActiveFrame + 16);
      ExceptionRecord.ExceptionCode = -1072365548;
LABEL_23:
      ExceptionRecord.ExceptionFlags = 1;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
  if ( (v4 & 0x10) == 0 )
  {
    if ( ActiveFrame != a1 + 16 )
    {
      v7 = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      v8 = *(_QWORD *)(a1 + 16);
      v9 = 0;
      DbgPrintEx(
        0x33u,
        2u,
        "SXS: %s() Active frame is not the frame being deactivated %p != %p\n",
        "RtlDeactivateActivationContextUnsafeFast",
        ActivationContextStackPointer->ActiveFrame,
        (const void *)(a1 + 16));
      while ( v7 && v7 != v8 )
      {
        v11 = *(_DWORD *)(v7 + 16);
        if ( (v11 & 0x70) != 0x20
          || (v11 & 8) == 0 && (*(_QWORD *)(v7 + 24) != ~*(_QWORD *)v7 || *(_QWORD *)(v7 + 32) != ~*(_QWORD *)(v7 + 8)) )
        {
          ExceptionRecord.NumberParameters = 4;
          ExceptionRecord.ExceptionInformation[2] = a1 + 16;
          ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)ActivationContextStackPointer;
          ExceptionRecord.ExceptionInformation[1] = v7;
          ExceptionRecord.ExceptionInformation[3] = *(unsigned int *)(v7 + 16);
          ExceptionRecord.ExceptionCode = -1072365548;
          ExceptionRecord.ExceptionFlags = 1;
          RtlRaiseException(&ExceptionRecord);
          return;
        }
        v7 = *(_QWORD *)v7;
        ++v9;
      }
      ExceptionRecord.ExceptionInformation[0] = v9;
      ExceptionRecord.ExceptionInformation[1] = a1 + 16;
      ExceptionRecord.NumberParameters = 3;
      ExceptionRecord.ExceptionInformation[2] = (unsigned __int64)ActivationContextStackPointer->ActiveFrame;
      if ( v7 )
      {
        ExceptionRecord.ExceptionFlags = 0;
        v10 = -1072365553;
        if ( !v9 )
          v10 = -1072365551;
        ExceptionRecord.ExceptionCode = v10;
      }
      else
      {
        ExceptionRecord.ExceptionCode = -1072365552;
        ExceptionRecord.ExceptionFlags = 1;
      }
      RtlRaiseException(&ExceptionRecord);
    }
    ActivationContextStackPointer->ActiveFrame = *(_RTL_ACTIVATION_CONTEXT_STACK_FRAME **)(a1 + 16);
  }
  *(_DWORD *)(a1 + 32) |= 0x40u;
  if ( *(_QWORD *)a1 >= 0x48uLL )
    *(_QWORD *)(a1 + 64) = retaddr;
}
