/*
 * XREFs of memset_0 @ 0x180165BC0
 * Callers:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset_0(void *_RCX, int Val, size_t Size)
{
  void *result; // rax
  __int64 v5; // rdx
  __m128 v6; // xmm0
  char *v7; // r8
  char *v10; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 *v19; // r9
  size_t v20; // r8
  _WORD *v21; // r9
  size_t v22; // r8
  char *v23; // r8
  __m128 *v24; // rdx
  _OWORD *v25; // r9
  size_t v26; // r8
  __m128 *v27; // r9

  result = _RCX;
  v5 = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size >= 0x20 )
  {
    v6 = _mm_movelh_ps((__m128)(unsigned __int64)v5, (__m128)(unsigned __int64)v5);
    if ( (_isa_info & 4) != 0 )
    {
      if ( Size < 0x80 )
      {
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        _R9 = (char *)_RCX + Size - 32;
        __asm { vmovups ymmword ptr [rcx], ymm0 }
        _R8 = (Size & 0x40) >> 1;
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
        return result;
      }
      if ( (_isa_info & 2) == 0 || Size < 0x7D0 )
      {
        v7 = (char *)_RCX + Size;
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        _RDX = v7 - 32;
        __asm { vmovups ymmword ptr [rcx], ymm0 }
        v10 = v7 - 96;
        _RCX = ((unsigned __int64)_RCX + 32) & 0xFFFFFFFFFFFFFFE0uLL;
        v12 = (unsigned __int64)&v7[-_RCX];
        if ( v12 >= 0x80 )
        {
          v13 = v12 >> 7;
          do
          {
            __asm
            {
              vmovaps ymmword ptr [rcx], ymm0
              vmovaps ymmword ptr [rcx+20h], ymm0
            }
            _RCX += 128LL;
            --v13;
            __asm
            {
              vmovaps ymmword ptr [rcx-40h], ymm0
              vmovaps ymmword ptr [rcx-20h], ymm0
            }
          }
          while ( v13 );
        }
        _R9 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFE0uLL;
        __asm
        {
          vmovups ymmword ptr [rdx], ymm0
          vmovaps ymmword ptr [r9], ymm0
          vmovaps ymmword ptr [r9+20h], ymm0
          vmovaps ymmword ptr [r9+40h], ymm0
          vzeroupper
        }
        return result;
      }
      return (void *)_memset_repmovs();
    }
    if ( Size >= 0x40 )
    {
      if ( (_isa_info & 2) != 0 && Size >= 0x320 )
        return (void *)_memset_repmovs();
      *(__m128 *)_RCX = v6;
      v23 = (char *)_RCX + Size;
      _RCX = (void *)(((unsigned __int64)_RCX + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      Size = v23 - (_BYTE *)_RCX;
      if ( Size >= 0x40 )
      {
        v24 = (__m128 *)((char *)_RCX + Size - 16);
        v25 = (_OWORD *)(((unsigned __int64)_RCX + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
        v26 = Size >> 6;
        do
        {
          *(__m128 *)_RCX = v6;
          *((__m128 *)_RCX + 1) = v6;
          _RCX = (char *)_RCX + 64;
          --v26;
          *((__m128 *)_RCX - 2) = v6;
          *((__m128 *)_RCX - 1) = v6;
        }
        while ( v26 );
        *v25 = v6;
        v25[1] = v6;
        v25[2] = v6;
        *v24 = v6;
        return result;
      }
    }
    v27 = (__m128 *)((char *)_RCX + Size - 32);
    *(__m128 *)_RCX = v6;
    *((__m128 *)_RCX + 1) = v6;
    *v27 = v6;
    v27[1] = v6;
    return result;
  }
  if ( Size < 8 )
  {
    if ( Size < 2 )
    {
      if ( Size )
        *(_BYTE *)_RCX = v5;
    }
    else
    {
      v21 = (char *)_RCX + Size - 2;
      *(_WORD *)_RCX = v5;
      v22 = (Size & 4) >> 1;
      *v21 = v5;
      *(_WORD *)((char *)_RCX + v22) = v5;
      *(_WORD *)((char *)v21 - v22) = v5;
    }
  }
  else
  {
    v19 = (__int64 *)((char *)_RCX + Size - 8);
    *(_QWORD *)_RCX = v5;
    v20 = (Size & 0x10) >> 1;
    *v19 = v5;
    *(_QWORD *)((char *)_RCX + v20) = v5;
    *(__int64 *)((char *)v19 - v20) = v5;
  }
  return result;
}
