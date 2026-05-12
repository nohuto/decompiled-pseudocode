/*
 * XREFs of NvmeControllerReinitAsyncEventContext @ 0x1400F3B38
 * Callers:
 *     NvmeControllerCreateAsyncEventContext @ 0x1400EBF04 (NvmeControllerCreateAsyncEventContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerReinitAsyncEventContext(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  unsigned __int16 *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = 0;
  InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(a1 + 1416) + 16LL));
  v3 = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2LL) = 0;
  v4 = *(unsigned __int16 **)(a1 + 1416);
  if ( *v4 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)v4 + 1) + 8LL * v3);
      if ( !v5 )
        break;
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v5 + 4256LL), 3u);
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v5 + 4256LL), 0xEu);
      *(_DWORD *)(v5 + 48) &= ~1u;
      if ( *(_WORD *)(*(_QWORD *)v5 + 4264LL) )
      {
        _InterlockedAdd16((volatile signed __int16 *)(*(_QWORD *)v5 + 4264LL), 0xFFFFu);
        v6 = *(_QWORD *)(a1 + 128);
        v7 = *(_QWORD *)(v6 + 160);
        if ( *(_BYTE *)v7 == 1
          && _InterlockedExchangeAdd(
               *(volatile signed __int32 **)(*(_QWORD *)(v7 + 16) + 8LL * *(unsigned int *)(v5 + 64)),
               0xFFFFFFFF) == 1 )
        {
          PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v6 + 160) + 8LL), 0LL, 2LL);
        }
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1416) + 16LL), (PSLIST_ENTRY)(v5 + 16));
      v4 = *(unsigned __int16 **)(a1 + 1416);
      if ( ++v3 >= *v4 )
        return v2;
    }
    return (unsigned int)-1073741595;
  }
  return v2;
}
