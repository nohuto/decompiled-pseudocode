/*
 * XREFs of EtwpSetProviderTraits @ 0x1800E8690
 * Callers:
 *     EtwEventSetInformation @ 0x18011A0B0 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     ProviderHandleLookup @ 0x18001D260 (ProviderHandleLookup.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18001E990 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, __int64 a2, __int16 a3)
{
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rdi
  _BYTE *v12; // rsi
  __int64 v13; // rax
  int v14; // r15d
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  ULONG v17; // ebx
  __int64 Heap; // rax
  unsigned int v20; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h]
  _BYTE v23[120]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = 120;
  memset_thunk_772440563353939046(v23, 0, 0x78uLL);
  v22 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v8 = ProviderHandleLookup(v7, a1);
  v11 = v8;
  if ( !v8 || WORD2(a1) != *(_WORD *)(v8 + 84) )
  {
    v17 = 6;
LABEL_13:
    RtlSetLastWin32Error(v17);
    return v17;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v8 + 64), v9, v10);
  v12 = v23;
  v13 = *(_QWORD *)(v11 + 88);
  *(_DWORD *)(v11 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  *((_QWORD *)&v21 + 1) = a2;
  v14 = 0;
  *(_QWORD *)&v21 = v13;
  LOWORD(v22) = a3;
  while ( 1 )
  {
    v15 = NtTraceControl(30LL, &v21, 24LL, v12, v6, &v20);
    v16 = v15;
    if ( v15 != -1073741789 )
      break;
    if ( v12 != v23 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v12);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v20);
    v6 = v20;
    v12 = (_BYTE *)Heap;
    if ( !Heap )
    {
      v16 = -1073741801;
      goto LABEL_16;
    }
    if ( (unsigned int)++v14 >= 0x10 )
      goto LABEL_16;
  }
  if ( !v15 )
  {
    v17 = 0;
    goto LABEL_7;
  }
LABEL_16:
  v17 = RtlNtStatusToDosError(v16);
  if ( v17 )
    goto LABEL_9;
LABEL_7:
  *(_WORD *)(v11 + 86) |= 0x4000u;
  if ( v20 )
    EtwpUpdateEnableInfoAndCallback(v11, (__int64)v12);
LABEL_9:
  *(_DWORD *)(v11 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v11 + 64));
  if ( v12 && v12 != v23 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v12);
  if ( v17 )
    goto LABEL_13;
  return v17;
}
