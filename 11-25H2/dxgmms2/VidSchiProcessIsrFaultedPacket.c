/*
 * XREFs of VidSchiProcessIsrFaultedPacket @ 0x1400500C4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x140005720 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 */

// write access to const memory has been detected, the output may be wrong!
PSLIST_ENTRY __fastcall VidSchiProcessIsrFaultedPacket(__int64 a1, int a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rsi
  __int64 v8; // r9
  __int64 v9; // rdi
  PSLIST_ENTRY result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v23; // [rsp+50h] [rbp-28h]

  v5 = *(_QWORD *)(a1 + 24);
  *a5 = 0LL;
  if ( *(_DWORD *)(a1 + 64) != a2 && *(_DWORD *)(a1 + 72) != a2 )
  {
    v8 = *(unsigned int *)(a1 + 1428);
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1440);
    result = *(PSLIST_ENTRY *)(v9 + 48);
    v11 = *((_QWORD *)&result[6].Next + 1);
    *a5 = v11;
    if ( v11 == *(_QWORD *)(v5 + 256) || v11 == *(_QWORD *)(v5 + 312) )
    {
      if ( !*(_BYTE *)(v5 + 53) )
      {
        v21 = *(unsigned int *)(v9 + 104);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 5LL, v5, v11, v21);
        WdLogGlobalForLineNumber = 906;
        JUMPOUT(0x140050341LL);
      }
      *(_DWORD *)(a1 + 2152) = 1;
      *(_BYTE *)(a1 + 2145) = 1;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 1428), ((_BYTE)v8 + 1) & 0xF);
      v12 = *(unsigned int *)(a1 + 1572);
      *(_DWORD *)(a1 + 516) = ((unsigned __int8)*(_DWORD *)(a1 + 516) + 1) & 0xF;
      v13 = *(_QWORD *)(a1 + 8 * v12 + 1584);
      v14 = ((_BYTE)v12 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1572), ((_BYTE)v12 + 1) & 0xF);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(v9 + 104);
      v15 = *(_QWORD *)(v9 + 104);
      *(_QWORD *)(a1 + 64) = v15;
      *(_QWORD *)(a1 + 72) = v15;
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(v9 + 104);
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++*(_QWORD *)(v5 + 488);
      }
      *(_DWORD *)(v9 + 92) ^= ((unsigned __int8)*(_DWORD *)(v9 + 92) ^ (unsigned __int8)((_BYTE)a3 << 6)) & 0x40;
      v16 = *(_QWORD *)(v9 + 56) == 0LL;
      *(_QWORD *)(v9 + 80) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(v9 + 72) = 18;
      if ( !v16 )
      {
        *(_QWORD *)(*(_QWORD *)(v9 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)(v9 + 56) + 52LL) = 18;
      }
      v17 = *(_DWORD *)a4;
      v22[0] = 0LL;
      *(_DWORD *)(v9 + 16) = v17;
      v18 = *(_QWORD *)(a4 + 16);
      v19 = *(_QWORD *)(v13 + 104);
      v23 = 0LL;
      v22[1] = v13;
      *(_QWORD *)(v19 + 208) = v18;
      *(_DWORD *)(*(_QWORD *)(v13 + 104) + 216LL) = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(*(_QWORD *)(v13 + 104) + 220LL) = *(_DWORD *)(a4 + 28);
      *(_DWORD *)(*(_QWORD *)(v13 + 104) + 224LL) = *(_DWORD *)(a4 + 32);
      *(_QWORD *)(*(_QWORD *)(v13 + 104) + 232LL) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(*(_QWORD *)(v13 + 104) + 228LL) = *(_DWORD *)(a4 + 60);
      VidSchiUpdateContextRunningTimeAtISR(v22);
      v20 = *(_QWORD *)(a1 + 8 * v14 + 1584);
      if ( v20 )
      {
        if ( v20 != v13 )
          *(_QWORD *)(v20 + 464) = *(_QWORD *)(v13 + 464);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 3020));
      VidSchiProfilePerformanceTick(12, v5, a1, 0LL, 0LL, 0LL, v9, a4);
      return ExpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 2032), (PSLIST_ENTRY)(v9 + 32));
    }
  }
  return result;
}
