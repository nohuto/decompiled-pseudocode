/*
 * XREFs of EtwpSetProviderTraits @ 0x1800E9BD0
 * Callers:
 *     EtwEventSetInformation @ 0x1800E9B50 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 *     ProviderHandleLookup @ 0x180046040 (ProviderHandleLookup.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  _BYTE *Heap; // rsi
  __int64 v10; // rax
  int v11; // r15d
  NTSTATUS v12; // eax
  __int64 v13; // r9
  NTSTATUS v14; // ebx
  ULONG v15; // ebx
  __int64 v16; // r9
  __int128 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h]
  _BYTE v20[120]; // [rsp+50h] [rbp-B8h] BYREF

  memset_thunk_772440563353939046(v20, 0, 0x78uLL);
  v19 = 0LL;
  v18 = 0LL;
  v7 = ProviderHandleLookup(v6, a1);
  v8 = v7;
  if ( !v7 || WORD2(a1) != *(_WORD *)(v7 + 84) )
  {
    v15 = 6;
LABEL_12:
    RtlSetLastWin32Error(v15);
    return v15;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v7 + 64));
  Heap = v20;
  v10 = *(_QWORD *)(v8 + 88);
  *(_DWORD *)(v8 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  *((_QWORD *)&v18 + 1) = a2;
  v11 = 0;
  *(_QWORD *)&v18 = v10;
  LOWORD(v19) = a3;
  while ( 1 )
  {
    v12 = NtTraceControl(30LL, &v18, 24LL);
    v14 = v12;
    if ( v12 != -1073741789 )
    {
      if ( v12 )
        goto LABEL_15;
      v15 = 0;
      goto LABEL_7;
    }
    if ( Heap != v20 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v13);
    Heap = (_BYTE *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0LL);
    if ( !Heap )
      break;
    if ( (unsigned int)++v11 >= 0x10 )
      goto LABEL_15;
  }
  v14 = -1073741801;
LABEL_15:
  v15 = RtlNtStatusToDosError(v14);
  if ( !v15 )
LABEL_7:
    *(_WORD *)(v8 + 86) |= 0x4000u;
  *(_DWORD *)(v8 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v8 + 64));
  if ( Heap && Heap != v20 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v16);
  if ( v15 )
    goto LABEL_12;
  return v15;
}
