/*
 * XREFs of MiZeroInParallelWorker @ 0x140224150
 * Callers:
 *     <none>
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiZeroChainWorker @ 0x1402242C4 (MiZeroChainWorker.c)
 *     MiZeroMoveToProcessor @ 0x140225538 (MiZeroMoveToProcessor.c)
 *     MiRevertProcessorMove @ 0x14022559C (MiRevertProcessorMove.c)
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiZeroInParallelWorker(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r14d
  unsigned __int64 v4; // rsi
  unsigned int i; // ebp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v10; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v11; // [rsp+40h] [rbp-C8h]
  _BYTE v12[128]; // [rsp+50h] [rbp-B8h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  memset_0(v12, 0, sizeof(v12));
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_DWORD *)(v2 + 40);
  MiInitializePageColorBase(0LL, 3LL, (unsigned int)(*(_DWORD *)(v2 + 88) + 1), &v9);
  v4 = (unsigned __int64)v12 & -(__int64)((unsigned int)MiCreateUltraThreadContext(
                                                          v12,
                                                          &v9,
                                                          15LL,
                                                          (*(_DWORD *)(v2 + 16) >> 1) & 4) != 0);
  MiZeroMoveToProcessor(a1, &v10);
  for ( i = 0; i < v3; ++i )
  {
    if ( *(_QWORD *)(a1 + 112) != a1 + 112
      && !*(_DWORD *)(a1 + 96)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
    {
      MiZeroChainWorker(v2, a1, v11, v4, v9, *((_QWORD *)&v9 + 1), v10, *((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 108), 0xFFFFFFFF) == 1 )
      {
        KeSignalGate((PVOID)(v2 + 120));
        break;
      }
    }
    v6 = a1;
    v7 = a1 + 128;
    a1 = v2 + 168;
    if ( v6 != ((unsigned __int64)v3 << 7) + v2 + 40 )
      a1 = v7;
  }
  result = MiRevertProcessorMove(&v10);
  if ( v4 )
    return MiDeleteUltraThreadContext(v4);
  return result;
}
