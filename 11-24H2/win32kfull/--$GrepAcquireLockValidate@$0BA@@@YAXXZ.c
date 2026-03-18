/*
 * XREFs of ??$GrepAcquireLockValidate@$0BA@@@YAXXZ @ 0x14002BBF0
 * Callers:
 *     ??$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14002B4A4 (--$GreAcquirePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x14002B4D0 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<16>()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // ecx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v8; // rcx
  int v9; // r8d
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        result = PsGetProcessSessionIdEx(CurrentThreadProcess),
        ProcessSessionId == (_DWORD)result) )
  {
    result = PsGetThreadWin32Thread(CurrentThread);
    if ( result )
    {
      if ( *(_QWORD *)result )
      {
        v2 = *(_QWORD *)result + 8LL;
        if ( *(_QWORD *)result != -8LL )
        {
          v3 = *(_QWORD *)v2;
          if ( (*(_QWORD *)v2 & 0xFFFFFFFFFFFF0000uLL) != 0 && (*(_QWORD *)v2 & 0x10000LL) == 0 )
          {
            v8 = 0LL;
            v9 = 37;
            do
            {
              v10 = v8;
              if ( !_bittest64(&v3, v8) )
                v10 = v9;
              ++v8;
              v9 = v10;
            }
            while ( v8 < 0x40 );
            if ( v10 > 16 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v3, (unsigned int)v10);
          }
          v4 = *(unsigned __int8 *)(v2 + 24);
          result = (unsigned int)(v4 + 1);
          *(_BYTE *)(v2 + 24) = v4 + 1;
          if ( !(_BYTE)v4 )
            *(_QWORD *)v2 |= 0x10000uLL;
        }
      }
    }
  }
  return result;
}
