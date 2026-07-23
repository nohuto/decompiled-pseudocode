/*
 * XREFs of MiFreeUnmappedPageTables @ 0x14044FAD0
 * Callers:
 *     MiDeleteSystemPageTableTail @ 0x14044FA20 (MiDeleteSystemPageTableTail.c)
 * Callees:
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 */

__int64 *__fastcall MiFreeUnmappedPageTables(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 i; // r14
  unsigned int v5; // esi
  __int64 *result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  int v10; // [rsp+50h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 16);
  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    v9 = (__int64)result;
    if ( !result )
      break;
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    v10 = *(_DWORD *)(v9 + 32);
    BYTE2(v10) = BYTE2(v10) & 0xF8 | 6;
    *(_DWORD *)(v9 + 32) = v10;
    if ( (unsigned int)MiDecrementShareCountEx(v9, 0LL, v7, v8) == 3 )
      ++a2[1];
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  a2[3] += v2;
  *a2 += v2;
  return result;
}
