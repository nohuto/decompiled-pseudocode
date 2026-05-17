/*
 * XREFs of TpSimpleTryPost @ 0x18006A740
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TppWorkInitialize @ 0x18001A6B0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18001C7C0 (TppCleanupGroupAddMember.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpSimpleTryPost(_PEB_LDR_DATA *Ldr, int a2, __int64 a3)
{
  _PEB_LDR_DATA *v5; // r14
  int v6; // edi
  __int64 Heap; // rax
  volatile signed __int32 **v8; // rdx
  __int64 v9; // r8
  char *v10; // r9
  _QWORD *v11; // rsi
  int v12; // edi
  int v14; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v16; // [rsp+70h] [rbp+18h]

  v5 = Ldr;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 56);
  else
    v6 = 0;
  if ( !Ldr || (v6 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8u, 0xF0uLL);
    v11 = (_QWORD *)Heap;
    v16 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v12 = TppWorkInitialize(
              Heap,
              a2,
              a3,
              v6,
              (__int64)TppSimplepCleanupGroupMemberVFuncs,
              (__int64)TppSimplepTaskVFuncs);
      v14 = v12;
      if ( v12 >= 0 )
      {
        v12 = 0;
        v14 = 0;
        v11[10] = v5;
        if ( a3 )
          v11[4] = *(_QWORD *)(a3 + 48);
        if ( v11[2] )
          TppCleanupGroupAddMember((__int64)v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v14 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_15;
    if ( v11 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, v16);
      v11 = 0LL;
      v12 = v14;
    }
    if ( v12 >= 0 )
LABEL_15:
      TppWorkPost((unsigned __int64)v11, v8, v9, v10);
    return (unsigned int)v12;
  }
}
