/*
 * XREFs of TppAllocAlpcCompletion @ 0x18003A624
 * Callers:
 *     TpAllocAlpcCompletionEx @ 0x18003A600 (TpAllocAlpcCompletionEx.c)
 *     TpAllocAlpcCompletion @ 0x180110640 (TpAllocAlpcCompletion.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003B580 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003D250 (TppGetCurrentThreadNumaNode.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtAlpcSetInformation @ 0x1801643F0 (NtAlpcSetInformation.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, int a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  __int64 Heap; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  _PEB_LDR_DATA *v16; // rcx
  _DWORD *v17; // rbx
  _BYTE *v18; // r15
  __int64 v19; // r15
  int v21; // [rsp+30h] [rbp-48h]
  __int128 v22; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  v11 = Heap;
  v24 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 248) = retaddr;
    v12 = Heap + 72;
    v14 = TppCleanupGroupMemberInitialize((int)Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v21 = v14;
    if ( v14 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 288) = *(_DWORD *)(v11 + 288) & 0xFFFFFFFE | (a6 != 0);
      *(_QWORD *)(v11 + 272) = a2;
      v16 = *(_PEB_LDR_DATA **)(v11 + 216);
      *(_QWORD *)(v11 + 56) = TppAlpcpExecuteCallback;
      v17 = (_DWORD *)(v11 + 64);
      v18 = (_BYTE *)(v11 + 68);
      if ( v16 )
      {
        TppGetCurrentThreadNumaNode(v16, v11 + 64, v11 + 68, 0LL);
      }
      else
      {
        *v17 = 0;
        *v18 = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = TppDirectTaskVFuncs;
      *(_DWORD *)(v11 + 8) = *v17;
      *(_BYTE *)(v11 + 12) = *v18;
      v19 = *(_QWORD *)(v11 + 216);
      v22 = 0LL;
      if ( v19 )
      {
        v16 = NtCurrentPeb()->Ldr;
        if ( !v16->ShutdownInProgress )
        {
          *((_QWORD *)&v22 + 1) = *(_QWORD *)(v19 + 64);
          v11 = v24;
          *(_QWORD *)&v22 = v24;
          v14 = NtAlpcSetInformation(a2, 2LL, &v22);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v19, 1LL);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = v24;
      }
      TppRaiseInvalidParameter(v16, v13, v15);
      v14 = -1073741811;
LABEL_16:
      v21 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v21 = 0;
        if ( a5 )
          *(_QWORD *)(v12 + 32) = *(_QWORD *)(a5 + 48);
        if ( *(_QWORD *)(v12 + 16) )
          TppCleanupGroupAddMember(v12);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v21 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x80000), v24);
    v11 = 0LL;
    v14 = v21;
  }
  if ( v14 >= 0 )
LABEL_28:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
