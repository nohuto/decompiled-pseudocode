/*
 * XREFs of ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1400C7708
 * Callers:
 *     ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z @ 0x1400FB8A0 (-UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C8160 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400EF688 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unlock(VIDMM_RECYCLE_RANGE **this, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v8; // dl
  VIDMM_RECYCLE_RANGE *v9; // rbp
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  VIDMM_RECYCLE_RANGE *v13; // rcx
  VIDMM_RECYCLE_RANGE *v14; // rcx

  WdLogSingleEntry3(4LL, this, a2, a3);
  v9 = this[8];
  v10 = (unsigned __int64)this[6] + a2;
  v11 = v10 + a3;
  WdLogGlobalForLineNumber = 3088;
  while ( 1 )
  {
    if ( *((_QWORD *)v9 + 4) >= v10 || *((_QWORD *)v9 + 5) > v10 )
      VIDMM_RECYCLE_RANGE::Unlock(v9);
    if ( *((_QWORD *)v9 + 5) >= v11 )
      break;
    v12 = *((_QWORD *)v9 + 15);
    if ( v12 == *((_QWORD *)v9 + 9) + 72LL )
      v9 = 0LL;
    else
      v9 = (VIDMM_RECYCLE_RANGE *)(v12 - 120);
  }
  --*((_DWORD *)this + 23);
  if ( a4 )
  {
    v14 = this[13];
    *((_BYTE *)this + 129) = 0;
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      this[13] = 0LL;
    }
  }
  else
  {
    v13 = this[12];
    *((_BYTE *)this + 128) = 0;
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      this[12] = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 23) )
    *((_DWORD *)this + 50) = 3;
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((VIDMM_RECYCLE_MULTIRANGE *)this, v8);
}
