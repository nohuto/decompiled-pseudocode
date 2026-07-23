/*
 * XREFs of RtlpCallVectoredHandlers @ 0x1800467C0
 * Callers:
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 * Callees:
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlDecodePointer @ 0x180046E40 (RtlDecodePointer.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLogExceptionHandler @ 0x1800EB5A4 (RtlpLogExceptionHandler.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // rsi
  unsigned int v4; // ebp
  unsigned __int8 v5; // bl
  PRTL_SRWLOCK *v8; // rdi
  unsigned int CrossProcessFlags; // eax
  void ***v10; // r14
  _RTL_SRWLOCK *v11; // rcx
  void **v12; // r15
  __int64 (__fastcall *v13)(_QWORD *); // rax
  int v14; // eax
  signed __int64 v15; // rcx
  bool v16; // cc
  signed __int64 v17; // rcx
  PVOID *v18; // rdi
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  void **v24; // rcx
  void **v25; // rax
  void **v26; // rax
  int v27; // eax
  int v28; // ecx
  PVOID *v29; // rsi
  int v30; // eax
  PVOID ProcessHeap; // rcx
  int v32; // eax
  int v33; // edx
  void ***v34; // [rsp+20h] [rbp-68h]
  void ***BaseAddress; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  volatile signed __int64 **v37; // [rsp+38h] [rbp-50h]
  _QWORD v38[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 (__fastcall *v39)(_QWORD *); // [rsp+A8h] [rbp+20h]
  int v40; // [rsp+A8h] [rbp+20h]

  v3 = NtCurrentPeb();
  v4 = a3 + 2;
  v5 = 0;
  v8 = (PRTL_SRWLOCK *)(&LdrpVectorHandlerList + 3 * a3);
  CrossProcessFlags = v3->CrossProcessFlags;
  v10 = (void ***)(v8 + 1);
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v38[0] = a1;
    v11 = *v8;
    v38[1] = a2;
    BaseAddress = 0LL;
    RtlAcquireSRWLockExclusive(v11);
    v12 = *v10;
    while ( v12 != (void **)v10 )
    {
      v34 = (void ***)v12;
      v37 = (volatile signed __int64 **)(v12 + 2);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v12[2]) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(*v8);
      v13 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer(v12[4]);
      v39 = v13;
      v36 = 0LL;
      if ( (v3->NtGlobalFlag & 0x800000) != 0 )
      {
        v36 = RtlpLogExceptionHandler(a1, a2, 0LL, v13);
        v14 = v39(v38);
      }
      else
      {
        v14 = v13(v38);
      }
      v40 = v14;
      if ( v36 )
        *(_DWORD *)(v36 + 1396) = v14 != -1;
      RtlAcquireSRWLockExclusive(*v8);
      v12 = (void **)*v12;
      v15 = _InterlockedExchangeAdd64(*v37, 0xFFFFFFFFFFFFFFFFuLL);
      v16 = v15 <= 1;
      v17 = v15 - 1;
      if ( v16 )
      {
        if ( v17 )
          __fastfail(0xEu);
        if ( !*((_DWORD *)v34 + 6) )
          __fastfail(0x3Cu);
        LOBYTE(v22) = LdrControlFlowGuardEnforced();
        if ( v22 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            if ( v23 == -1 )
              goto LABEL_27;
          }
          else
          {
            RtlProtectHeap(LdrpMrdataHeap, 0);
            v23 = 0;
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v23 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        LdrProtectMrdata(0);
        v24 = *v34;
        if ( (*v34)[1] != v34 || (v25 = v34[1], *v25 != v34) )
          __fastfail(3u);
        *v25 = v24;
        v24[1] = v25;
        if ( v25 == v24 )
          _interlockedbittestandreset((volatile signed __int32 *)&v3->80, v4);
        LdrProtectMrdata(1);
        v26 = (void **)BaseAddress;
        BaseAddress = v34;
        *v34 = v26;
        LOBYTE(v27) = LdrControlFlowGuardEnforced();
        if ( v27 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_27;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v28 - 1;
          if ( v28 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
      }
      if ( v40 == -1 )
      {
        v5 = 1;
        break;
      }
    }
    RtlReleaseSRWLockExclusive(*v8);
    v18 = (PVOID *)BaseAddress;
    if ( BaseAddress )
    {
      LOBYTE(v20) = LdrControlFlowGuardEnforced();
      if ( v20 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v21 == -1 )
            goto LABEL_27;
        }
        else
        {
          RtlProtectHeap(LdrpMrdataHeap, 0);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v21 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v29 = v18;
        v18 = (PVOID *)*v18;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v29[2]);
        LOBYTE(v30) = LdrControlFlowGuardEnforced();
        if ( v30 )
          ProcessHeap = LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0, v29);
      }
      while ( v18 );
      LOBYTE(v32) = LdrControlFlowGuardEnforced();
      if ( !v32 )
        return v5;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v33 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v33 - 1;
        if ( v33 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v5;
      }
LABEL_27:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return v5;
}
