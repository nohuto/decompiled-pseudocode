/*
 * XREFs of SmKmStoreHelperWorker @ 0x140452510
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404BF6E4 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // bl
  LONG result; // eax
  unsigned int v5; // esi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+40h] [rbp-48h]
  __int128 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+60h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 25);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v5 = *(unsigned __int16 *)(a1 + 58);
    if ( v5 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v3 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v3 & 2) != 0 )
    {
      v6 = *(_OWORD *)(a1 + 80);
      v8 = *(_OWORD *)(a1 + 64);
      v7 = *(_OWORD *)(a1 + 96);
      v9 = v6;
      v11 = *(_QWORD *)(a1 + 112);
      v10 = v7;
      if ( v5 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, &v8);
        v3 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v3 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v5, &v8);
  }
  return result;
}
