/*
 * XREFs of RtlValidateHeap @ 0x18003F7D0
 * Callers:
 *     RtlValidateProcessHeapsCallback @ 0x180141DB0 (RtlValidateProcessHeapsCallback.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpHpSizeHeap @ 0x18002D260 (RtlpHpSizeHeap.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18003FAA0 (RtlpValidateHeapEntry.c)
 *     RtlUnlockHeap @ 0x18003FEF0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x1800400E0 (RtlLockHeap.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapValidateEvent @ 0x18011E4FC (RtlpLogHeapValidateEvent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlValidateHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // edi
  int v15; // r8d
  bool v16; // si
  unsigned int v17; // edx
  int v18; // r8d
  int v19; // ecx
  unsigned __int8 v20; // [rsp+20h] [rbp-18h]

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v14 = a2 & 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap(a1);
    if ( a2 )
    {
      if ( a2 == 8 )
      {
        v15 = 2;
      }
      else
      {
        v17 = (a2 >> 2) & 2 | 0x80000000;
        if ( (a2 & 4) == 0 )
          v17 = (a2 >> 2) & 2;
        v18 = v17 | 0x100;
        if ( (a2 & 0x100) == 0 )
          v18 = v17;
        v19 = a2 & 0xE00 | v18;
        if ( (a2 & 0xE00) == 0 )
          v19 = v18;
        v15 = v19 | 0x10000000;
        if ( (a2 & 0x10) == 0 )
          v15 = v19;
      }
    }
    else
    {
      v15 = 0;
    }
    v16 = !a3 || RtlpHpSizeHeap(a1, a3, v15) != -1;
    if ( !v14 )
      RtlUnlockHeap(a1);
    return v16;
  }
  else
  {
    v20 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v20 = ((__int64 (*)(void))qword_1801CC5E8)();
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
        v11 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
        v20 = RtlpValidateHeapEntry(a1, v11, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v7) = 1;
        v20 = RtlpValidateHeap(a1, v7);
      }
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7, v9, v10) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(a1);
    }
    return v20;
  }
}
