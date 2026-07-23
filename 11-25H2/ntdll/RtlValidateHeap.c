/*
 * XREFs of RtlValidateHeap @ 0x1800931C0
 * Callers:
 *     RtlValidateProcessHeapsCallback @ 0x1801434A0 (RtlValidateProcessHeapsCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpSizeHeap @ 0x180055D30 (RtlpHpSizeHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x180093490 (RtlpValidateHeapEntry.c)
 *     RtlUnlockHeap @ 0x1800938E0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180093AD0 (RtlLockHeap.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapValidateEvent @ 0x18011FDCC (RtlpLogHeapValidateEvent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  char v6; // di
  char *v7; // rdx
  __int64 v8; // rcx
  ULONG v10; // edi
  int v11; // r8d
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
        v11 = 2;
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
        v11 = v15 | 0x10000000;
        if ( (Flags & 0x10) == 0 )
          v11 = v15;
      }
    }
    else
    {
      v11 = 0;
    }
    v12 = !BaseAddress || RtlpHpSizeHeap((__int64)HeapHandle, (unsigned __int64)BaseAddress, v11) != -1;
    if ( !v10 )
      RtlUnlockHeap(HeapHandle);
    return v12;
  }
  else
  {
    v16 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v16 = ((__int64 (*)(void))qword_1801CE5E8)();
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
        v16 = RtlpValidateHeap((int)HeapHandle);
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
