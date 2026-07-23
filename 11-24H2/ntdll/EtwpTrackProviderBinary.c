/*
 * XREFs of EtwpTrackProviderBinary @ 0x18011836C
 * Callers:
 *     EtwEventSetInformation @ 0x1801182E0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     ProviderHandleLookup @ 0x180049C60 (ProviderHandleLookup.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800F0F14 (EtwpTrackRegBinaryInfo.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x18015A340 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     NtTraceControl @ 0x180163B00 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1, char a2)
{
  __int16 v3; // rdi^4
  ETWTRACECONTROLCODE v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  NTSTATUS v7; // eax
  unsigned __int32 v8; // edi
  void *UniqueThread; // rdx
  ULONG ReturnLength; // [rsp+60h] [rbp+18h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp+20h] BYREF

  InputBuffer = 0LL;
  ReturnLength = 0;
  v3 = WORD2(a1);
  v4 = EtwTrackBinaryCode;
  v5 = ProviderHandleLookup(a1, a1);
  v6 = v5;
  if ( !v5 || v3 != *(_WORD *)(v5 + 84) )
  {
    v8 = 6;
    goto LABEL_11;
  }
  if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() && a2 )
    v4 = EtwGetPmcSessions|EtwStartLoggerCode;
  InputBuffer = *(_QWORD *)(v6 + 88);
  v7 = NtTraceControl(v4, &InputBuffer, 8u, 0LL, 0, &ReturnLength);
  if ( v7 )
  {
    v8 = RtlNtStatusToDosError(v7);
    if ( !v8 )
      goto LABEL_9;
LABEL_11:
    RtlSetLastWin32Error(v8);
    return v8;
  }
  v8 = 0;
LABEL_9:
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v6 + 64));
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v6 + 86) |= 0x8000u;
  *(_DWORD *)(v6 + 80) = (_DWORD)UniqueThread;
  EtwpTrackRegBinaryInfo(v6);
  *(_DWORD *)(v6 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 64));
  return v8;
}
