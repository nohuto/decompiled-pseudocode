/*
 * XREFs of MiAddSystemPageTableToList @ 0x14021C950
 * Callers:
 *     MiDeleteSystemPageTable @ 0x1404811C0 (MiDeleteSystemPageTable.c)
 * Callees:
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiAddSystemPageTableToList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 184);
  while ( 1 )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v6);
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
  MiInsertPageChainHead(v5 + 8, a2);
  v9 = *(_DWORD *)(a2 + 32);
  BYTE2(v9) = BYTE2(v9) & 0xF8 | 5;
  *(_DWORD *)(a2 + 32) = v9;
  v7 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = 0xAAAAAAAAAAAAAAABuLL;
  if ( v7 != 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4) )
    return MiLockAndDecrementShareCount(48 * v7 - 0x220000000000LL);
  return result;
}
