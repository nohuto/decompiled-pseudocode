/*
 * XREFs of RtlCreateTagHeap @ 0x180022EE0
 * Callers:
 *     TpInitializePackage @ 0x180022E0C (TpInitializePackage.c)
 *     CsrClientConnectToServer @ 0x180023B90 (CsrClientConnectToServer.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x180142DD4 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlStringCbCopyW @ 0x1800DC690 (RtlStringCbCopyW.c)
 *     RtlpAllocateTags @ 0x18013FFF8 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x180142DD4 (RtlDebugCreateTagHeap.c)
 */

ULONG __cdecl RtlCreateTagHeap(PVOID HeapHandle, ULONG Flags, PWSTR TagPrefix, PWSTR TagNames)
{
  unsigned __int64 v6; // r15
  ULONG v8; // edx
  ULONG TagHeap; // ebx
  int v10; // ebx
  int v11; // edx
  PWSTR v12; // rdi
  PWSTR v13; // r14
  PWSTR v15; // rcx
  __int64 Tags; // rax
  __int64 v17; // r10
  __int64 v18; // r12
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r10
  char v25; // [rsp+20h] [rbp-68h]

  v6 = 0LL;
  v25 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = (__int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x2C8uLL);
    if ( !RtlpGlobalTagHeap )
      return 0;
  }
  if ( HeapHandle && (*((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0) )
    return 0;
  if ( !HeapHandle )
  {
LABEL_14:
    v10 = 0;
    v11 = 0;
    v12 = TagNames;
    if ( *TagNames == 33 )
    {
      v13 = TagNames + 1;
      while ( *v12++ )
        ;
    }
    else
    {
      v13 = 0LL;
    }
    v15 = v12;
    while ( *v15 )
    {
      while ( *v15++ )
        ;
      ++v11;
    }
    if ( !v11 || (Tags = RtlpAllocateTags(HeapHandle), (v17 = Tags) == 0) )
    {
LABEL_46:
      TagHeap = v10 << 18;
      goto LABEL_47;
    }
    v18 = 23LL;
    v10 = *(unsigned __int16 *)(Tags + 16);
    if ( *(_WORD *)(Tags + 16) )
    {
      if ( v10 != 2048 )
        goto LABEL_31;
    }
    else if ( !v13 )
    {
LABEL_30:
      v17 += 72LL;
      v10 = *(unsigned __int16 *)(v17 + 16);
LABEL_31:
      if ( !TagPrefix )
        goto LABEL_39;
      v20 = -1LL;
      do
        ++v20;
      while ( TagPrefix[v20] );
      v21 = v20;
      if ( v20 )
      {
        if ( v20 < 0x13 )
          v18 = 23 - v20;
        else
          v20 = 0LL;
        v6 = (unsigned __int64)TagPrefix & -(__int64)(v21 < 0x13);
      }
      else
      {
LABEL_39:
        v20 = 0LL;
      }
      while ( *v12 )
      {
        v22 = v17 + 20;
        if ( v6 )
        {
          RtlStringCbCopyW(v17 + 20, 2 * v18);
          v22 += 2 * v20;
        }
        RtlStringCbCopyW(v22, 2 * (v18 - v20));
        while ( *v12++ )
          ;
        v17 = v23 + 72;
      }
      goto LABEL_46;
    }
    RtlStringCbCopyW(Tags + 20, 46LL);
    goto LABEL_30;
  }
  v8 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v8 & 0x61000000) == 0 || (v8 & 0x10000000) != 0 )
  {
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v25 = 1;
    }
    goto LABEL_14;
  }
  TagHeap = RtlDebugCreateTagHeap(HeapHandle);
LABEL_47:
  if ( v25 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
