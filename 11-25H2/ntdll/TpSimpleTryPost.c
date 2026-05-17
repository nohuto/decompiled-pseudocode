/*
 * XREFs of TpSimpleTryPost @ 0x1800EB150
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpSimpleTryPost(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  __int64 Heap; // rax
  __int64 v8; // r9
  _QWORD *v9; // rsi
  int v10; // edi
  int v12; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+70h] [rbp+18h]

  if ( a3 )
    v6 = *(_DWORD *)(a3 + 56);
  else
    v6 = 0;
  if ( !a1 || (v6 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8u, 0xF0uLL);
    v9 = (_QWORD *)Heap;
    v14 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v10 = TppWorkInitialize(
              Heap,
              a2,
              a3,
              v6,
              (__int64)TppSimplepCleanupGroupMemberVFuncs,
              (__int64)TppSimplepTaskVFuncs);
      v12 = v10;
      if ( v10 >= 0 )
      {
        v10 = 0;
        v12 = 0;
        v9[10] = a1;
        if ( a3 )
          v9[4] = *(_QWORD *)(a3 + 48);
        if ( v9[2] )
          TppCleanupGroupAddMember((__int64)v9);
      }
    }
    else
    {
      v10 = -1073741801;
      v12 = -1073741801;
    }
    if ( v10 >= 0 )
      goto LABEL_15;
    if ( v9 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, v14, v8);
      v9 = 0LL;
      v10 = v12;
    }
    if ( v10 >= 0 )
LABEL_15:
      TppWorkPost((__int64)v9);
    return (unsigned int)v10;
  }
}
