/*
 * XREFs of TppAllocAlpcCompletion @ 0x1800BF374
 * Callers:
 *     TpAllocAlpcCompletion @ 0x1800BF2C0 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x1800BF350 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18001C7C0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppGetCurrentThreadNumaNode @ 0x18006EE30 (TppGetCurrentThreadNumaNode.c)
 *     TpAdjustBindingCount @ 0x1800BF960 (TpAdjustBindingCount.c)
 *     NtAlpcSetInformation @ 0x180162E60 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int v9; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  _BYTE *v16; // r15
  __int64 v17; // r15
  int v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v22; // [rsp+80h] [rbp+8h]

  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !a1 || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  *a1 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8u, 0x128uLL);
  v11 = Heap;
  v22 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 248) = retaddr;
    v12 = (_QWORD *)(Heap + 72);
    v13 = TppCleanupGroupMemberInitialize(Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v19 = v13;
    if ( v13 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 288) = *(_DWORD *)(v11 + 288) & 0xFFFFFFFE | (a6 != 0);
      *(_QWORD *)(v11 + 272) = a2;
      v14 = *(_QWORD *)(v11 + 216);
      *(_QWORD *)(v11 + 56) = TppAlpcpExecuteCallback;
      v15 = (_DWORD *)(v11 + 64);
      v16 = (_BYTE *)(v11 + 68);
      if ( v14 )
      {
        TppGetCurrentThreadNumaNode(v14, (volatile signed __int32 **)(v11 + 64), (_BYTE *)(v11 + 68), 0LL);
      }
      else
      {
        *v15 = 0;
        *v16 = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = TppDirectTaskVFuncs;
      *(_DWORD *)(v11 + 8) = *v15;
      *(_BYTE *)(v11 + 12) = *v16;
      v17 = *(_QWORD *)(v11 + 216);
      v20 = 0LL;
      if ( v17 )
      {
        if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        {
          *((_QWORD *)&v20 + 1) = *(_QWORD *)(v17 + 64);
          v11 = v22;
          *(_QWORD *)&v20 = v22;
          v13 = NtAlpcSetInformation(a2, 2LL, &v20);
          if ( v13 >= 0 )
          {
            TpAdjustBindingCount(v17, 1LL);
            v13 = 0;
          }
          goto LABEL_16;
        }
        v11 = v22;
      }
      TppRaiseInvalidParameter();
      v13 = -1073741811;
LABEL_16:
      v19 = v13;
      if ( v13 >= 0 )
      {
        v13 = 0;
        v19 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember((__int64)v12);
      }
      if ( v13 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v13 = -1073741801;
    v19 = -1073741801;
  }
  if ( v13 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v22);
    v11 = 0LL;
    v13 = v19;
  }
  if ( v13 >= 0 )
LABEL_28:
    *a1 = v11;
  return (unsigned int)v13;
}
