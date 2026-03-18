/*
 * XREFs of MiAddSystemPageTableToList @ 0x1402270A8
 * Callers:
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiInsertPageChainHead @ 0x1402271F0 (MiInsertPageChainHead.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiAddSystemPageTableToList(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 184);
  while ( 1 )
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    a1 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  MiInsertPageChainHead(v3 + 8, a2);
  v7 = *(_DWORD *)(a2 + 32);
  BYTE2(v7) = BYTE2(v7) & 0xF8 | 5;
  *(_DWORD *)(a2 + 32) = v7;
  v5 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = 0xAAAAAAAAAAAAAAABuLL;
  if ( v5 != 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4) )
    return MiLockAndDecrementShareCount(48 * v5 - 0x220000000000LL);
  return result;
}
