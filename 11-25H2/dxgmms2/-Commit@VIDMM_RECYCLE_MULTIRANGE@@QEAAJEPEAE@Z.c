/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1400C7778
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400EC7AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C6DA0 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1400C7894 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C80B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(
        VIDMM_RECYCLE_MULTIRANGE *this,
        unsigned __int8 a2,
        unsigned __int8 *a3)
{
  VIDMM_RECYCLE_RANGE *v3; // rdi
  char v6; // bp
  int v7; // esi
  _QWORD *v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v3 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v6 = 0;
  while ( 1 )
  {
    if ( v6 )
    {
      v8 = (_QWORD *)*((_QWORD *)this + 8);
      while ( 1 )
      {
        v8[17] = 0LL;
        v8[18] = 0LL;
        v8[19] = 0LL;
        v8[20] = this;
        if ( v8 == *((_QWORD **)this + 9) )
          break;
        v10 = v8[15];
        if ( v10 == v8[9] + 72LL )
          v8 = 0LL;
        else
          v8 = (_QWORD *)(v10 - 120);
      }
      *((_DWORD *)this + 50) = 3;
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, a2);
      return 0LL;
    }
    v7 = VIDMM_RECYCLE_RANGE::Commit(v3, a2, a3);
    if ( v7 < 0 )
      break;
    if ( v3 == *((VIDMM_RECYCLE_RANGE **)this + 9) )
    {
      v6 = 1;
    }
    else
    {
      v11 = *((_QWORD *)v3 + 15);
      if ( v11 == *((_QWORD *)v3 + 9) + 72LL )
        v3 = 0LL;
      else
        v3 = (VIDMM_RECYCLE_RANGE *)(v11 - 120);
    }
  }
  while ( v3 != *((VIDMM_RECYCLE_RANGE **)this + 8) )
  {
    v12 = *((_QWORD *)v3 + 16);
    v13 = *((_QWORD *)v3 + 9);
    v3 = 0LL;
    if ( v12 != v13 + 72 )
      v3 = (VIDMM_RECYCLE_RANGE *)(v12 - 120);
    VIDMM_RECYCLE_RANGE::Decommit(v3);
  }
  return (unsigned int)v7;
}
