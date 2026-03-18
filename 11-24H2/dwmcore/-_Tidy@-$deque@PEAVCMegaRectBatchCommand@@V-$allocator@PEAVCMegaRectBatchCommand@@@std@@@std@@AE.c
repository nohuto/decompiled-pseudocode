/*
 * XREFs of ?_Tidy@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAXXZ @ 0x1801B1B00
 * Callers:
 *     ??1?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@XZ @ 0x1801B1AC8 (--1-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@X.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CMegaRectBatchCommand *>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // r14
  __int64 v5; // rbx
  void *v6; // rcx
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx

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
  v4 = a1 + 1;
  if ( a1[1] )
  {
    v5 = a1[2];
    if ( v5 )
    {
      do
      {
        --v5;
        v6 = *(void **)(a1[1] + 8 * v5);
        if ( v6 )
          operator delete(v6, 0x10uLL);
      }
      while ( v5 );
      v4 = a1 + 1;
    }
    v7 = (_QWORD *)a1[1];
    v8 = 8LL * a1[2];
    if ( v8 >= 0x1000 )
    {
      v8 += 39LL;
      if ( (unsigned __int64)v7 - *(v7 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v7 = (_QWORD *)*(v7 - 1);
      v4 = a1 + 1;
    }
    operator delete(v7, v8);
  }
  *v4 = 0LL;
  a1[2] = 0LL;
}
