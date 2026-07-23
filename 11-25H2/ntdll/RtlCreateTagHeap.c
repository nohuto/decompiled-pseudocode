/*
 * XREFs of RtlCreateTagHeap @ 0x1800341B0
 * Callers:
 *     TpInitializePackage @ 0x1800340DC (TpInitializePackage.c)
 *     CsrClientConnectToServer @ 0x1800355E0 (CsrClientConnectToServer.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlDebugCreateTagHeap @ 0x180145F94 (RtlDebugCreateTagHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlStringCbCopyW @ 0x1800DE4E0 (RtlStringCbCopyW.c)
 *     RtlpAllocateTags @ 0x180143538 (RtlpAllocateTags.c)
 *     RtlDebugCreateTagHeap @ 0x180145F94 (RtlDebugCreateTagHeap.c)
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
  const wchar_t *v19; // r8
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r10
  char v26; // [rsp+20h] [rbp-68h]

  v6 = 0LL;
  v26 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = (__int64)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x2C0uLL);
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
LABEL_47:
      TagHeap = v10 << 18;
      goto LABEL_48;
    }
    v18 = 23LL;
    v10 = *(unsigned __int16 *)(Tags + 16);
    if ( *(_WORD *)(Tags + 16) )
    {
      if ( v10 != 2048 )
        goto LABEL_32;
      v19 = L"GlobalTags";
    }
    else
    {
      if ( !v13 )
      {
LABEL_31:
        v17 += 72LL;
        v10 = *(unsigned __int16 *)(v17 + 16);
LABEL_32:
        if ( !TagPrefix )
          goto LABEL_40;
        v21 = -1LL;
        do
          ++v21;
        while ( TagPrefix[v21] );
        v22 = v21;
        if ( v21 )
        {
          if ( v21 < 0x13 )
            v18 = 23 - v21;
          else
            v21 = 0LL;
          v6 = (unsigned __int64)TagPrefix & -(__int64)(v22 < 0x13);
        }
        else
        {
LABEL_40:
          v21 = 0LL;
        }
        while ( *v12 )
        {
          v23 = v17 + 20;
          if ( v6 )
          {
            RtlStringCbCopyW(v17 + 20, 2 * v18, v6);
            v23 += 2 * v21;
          }
          RtlStringCbCopyW(v23, 2 * (v18 - v21), v12);
          while ( *v12++ )
            ;
          v17 = v24 + 72;
        }
        goto LABEL_47;
      }
      v19 = v13;
    }
    RtlStringCbCopyW(Tags + 20, 46LL, v19);
    goto LABEL_31;
  }
  v8 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v8 & 0x61000000) == 0 || (v8 & 0x10000000) != 0 )
  {
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v26 = 1;
    }
    goto LABEL_14;
  }
  TagHeap = RtlDebugCreateTagHeap((int)HeapHandle);
LABEL_48:
  if ( v26 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
