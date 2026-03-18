/*
 * XREFs of VidSchiProcessIsrPreemptedPacket @ 0x14000504C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x140005720 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 */

void __fastcall VidSchiProcessIsrPreemptedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  union _SLIST_HEADER *v5; // rsi
  unsigned __int8 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+50h] [rbp-48h]
  unsigned int v21; // [rsp+A8h] [rbp+10h]

  v5 = *(union _SLIST_HEADER **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 112) != a2 )
  {
    v8 = (_BYTE)a3 << 6;
    do
    {
      v9 = *(unsigned int *)(a1 + 1428);
      v10 = *(_QWORD *)(a1 + 8 * v9 + 1440);
      _InterlockedExchange((volatile __int32 *)(a1 + 1428), ((_BYTE)v9 + 1) & 0xF);
      v11 = *(unsigned int *)(a1 + 1572);
      *(_DWORD *)(a1 + 516) = ((unsigned __int8)*(_DWORD *)(a1 + 516) + 1) & 0xF;
      v12 = *(_QWORD *)(a1 + 8 * v11 + 1584);
      v21 = ((_BYTE)v11 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1572), v21);
      v13 = *(_QWORD *)(v10 + 104);
      if ( *(_DWORD *)(v10 + 88) == 3 )
      {
        *(_QWORD *)(a1 + 112) = v13;
        v16 = 8;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 10;
        *(_DWORD *)(v10 + 16) = 1;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 3032));
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v13;
        v14 = *(_QWORD *)(v10 + 104);
        ++*(_DWORD *)(a1 + 3036);
        *(_QWORD *)(a1 + 80) = v14;
        v15 = *(_QWORD *)(v10 + 56) == 0LL;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 11;
        *(_DWORD *)(v10 + 16) = 2;
        if ( !v15 )
        {
          *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 11;
        }
        v16 = 10;
      }
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v5[30].Region;
      }
      v17 = *(_DWORD *)(v10 + 92);
      v19[0] = 0LL;
      v19[1] = v12;
      *(_DWORD *)(v10 + 92) = v17 ^ ((unsigned __int8)v17 ^ v8) & 0x40;
      v20 = 0LL;
      VidSchiUpdateContextRunningTimeAtISR(v19, 0xFFFFF78000000320uLL);
      v18 = *(_QWORD *)(a1 + 8LL * v21 + 1584);
      if ( v18 )
      {
        if ( v18 != v12 )
          *(_QWORD *)(v18 + 464) = *(_QWORD *)(v12 + 464);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 3020));
      VidSchiProfilePerformanceTick(v16, (_DWORD)v5, a1, 0, 0LL, 0LL, v10, a4);
      ExpInterlockedPushEntrySList(v5 + 127, (PSLIST_ENTRY)(v10 + 32));
    }
    while ( *(_DWORD *)(a1 + 112) != a2 );
  }
}
