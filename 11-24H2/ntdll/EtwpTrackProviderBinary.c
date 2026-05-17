/*
 * XREFs of EtwpTrackProviderBinary @ 0x18011A13C
 * Callers:
 *     EtwEventSetInformation @ 0x18011A0B0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     ProviderHandleLookup @ 0x18001D260 (ProviderHandleLookup.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpTrackRegBinaryInfo @ 0x1800F69B4 (EtwpTrackRegBinaryInfo.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x18015BF80 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 */

__int64 __fastcall EtwpTrackProviderBinary(__int64 a1, char a2)
{
  __int16 v3; // rdi^4
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  NTSTATUS v7; // eax
  volatile signed __int32 **v8; // rdx
  unsigned __int64 v9; // r8
  ULONG v10; // edi
  void *UniqueThread; // rdx
  int v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  v13 = 0;
  v3 = WORD2(a1);
  v4 = 26;
  v5 = ProviderHandleLookup(a1, a1);
  v6 = v5;
  if ( !v5 || v3 != *(_WORD *)(v5 + 84) )
  {
    v10 = 6;
    goto LABEL_11;
  }
  if ( (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() && a2 )
    v4 = 47;
  v14 = *(_QWORD *)(v6 + 88);
  v7 = NtTraceControl(v4, &v14, 8LL, 0LL, 0, &v13);
  if ( v7 )
  {
    v10 = RtlNtStatusToDosError(v7);
    if ( !v10 )
      goto LABEL_9;
LABEL_11:
    RtlSetLastWin32Error(v10);
    return v10;
  }
  v10 = 0;
LABEL_9:
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v6 + 64), v8, v9);
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v6 + 86) |= 0x8000u;
  *(_DWORD *)(v6 + 80) = (_DWORD)UniqueThread;
  EtwpTrackRegBinaryInfo(v6);
  *(_DWORD *)(v6 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
  return v10;
}
