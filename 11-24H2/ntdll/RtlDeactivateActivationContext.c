/*
 * XREFs of RtlDeactivateActivationContext @ 0x18008C7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18008CA60 (RtlpFreeActivationContextStackFrame.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __cdecl RtlDeactivateActivationContext(ULONG Flags, ULONG_PTR Cookie)
{
  struct _TEB *v2; // rdi
  unsigned __int64 *ActivationContextStackPointer; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-C8h] BYREF

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", Flags);
    RtlRaiseStatus(-1073741811);
  }
  if ( Cookie )
  {
    if ( Cookie >> 60 != 1 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie type 0x%08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie);
      RtlRaiseStatus(-1073741811);
    }
    v2 = NtCurrentTeb();
    if ( ((HIDWORD(Cookie) ^ v2->ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        Cookie,
        v2->ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(-1073741811);
    }
    ActivationContextStackPointer = (unsigned __int64 *)v2->ActivationContextStackPointer;
    v4 = *ActivationContextStackPointer;
    if ( *ActivationContextStackPointer )
    {
      if ( (*(_BYTE *)(v4 + 16) & 8) != 0 && *(_QWORD *)(v4 + 24) == Cookie )
      {
        v5 = *ActivationContextStackPointer;
      }
      else
      {
        v5 = *(_QWORD *)v4;
        v8 = 0;
        if ( !*(_QWORD *)v4 )
          goto LABEL_18;
        v9 = *(_QWORD *)v4;
        if ( (*(_BYTE *)(v5 + 16) & 8) == 0 )
          v9 = 0LL;
        while ( !v9 || *(_QWORD *)(v9 + 24) != Cookie )
        {
          v5 = *(_QWORD *)v5;
          ++v8;
          if ( !v5 )
            goto LABEL_18;
          v9 = 0LL;
          if ( (*(_BYTE *)(v5 + 16) & 8) != 0 )
            v9 = v5;
        }
        if ( !v5 )
LABEL_18:
          RtlRaiseStatus(-1072365552);
        *(&ExceptionRecord.NumberParameters + 1) = 0;
        memset_thunk_772440563353939046(&ExceptionRecord.ExceptionInformation[3], 0, 0x60uLL);
        ExceptionRecord.ExceptionInformation[0] = v8;
        ExceptionRecord.NumberParameters = 3;
        ExceptionRecord.ExceptionInformation[1] = v5;
        ExceptionRecord.ExceptionInformation[2] = v4;
        ExceptionRecord.ExceptionCode = -1072365553;
        memset(&ExceptionRecord.ExceptionFlags, 0, 20);
        RtlRaiseException(&ExceptionRecord);
      }
      v6 = *(_QWORD *)v5;
      do
      {
        v7 = *(_QWORD *)v4;
        if ( (*(_BYTE *)(v4 + 16) & 1) != 0 )
          RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(v4 + 8));
        if ( (*(_BYTE *)(v4 + 16) & 8) != 0 )
          RtlpFreeActivationContextStackFrame(ActivationContextStackPointer, v4);
        v4 = v7;
      }
      while ( v7 != v6 );
      *ActivationContextStackPointer = v6;
    }
  }
}
