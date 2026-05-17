/*
 * XREFs of TpAllocIoCompletion @ 0x1800BF6A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18001C7C0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppGetCurrentThreadNumaNode @ 0x18006EE30 (TppGetCurrentThreadNumaNode.c)
 *     TpBindFileToDirect @ 0x1800BF8D0 (TpBindFileToDirect.c)
 */

__int64 __fastcall TpAllocIoCompletion(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // edi
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  _DWORD *v14; // r14
  _BYTE *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v19; // [rsp+70h] [rbp+8h]

  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( a1 && a2 && a3 && (v9 & 0xFFFFFFFC) == 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8u, 0x120uLL);
    v11 = Heap;
    v19 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(Heap, a4, a5, v9, (__int64)TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = a3;
        *(_QWORD *)(v11 + 272) = a2;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        v14 = (_DWORD *)(v11 + 264);
        v15 = (_BYTE *)(v11 + 268);
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, (volatile signed __int32 **)(v11 + 264), (_BYTE *)(v11 + 268), 0LL);
        }
        else
        {
          *v14 = 0;
          *v15 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = *v14;
        *(_BYTE *)(v11 + 212) = *v15;
        v12 = TpBindFileToDirect(a2, v11 + 200, *(_QWORD *)(v11 + 144));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( a5 )
            *(_QWORD *)(v11 + 32) = *(_QWORD *)(a5 + 48);
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy((_QWORD *)v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_22;
    if ( v11 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, v19);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_22:
      *a1 = v11;
    return (unsigned int)v12;
  }
  else
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
}
