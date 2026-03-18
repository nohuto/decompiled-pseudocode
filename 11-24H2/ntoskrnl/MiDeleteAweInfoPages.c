/*
 * XREFs of MiDeleteAweInfoPages @ 0x1407F96E0
 * Callers:
 *     MiDeleteSectionAwe @ 0x140681F58 (MiDeleteSectionAwe.c)
 *     MiCleanProcessPhysicalPages @ 0x140A071B8 (MiCleanProcessPhysicalPages.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     MiFreeMdlPageRun @ 0x1403A1D8C (MiFreeMdlPageRun.c)
 *     MiGetAweInfoPartition @ 0x1403CCDEC (MiGetAweInfoPartition.c)
 *     RtlFindSetBitsEx @ 0x140403930 (RtlFindSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x140434530 (RtlFindNextForwardRunClearEx.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiPageChainCount @ 0x1404642D0 (MiPageChainCount.c)
 *     MiFreeContiguousLargePageRun @ 0x1406821E4 (MiFreeContiguousLargePageRun.c)
 *     MiLockAwePagesExclusive @ 0x140682830 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1406830AC (MiUnlockAwePagesExclusive.c)
 */

__int64 __fastcall MiDeleteAweInfoPages(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // r12
  __int64 Process; // rbx
  __int64 AweInfoPartition; // r14
  __int64 v7; // r8
  unsigned __int64 *v8; // rbp
  __int64 v9; // r13
  unsigned __int64 SetBits; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  ULONG_PTR v19; // rbx
  int v20; // r8d
  __int64 v21; // rcx
  unsigned __int64 v23; // [rsp+38h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-58h]
  unsigned __int64 v25; // [rsp+A0h] [rbp+8h] BYREF
  __int64 i; // [rsp+A8h] [rbp+10h]
  __int64 ProcessPartition; // [rsp+B0h] [rbp+18h]

  v1 = 0LL;
  v25 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  ProcessPartition = MiGetProcessPartition(Process);
  AweInfoPartition = MiGetAweInfoPartition(a1);
  MiLockAwePagesExclusive(a1, v7);
  v8 = (unsigned __int64 *)(a1 + 24);
  v9 = MiPageChainCount(a1);
  if ( (*(_DWORD *)(a1 + 8) & 1) == 0 || *(_QWORD *)(Process + 1392) )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v8, 1uLL, v3);
      v11 = SetBits;
      if ( SetBits < v3 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx(v8, SetBits, &v25);
      v13 = v25;
      v14 = NextForwardRunClear;
      v15 = (unsigned __int64 *)(a1 + 24);
      if ( !NextForwardRunClear )
        v13 = *v15;
      v16 = v13 - v11;
      RtlClearBitsEx((__int64)v15, v11, v16);
      v17 = v11 + v16 + v14;
      v18 = v9 * v16;
      v19 = v9 * v11;
      v4 += v9 * v16;
      v23 = v17;
      if ( (*(_DWORD *)(a1 + 8) & 8) == 0 )
      {
        v20 = (unsigned __int8)BYTE2(*(_DWORD *)(48 * v19 - 0x21FFFFFFFFE0LL)) >> 6;
        v21 = 48 * v19 - 0x220000000000LL;
        v18 = 0LL;
        for ( i = v21; v16; --v16 )
        {
          if ( (unsigned __int8)BYTE2(*(_DWORD *)(v21 + 32)) >> 6 != v20 )
          {
            if ( v9 == 1 )
            {
              MiFreeMdlPageRun(v19, v18, 0, 0, 0LL);
              if ( AweInfoPartition != ProcessPartition )
                MiReturnCrossPartitionCharges(AweInfoPartition, 4u, 1, v18);
            }
            else
            {
              MiFreeContiguousLargePageRun(a1, v19, v18);
            }
            v21 = i;
            v20 = (unsigned __int8)BYTE2(*(_DWORD *)(i + 32)) >> 6;
            v18 = 0LL;
            v19 = 0xAAAAAAAAAAAAAAABuLL * ((i + 0x220000000000LL) >> 4);
          }
          v21 += 48 * v9;
          v18 += v9;
          i = v21;
        }
      }
      if ( v9 == 1 )
      {
        MiFreeMdlPageRun(v19, v18, 0, 0, 0LL);
        if ( AweInfoPartition != ProcessPartition )
          MiReturnCrossPartitionCharges(AweInfoPartition, 4u, 1, v18);
      }
      else
      {
        MiFreeContiguousLargePageRun(a1, v19, v18);
      }
      v3 = v23;
      v8 = (unsigned __int64 *)(a1 + 24);
    }
    while ( v23 < *(_QWORD *)(a1 + 24) );
    if ( v4 && (*(_DWORD *)(a1 + 8) & 8) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(AweInfoPartition + 19624), -v4);
      _InterlockedAdd64((volatile signed __int64 *)(AweInfoPartition + 19648), -v4);
    }
    v1 = v4;
  }
  MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
  return v1;
}
