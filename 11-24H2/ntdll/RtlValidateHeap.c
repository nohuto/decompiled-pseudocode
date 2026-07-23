/*
 * XREFs of RtlValidateHeap @ 0x180020100
 * Callers:
 *     RtlValidateProcessHeapsCallback @ 0x18013FF60 (RtlValidateProcessHeapsCallback.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x1800203D0 (RtlpValidateHeapEntry.c)
 *     RtlUnlockHeap @ 0x180020820 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180020A10 (RtlLockHeap.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpHpSizeHeap @ 0x180059C60 (RtlpHpSizeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapValidateEvent @ 0x18011C72C (RtlpLogHeapValidateEvent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  char v6; // di
  char *v7; // rdx
  __int64 v8; // rcx
  ULONG v10; // edi
  __int64 v11; // r8
  BOOLEAN v12; // si
  ULONG v13; // edx
  int v14; // r8d
  ULONG v15; // ecx
  BOOLEAN v16; // [rsp+20h] [rbp-18h]

  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v10 = Flags & 1;
    if ( (Flags & 1) == 0 )
      RtlLockHeap(HeapHandle);
    if ( Flags )
    {
      if ( Flags == 8 )
      {
        v11 = 2LL;
      }
      else
      {
        v13 = (Flags >> 2) & 2 | 0x80000000;
        if ( (Flags & 4) == 0 )
          v13 = (Flags >> 2) & 2;
        v14 = v13 | 0x100;
        if ( (Flags & 0x100) == 0 )
          v14 = v13;
        v15 = Flags & 0xE00 | v14;
        if ( (Flags & 0xE00) == 0 )
          v15 = v14;
        v11 = v15;
        LODWORD(v11) = v15 | 0x10000000;
        if ( (Flags & 0x10) == 0 )
          v11 = v15;
      }
    }
    else
    {
      v11 = 0LL;
    }
    v12 = !BaseAddress || RtlpHpSizeHeap(HeapHandle, BaseAddress, v11) != -1;
    if ( !v10 )
      RtlUnlockHeap(HeapHandle);
    return v12;
  }
  else
  {
    v16 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v16 = ((__int64 (*)(void))qword_1801CB5E8)();
    }
    else if ( (unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlValidateHeap") )
    {
      if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v6 = 1;
      }
      if ( BaseAddress )
      {
        v7 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v7 -= 16 * (unsigned __int8)v7[14];
        v16 = RtlpValidateHeapEntry(HeapHandle, v7, "RtlValidateHeap");
      }
      else
      {
        v16 = RtlpValidateHeap(HeapHandle);
      }
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v8 = 2147353472LL;
    if ( *(_BYTE *)v8 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(HeapHandle);
    }
    return v16;
  }
}
