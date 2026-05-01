/*
 * XREFs of HamCreateActivityEx @ 0x180009820
 * Callers:
 *     HamCreateActivity @ 0x1800097F0 (HamCreateActivity.c)
 * Callees:
 *     HamFreeBuffer @ 0x1800091E0 (HamFreeBuffer.c)
 *     HampIpcChannelAddCallbackUnsafe @ 0x180009AC0 (HampIpcChannelAddCallbackUnsafe.c)
 */

__int64 __fastcall HamCreateActivityEx(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  _QWORD *v9; // r13
  _QWORD *Heap; // rax
  int Pointer; // ebx
  __int64 v12; // rbx
  int v13; // edi
  int v14; // esi
  void *v15; // r14
  __int64 v16; // rbx
  ULONG v18; // eax
  ULONG v19; // [rsp+30h] [rbp-98h]
  __int64 v20; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+E0h] [rbp+18h]
  __int64 v22; // [rsp+E8h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v9 = 0LL;
  v20 = -1LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = a1 + 3;
    Heap[7] = a2;
    Heap[6] = -1LL;
    v9 = Heap;
    Pointer = 0;
  }
  else
  {
    Pointer = -1073741801;
  }
  if ( Pointer >= 0 )
  {
    v12 = *(_QWORD *)(a3 + 544);
    v13 = *(_DWORD *)(a3 + 536);
    v14 = *(_DWORD *)(a3 + 532);
    if ( a1[1] )
    {
      v18 = RtlLengthSid((PSID)(a3 + 464));
      Pointer = HampInProcCreateActivity(a1[1], v21, a3 + 464, v18, v14, v13, v12, v22, a5, &v20);
    }
    else
    {
      v15 = (void *)(a3 + 464);
      v19 = RtlLengthSid(v15);
      Pointer = (unsigned int)NdrClientCall3(
                                (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                                3u,
                                0LL,
                                *a1,
                                v21,
                                v15,
                                v19,
                                v14,
                                v13,
                                v12,
                                v22,
                                a5,
                                &v20).Pointer;
    }
    if ( Pointer >= 0 )
    {
      v9[6] = v20;
      v16 = v9[5];
      RtlAcquireSRWLockExclusive(v16 + 8);
      *(_DWORD *)(v16 + 16) = GetCurrentThreadId();
      HampIpcChannelAddCallbackUnsafe(v9);
      *(_DWORD *)(v16 + 16) = 0;
      RtlReleaseSRWLockExclusive(v16 + 8);
      v9 = 0LL;
      *a6 = v20;
      Pointer = 0;
    }
  }
  if ( v9 )
    HamFreeBuffer(v9);
  return (unsigned int)Pointer;
}
