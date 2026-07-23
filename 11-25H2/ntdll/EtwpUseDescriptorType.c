/*
 * XREFs of EtwpUseDescriptorType @ 0x18015D438
 * Callers:
 *     EtwEventSetInformation @ 0x1800E9B50 (EtwEventSetInformation.c)
 * Callees:
 *     ProviderHandleLookup @ 0x180046040 (ProviderHandleLookup.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUseDescriptorType(__int64 a1, unsigned __int8 *a2)
{
  __int16 v3; // rbx^4
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int8 v6; // di
  unsigned __int32 v7; // ebx
  NTSTATUS v8; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-28h] BYREF
  __int128 InputBuffer; // [rsp+38h] [rbp-20h] BYREF

  ReturnLength = 0;
  InputBuffer = 0LL;
  v3 = WORD2(a1);
  v4 = ProviderHandleLookup(a1, a1);
  v5 = v4;
  if ( !v4 || v3 != *(_WORD *)(v4 + 84) )
  {
    v7 = 6;
    goto LABEL_10;
  }
  v6 = *a2;
  if ( v6 >= 2u )
  {
    v7 = 87;
LABEL_10:
    RtlSetLastWin32Error(v7);
    return v7;
  }
  *(_QWORD *)&InputBuffer = *(_QWORD *)(v4 + 88);
  BYTE8(InputBuffer) = v6;
  v8 = NtTraceControl(EtwUseDescriptorTypeCode, &InputBuffer, 0x10u, 0LL, 0, &ReturnLength);
  if ( v8 )
  {
    v7 = RtlNtStatusToDosError(v8);
    if ( v7 )
      goto LABEL_10;
  }
  else
  {
    v7 = 0;
  }
  *(_WORD *)(v5 + 86) = *(_WORD *)(v5 + 86) & 0xBFFF | ((v6 & 1) << 14);
  return v7;
}
