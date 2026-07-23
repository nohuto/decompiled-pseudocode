/*
 * XREFs of MiCreateAweInfoBitMap @ 0x1407F9B80
 * Callers:
 *     MiAllocateAweInfo @ 0x1407F8928 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1407FA110 (MiResizeAweBitMap.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x140266FBC (MiGetAweInfoPartition.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiPageChainCount @ 0x14045AA00 (MiPageChainCount.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateAweInfoBitMap(__int64 a1)
{
  _KPROCESS *Process; // rsi
  __int64 v3; // rbx
  __int16 v4; // ax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  void *Pool; // rbp
  int v8; // esi
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    v3 = 0xFFFFFFFFFFLL;
  else
    v3 = *(_QWORD *)(MiGetAweInfoPartition(a1) + 18504);
  if ( Process[1].ReadyTime )
  {
    v4 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( (v4 == 332 || v4 == 452) && (unsigned __int64)(v3 + 1) > 0x100000000LL )
      v3 = 0xFFFFFFFFLL;
  }
  v5 = MiPageChainCount(a1);
  if ( v5 == 1 )
    v6 = v3 + 1;
  else
    v6 = (~(v5 - 1) & (v3 + v5 - 1)) / v5;
  if ( *(_QWORD *)(a1 + 24) == v6 )
    return 3221225626LL;
  Pool = (void *)MiAllocatePool(0x40uLL, 8 * ((v6 >> 6) + ((v6 & 0x3F) != 0)), 1281646934);
  if ( !Pool )
    return 3221225626LL;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0
    && (v8 = PsChargeProcessNonPagedPoolQuota((__int64)Process, 8 * ((v6 >> 6) + ((v6 & 0x3F) != 0))), v8 < 0) )
  {
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)v8;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v6;
    result = 0LL;
    *(_QWORD *)(a1 + 32) = Pool;
  }
  return result;
}
