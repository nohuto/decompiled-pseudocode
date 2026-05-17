/*
 * XREFs of RtlpTpWorkUnposted @ 0x18006F660
 * Callers:
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 * Callees:
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlpTpDeleteData @ 0x18006D900 (RtlpTpDeleteData.c)
 *     RtlTpETWCallbackDequeue @ 0x18006F52C (RtlTpETWCallbackDequeue.c)
 *     TppPoolpFree @ 0x1800DEE44 (TppPoolpFree.c)
 */

__int64 __fastcall RtlpTpWorkUnposted(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rdx
  __int64 *v8; // rcx
  volatile signed __int32 *v9; // rcx
  unsigned __int64 v10; // rcx

  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    RtlTpETWCallbackDequeue(v4, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v5 = 0;
  if ( !a2 && (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
    v5 = 2;
  v6 = *(volatile signed __int32 **)(a1 + 32);
  if ( !v6 )
  {
    v6 = (volatile signed __int32 *)TppPoolpGlobalPool;
    if ( v5 )
      v6 = (volatile signed __int32 *)TppPoolpSerializedPool;
  }
  if ( v6 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v7 = (volatile signed __int32 *)&TppPoolpGlobalPoolLock;
    v8 = &TppPoolpGlobalPool;
LABEL_16:
    TppPoolpDereferenceGlobalPool((const void **)v8, v7);
    goto LABEL_17;
  }
  if ( v6 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v7 = (volatile signed __int32 *)&TppPoolpSerializedPoolLock;
    v8 = &TppPoolpSerializedPool;
    goto LABEL_16;
  }
  if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    TppPoolpFree(v6);
LABEL_17:
  RtlpTpDeleteData((void **)(a1 + 40));
  v9 = *(volatile signed __int32 **)(a1 + 72);
  if ( v9 != (volatile signed __int32 *)-1LL )
    RtlReleaseActivationContext(v9);
  v10 = *(_QWORD *)(a1 + 80);
  if ( v10 )
    LdrUnloadDll(v10);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
