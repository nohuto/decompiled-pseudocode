/*
 * XREFs of NvmeSetLowPriorityIoTimer @ 0x140125604
 * Callers:
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmeSetLowPriorityIoTimer(__int64 a1, LARGE_INTEGER a2, char a3)
{
  __int64 v3; // rax
  signed __int32 v4; // eax

  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v3 + 1288) && **(_DWORD **)(v3 + 1288) || *(_DWORD *)(*(_QWORD *)(a1 + 16) + 948LL) )
  {
    LOBYTE(v4) = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 264) + 40LL), 0, 1);
  }
  else if ( a3
         || (v4 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 264) + 40LL), 1, 0), v4 != 1) )
  {
    LOBYTE(v4) = KeSetTimer(*(PKTIMER *)(*(_QWORD *)(a1 + 264) + 32LL), a2, *(PKDPC *)(*(_QWORD *)(a1 + 264) + 24LL));
  }
  return v4;
}
