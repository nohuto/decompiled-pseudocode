/*
 * XREFs of ?DestroyTable@MULTIBRUSH@@QEAAXXZ @ 0x1401FD330
 * Callers:
 *     MulDestroyBrushInternal @ 0x1401FD2D0 (MulDestroyBrushInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall MULTIBRUSH::DestroyTable(MULTIBRUSH *this)
{
  unsigned int *v2; // rsi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx

  if ( *((_QWORD *)this + 1) )
  {
    v2 = (unsigned int *)*((_QWORD *)this + 4);
    if ( v2 )
    {
      v3 = *v2;
      if ( v3 )
      {
        v4 = 16LL * v3;
        do
        {
          v4 -= 16LL;
          --v3;
          v5 = *(_QWORD *)(*((_QWORD *)this + 4) + v4 + 8);
          if ( v5 )
          {
            v7 = (volatile signed __int32 *)(v5 - 16);
            if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
              RBRUSH::vFreeOrCacheRBrush(v7, 0LL);
            *(_QWORD *)(*((_QWORD *)this + 4) + v4 + 8) = 0LL;
          }
          v6 = *(volatile signed __int32 **)(*((_QWORD *)this + 4) + v4 + 16);
          if ( v6 )
          {
            if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
              RBRUSH::vFreeOrCacheRBrush(v6, 1LL);
            *(_QWORD *)(*((_QWORD *)this + 4) + v4 + 16) = 0LL;
          }
        }
        while ( v3 );
      }
    }
  }
}
