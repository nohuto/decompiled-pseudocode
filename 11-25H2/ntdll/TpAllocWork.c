/*
 * XREFs of TpAllocWork @ 0x180046F70
 * Callers:
 *     RtlpFcAllocateChangeRegistration @ 0x180003278 (RtlpFcAllocateChangeRegistration.c)
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 *     RtlpCtContextInit @ 0x180148F94 (RtlpCtContextInit.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall TpAllocWork(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // edi
  __int64 Heap; // rax
  _QWORD *v10; // rsi
  int v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+88h] [rbp+20h]

  if ( a4 )
    v8 = *(_DWORD *)(a4 + 56);
  else
    v8 = 0;
  if ( !a1 || !a2 || (v8 & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    v10 = (_QWORD *)Heap;
    v15 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v11 = TppWorkInitialize(Heap, a3, a4, v8, (__int64)TppWorkpCleanupGroupMemberVFuncs, (__int64)TppWorkpTaskVFuncs);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v10[10] = a2;
        v11 = 0;
        v13 = 0;
        if ( a4 )
          v10[4] = *(_QWORD *)(a4 + 48);
        if ( v10[2] )
          TppCleanupGroupAddMember((__int64)v10);
      }
    }
    else
    {
      v11 = -1073741801;
      v13 = -1073741801;
    }
    if ( v11 >= 0 )
      goto LABEL_15;
    if ( v10 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), v15);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *a1 = v10;
    return (unsigned int)v11;
  }
}
