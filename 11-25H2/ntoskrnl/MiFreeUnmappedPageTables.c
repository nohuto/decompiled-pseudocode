/*
 * XREFs of MiFreeUnmappedPageTables @ 0x140377C70
 * Callers:
 *     MiDeleteSystemPageTableTail @ 0x140377BC0 (MiDeleteSystemPageTableTail.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 */

__int64 *__fastcall MiFreeUnmappedPageTables(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 i; // r14
  int v5; // esi
  __int64 *result; // rax
  unsigned __int64 v7; // rbx
  int v8; // [rsp+50h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 16);
  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    v7 = (unsigned __int64)result;
    if ( !result )
      break;
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v8 = *(_DWORD *)(v7 + 32);
    BYTE2(v8) = BYTE2(v8) & 0xF8 | 6;
    *(_DWORD *)(v7 + 32) = v8;
    if ( (unsigned int)MiDecrementShareCountEx(v7, 0LL) == 3 )
      ++a2[1];
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  a2[3] += v2;
  *a2 += v2;
  return result;
}
