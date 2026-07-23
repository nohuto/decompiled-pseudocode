/*
 * XREFs of RtlpTpWorkUnposted @ 0x18008BF40
 * Callers:
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 * Callees:
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlpTpDeleteData @ 0x18008A1E0 (RtlpTpDeleteData.c)
 *     RtlTpETWCallbackDequeue @ 0x18008BE0C (RtlTpETWCallbackDequeue.c)
 *     TppPoolpFree @ 0x1800D9FB4 (TppPoolpFree.c)
 */

LOGICAL __fastcall RtlpTpWorkUnposted(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  PVOID v6; // rcx
  _RTL_SRWLOCK *v7; // rdx
  const void **v8; // rcx
  _ACTIVATION_CONTEXT *v9; // rcx
  void *v10; // rcx

  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    RtlTpETWCallbackDequeue(v4, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v5 = 0;
  if ( !a2 && (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
    v5 = 2;
  v6 = *(PVOID *)(a1 + 32);
  if ( !v6 )
  {
    v6 = (PVOID)TppPoolpGlobalPool;
    if ( v5 )
      v6 = TppPoolpSerializedPool;
  }
  if ( v6 == (PVOID)TppPoolpGlobalPool )
  {
    v7 = &TppPoolpGlobalPoolLock;
    v8 = (const void **)&TppPoolpGlobalPool;
LABEL_16:
    TppPoolpDereferenceGlobalPool(v8, v7);
    goto LABEL_17;
  }
  if ( v6 == TppPoolpSerializedPool )
  {
    v7 = &TppPoolpSerializedPoolLock;
    v8 = (const void **)&TppPoolpSerializedPool;
    goto LABEL_16;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
    TppPoolpFree(v6);
LABEL_17:
  RtlpTpDeleteData((void **)(a1 + 40));
  v9 = *(_ACTIVATION_CONTEXT **)(a1 + 72);
  if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v9);
  v10 = *(void **)(a1 + 80);
  if ( v10 )
    LdrUnloadDll(v10);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
