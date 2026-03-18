/*
 * XREFs of ?_Tidy@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAXXZ @ 0x1800F93AC
 * Callers:
 *     ??1?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAA@XZ @ 0x1800F8F18 (--1-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CInteractionTracker *>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD **v3; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // rax

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v7 = v2 - 1;
    a1[4] = v7;
    if ( !v7 )
      a1[3] = 0LL;
  }
  v3 = (_QWORD **)(a1 + 1);
  v4 = a1 + 1;
  if ( a1[1] )
  {
    v5 = a1[2];
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)(*v3)[--v5];
        if ( v6 )
          std::_Deallocate<16,0>(v6, 0x10uLL);
      }
      while ( v5 );
      v4 = a1 + 1;
    }
    std::_Deallocate<16,0>(*v3, 8LL * a1[2]);
  }
  a1[2] = 0LL;
  *v4 = 0LL;
}
