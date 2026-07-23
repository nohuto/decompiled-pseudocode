/*
 * XREFs of RtlpTpWorkCallback @ 0x18008C070
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     TppCompleteThreadData @ 0x18004BE20 (TppCompleteThreadData.c)
 *     TpCallbackMayRunLong @ 0x18004EA40 (TpCallbackMayRunLong.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EB60 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     RtlpTpImpersonate @ 0x18008BBF0 (RtlpTpImpersonate.c)
 *     RtlpTpETWCallbackStop @ 0x18008BC7C (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18008BD44 (RtlpTpETWCallbackStart.c)
 *     RtlTpETWCallbackDequeue @ 0x18008BE0C (RtlTpETWCallbackDequeue.c)
 *     TpDereferenceGlobalPool @ 0x18008BED8 (TpDereferenceGlobalPool.c)
 *     RtlpTpWorkUnposted @ 0x18008BF40 (RtlpTpWorkUnposted.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800E92A8 (TpPoolReferenceExistingGlobalPool.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpWorkCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rcx
  _TP_POOL *v7; // rax
  __int64 v8; // rcx
  void (__cdecl *v9)(PRTL_SRWLOCK); // r12
  _ACTIVATION_CONTEXT *v10; // rdi
  void *v11; // r14
  void *v12; // rsi
  __int64 v13; // rcx
  void *SubProcessTag; // rdx
  _QWORD *ThreadPoolData; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD ThreadInformation[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v20; // [rsp+60h] [rbp-78h]
  __int128 v21; // [rsp+70h] [rbp-68h]
  __int128 v22; // [rsp+80h] [rbp-58h]
  __int64 v23; // [rsp+90h] [rbp-48h]
  _RTL_SRWLOCK *SRWLock; // [rsp+E8h] [rbp+10h]
  void (__cdecl **v25)(PRTL_SRWLOCK); // [rsp+F0h] [rbp+18h]

  v19[0] = 72LL;
  v19[1] = 1LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    RtlTpETWCallbackDequeue(v6, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_DWORD *)(a2 + 48) & 0xD0) == 0x10 )
  {
    v7 = *(_TP_POOL **)(a2 + 32);
    if ( !v7 )
    {
      v7 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
      v4 = (__int64)v7;
    }
    Instance->Pool = v7;
    TpCallbackMayRunLong(Instance);
  }
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
    RtlpTpImpersonate(v8);
  v9 = *(void (__cdecl **)(PRTL_SRWLOCK))(a2 + 56);
  SRWLock = *(_RTL_SRWLOCK **)(a2 + 64);
  v10 = *(_ACTIVATION_CONTEXT **)(a2 + 72);
  ThreadInformation[1] = v10;
  v11 = *(void **)(a2 + 80);
  ThreadInformation[2] = v11;
  v12 = *(void **)(a2 + 96);
  ThreadInformation[3] = v12;
  if ( v12 )
    RtlSetThreadSubProcessTag(v12);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v11 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast(v19, v10);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    RtlpTpETWCallbackStart(0LL, a2, (__int64)v9, (__int64)SRWLock, (__int64)v12);
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v16 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    *((_DWORD *)ThreadPoolData + 3) = v16;
    v17 = (unsigned int)v16;
    v16 *= 32LL;
    v25 = (void (__cdecl **)(PRTL_SRWLOCK))((char *)ThreadPoolData + v16 + 32);
    *v25 = v9;
    *(_QWORD *)((char *)ThreadPoolData + v16 + 40) = SRWLock;
    *(_QWORD *)((char *)ThreadPoolData + v16 + 48) = SubProcessTag;
    ThreadPoolData[4 * v17 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v25 = 0LL;
  }
  if ( v9 == RtlAcquireSRWLockExclusive )
  {
    RtlAcquireSRWLockExclusive(SRWLock);
  }
  else if ( v9 == RtlAcquireSRWLockShared )
  {
    RtlAcquireSRWLockShared(SRWLock);
  }
  else
  {
    ((void (__fastcall *)(_RTL_SRWLOCK *))v9)(SRWLock);
  }
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)v19);
    RtlReleaseActivationContext(v10);
  }
  if ( v11 )
    LdrUnloadDll(v11);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation[0] = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, ThreadInformation, 8u);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v12 )
    RtlSetThreadSubProcessTag(0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v5 )
    RtlpTpETWCallbackStop(0LL, a2, (__int64)v9, (__int64)SRWLock, (__int64)v12);
  TppCompleteThreadData((__int64)v25);
}
