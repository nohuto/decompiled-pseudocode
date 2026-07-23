/*
 * XREFs of EtwpSetProviderTraits @ 0x1800E3D80
 * Callers:
 *     EtwEventSetInformation @ 0x1801182E0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     ProviderHandleLookup @ 0x180049C60 (ProviderHandleLookup.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18004B390 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     NtTraceControl @ 0x180163B00 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, __int64 a2, __int16 a3)
{
  ULONG OutputBufferLength; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  _BYTE *v10; // rsi
  __int64 v11; // rax
  int v12; // r15d
  NTSTATUS v13; // eax
  NTSTATUS v14; // ebx
  unsigned __int32 v15; // ebx
  _BYTE *Heap; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-D8h] BYREF
  __int128 InputBuffer; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h]
  _BYTE OutputBuffer[120]; // [rsp+50h] [rbp-B8h] BYREF

  OutputBufferLength = 120;
  memset_thunk_772440563353939046(OutputBuffer, 0, 0x78uLL);
  v20 = 0LL;
  ReturnLength = 0;
  InputBuffer = 0LL;
  v8 = ProviderHandleLookup(v7, a1);
  v9 = v8;
  if ( !v8 || WORD2(a1) != *(_WORD *)(v8 + 84) )
  {
    v15 = 6;
LABEL_13:
    RtlSetLastWin32Error(v15);
    return v15;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v8 + 64));
  v10 = OutputBuffer;
  v11 = *(_QWORD *)(v9 + 88);
  *(_DWORD *)(v9 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  *((_QWORD *)&InputBuffer + 1) = a2;
  v12 = 0;
  *(_QWORD *)&InputBuffer = v11;
  LOWORD(v20) = a3;
  while ( 1 )
  {
    v13 = NtTraceControl(EtwSetProviderTraitsCode, &InputBuffer, 0x18u, v10, OutputBufferLength, &ReturnLength);
    v14 = v13;
    if ( v13 != -1073741789 )
      break;
    if ( v10 != OutputBuffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v10 = Heap;
    if ( !Heap )
    {
      v14 = -1073741801;
      goto LABEL_16;
    }
    if ( (unsigned int)++v12 >= 0x10 )
      goto LABEL_16;
  }
  if ( !v13 )
  {
    v15 = 0;
    goto LABEL_7;
  }
LABEL_16:
  v15 = RtlNtStatusToDosError(v14);
  if ( v15 )
    goto LABEL_9;
LABEL_7:
  *(_WORD *)(v9 + 86) |= 0x4000u;
  if ( ReturnLength )
    EtwpUpdateEnableInfoAndCallback(v9, (__int64)v10);
LABEL_9:
  *(_DWORD *)(v9 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v9 + 64));
  if ( v10 && v10 != OutputBuffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  if ( v15 )
    goto LABEL_13;
  return v15;
}
