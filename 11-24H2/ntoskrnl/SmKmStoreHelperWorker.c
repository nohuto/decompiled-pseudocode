/*
 * XREFs of SmKmStoreHelperWorker @ 0x14045D450
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404C6288 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // bl
  LONG result; // eax
  __int64 v7; // r9
  unsigned int v8; // esi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+40h] [rbp-48h]
  __int128 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp-28h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 25, a3);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v8 = *(unsigned __int16 *)(a1 + 58);
    if ( v8 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64, v7);
    _m_prefetchw((const void *)(a1 + 56));
    v5 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v5 & 2) != 0 )
    {
      v9 = *(_OWORD *)(a1 + 80);
      v11 = *(_OWORD *)(a1 + 64);
      v10 = *(_OWORD *)(a1 + 96);
      v12 = v9;
      v14 = *(_QWORD *)(a1 + 112);
      v13 = v10;
      if ( v8 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, &v11);
        v5 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v5 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v8, &v11);
  }
  return result;
}
