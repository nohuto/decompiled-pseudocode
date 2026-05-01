/*
 * XREFs of ?_Tidy@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXXZ @ 0x18035F940
 * Callers:
 *     ??1?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ @ 0x180347B18 (--1-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA@XZ.c)
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803572D4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<tagPRESENTFRAME>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void **v4; // rdi
  _QWORD *v5; // r14
  __int64 v6; // rsi
  void *v7; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = v2 - 1;
    a1[4] = v3;
    if ( !v3 )
      a1[3] = 0LL;
  }
  v4 = (void **)(a1 + 1);
  v5 = a1 + 1;
  if ( a1[1] )
  {
    v6 = a1[2];
    if ( v6 )
    {
      do
      {
        --v6;
        v7 = (void *)*((_QWORD *)*v4 + v6);
        if ( v7 )
          std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x20);
      }
      while ( v6 );
      v5 = a1 + 1;
    }
    std::_Deallocate<16,0>(*v4, (const struct std::nothrow_t *)(8LL * a1[2]));
  }
  a1[2] = 0LL;
  *v5 = 0LL;
}
