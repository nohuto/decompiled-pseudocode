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

__int64 __fastcall RtlValidateHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v6; // di
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // edi
  int v12; // r8d
  bool v13; // si
  unsigned int v14; // edx
  int v15; // r8d
  int v16; // ecx
  unsigned __int8 v17; // [rsp+20h] [rbp-18h]

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v11 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap();
    if ( a2 )
    {
      if ( a2 == 8 )
      {
        v12 = 2;
      }
      else
      {
        v14 = (a2 >> 2) & 2 | 0x80000000;
        if ( (a2 & 4) == 0 )
          v14 = (a2 >> 2) & 2;
        v15 = v14 | 0x100;
        if ( (a2 & 0x100) == 0 )
          v15 = v14;
        v16 = a2 & 0xE00 | v15;
        if ( (a2 & 0xE00) == 0 )
          v16 = v15;
        v12 = v16 | 0x10000000;
        if ( (a2 & 0x10) == 0 )
          v12 = v16;
      }
    }
    else
    {
      v12 = 0;
    }
    v13 = !a3 || RtlpHpSizeHeap(a1, a3, v12) != -1;
    if ( !v11 )
      RtlUnlockHeap(a1);
    return v13;
  }
  else
  {
    v17 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v17 = ((__int64 (*)(void))qword_1801CE5E8)();
    }
    else if ( (unsigned __int8)RtlpCheckHeapSignature(a1, "RtlValidateHeap") )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)a2) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = 1;
      }
      if ( a3 )
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        v17 = RtlpValidateHeapEntry(a1, v8, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v7) = 1;
        v17 = RtlpValidateHeap(a1, v7);
      }
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v9 = 2147353472LL;
    if ( *(_BYTE *)v9 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(a1);
    }
    return v17;
  }
}
