/*
 * XREFs of __memset_spec_avx_ermsb @ 0x1801665C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _memset_spec_avx_ermsb(_BYTE *_RCX, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _BYTE *v6; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 *v18; // r9
  unsigned __int64 v19; // r8
  _WORD *v20; // r9
  unsigned __int64 v21; // r8

  result = (__int64)_RCX;
  v5 = 0x101010101010101LL * a2;
  if ( a3 < 0x20 )
  {
    if ( a3 < 8 )
    {
      if ( a3 < 2 )
      {
        if ( a3 )
          *_RCX = v5;
      }
      else
      {
        v20 = &_RCX[a3 - 2];
        *(_WORD *)_RCX = v5;
        v21 = (a3 & 4) >> 1;
        *v20 = v5;
        *(_WORD *)&_RCX[v21] = v5;
        *(_WORD *)((char *)v20 - v21) = v5;
      }
    }
    else
    {
      v18 = (__int64 *)&_RCX[a3 - 8];
      *(_QWORD *)_RCX = v5;
      v19 = (a3 & 0x10) >> 1;
      *v18 = v5;
      *(_QWORD *)&_RCX[v19] = v5;
      *(__int64 *)((char *)v18 - v19) = v5;
    }
  }
  else if ( a3 < 0x80 )
  {
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    _R9 = (__int64)&_RCX[a3 - 32];
    __asm { vmovups ymmword ptr [rcx], ymm0 }
    _R8 = (a3 & 0x40) >> 1;
    __asm
    {
      vmovups ymmword ptr [r9], ymm0
      vmovups ymmword ptr [rcx+r8], ymm0
    }
    _R8 = -(__int64)_R8;
    __asm
    {
      vmovups ymmword ptr [r9+r8], ymm0
      vzeroupper
    }
  }
  else if ( a3 >= 0x7D0 )
  {
    return _memset_spec_avx_ermsb_repmovsb();
  }
  else
  {
    v6 = &_RCX[a3];
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    _RDX = v6 - 32;
    __asm { vmovups ymmword ptr [rcx], ymm0 }
    v9 = (unsigned __int64)(v6 - 96);
    _RCX = (unsigned __int64)(_RCX + 32) & 0xFFFFFFFFFFFFFFE0uLL;
    v11 = (unsigned __int64)&v6[-_RCX];
    if ( v11 >= 0x80 )
    {
      v12 = v11 >> 7;
      do
      {
        __asm
        {
          vmovaps ymmword ptr [rcx], ymm0
          vmovaps ymmword ptr [rcx+20h], ymm0
        }
        _RCX += 128LL;
        --v12;
        __asm
        {
          vmovaps ymmword ptr [rcx-40h], ymm0
          vmovaps ymmword ptr [rcx-20h], ymm0
        }
      }
      while ( v12 );
    }
    _R9 = v9 & 0xFFFFFFFFFFFFFFE0uLL;
    __asm
    {
      vmovups ymmword ptr [rdx], ymm0
      vmovaps ymmword ptr [r9], ymm0
      vmovaps ymmword ptr [r9+20h], ymm0
      vmovaps ymmword ptr [r9+40h], ymm0
      vzeroupper
    }
  }
  return result;
}
