/*
 * XREFs of RtlDeactivateActivationContext @ 0x18006FF10
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180070180 (RtlpFreeActivationContextStackFrame.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlDeactivateActivationContext(int a1, unsigned __int64 a2)
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

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    DbgPrintEx(51, 0, "SXS: %s() called with invalid flags 0x%08lx\n", "RtlDeactivateActivationContext", a1);
    RtlRaiseStatus(-1073741811);
  }
  if ( a2 )
  {
    if ( a2 >> 60 != 1 )
    {
      DbgPrintEx(51, 0, "SXS: %s() called with invalid cookie type 0x%08Ix\n", "RtlDeactivateActivationContext", a2);
      RtlRaiseStatus(-1073741811);
    }
    v2 = NtCurrentTeb();
    if ( ((HIDWORD(a2) ^ v2->ActivationContextStackPointer->StackId) & 0xFFFFFFF) != 0 )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() called with invalid cookie tid 0x%08Ix - should be %08Ix\n",
        "RtlDeactivateActivationContext",
        a2,
        v2->ActivationContextStackPointer->StackId & 0xFFFFFFF);
      RtlRaiseStatus(-1073741811);
    }
    ActivationContextStackPointer = (unsigned __int64 *)v2->ActivationContextStackPointer;
    v4 = *ActivationContextStackPointer;
    if ( *ActivationContextStackPointer )
    {
      if ( (*(_BYTE *)(v4 + 16) & 8) != 0 && *(_QWORD *)(v4 + 24) == a2 )
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
        while ( !v9 || *(_QWORD *)(v9 + 24) != a2 )
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
          RtlReleaseActivationContext(*(volatile signed __int32 **)(v4 + 8));
        if ( (*(_BYTE *)(v4 + 16) & 8) != 0 )
          RtlpFreeActivationContextStackFrame(ActivationContextStackPointer, v4);
        v4 = v7;
      }
      while ( v7 != v6 );
      *ActivationContextStackPointer = v6;
    }
  }
}
