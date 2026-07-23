/*
 * XREFs of strnlen @ 0x1801249B0
 * Callers:
 *     _strlwr_s @ 0x180120820 (_strlwr_s.c)
 *     _strupr_s @ 0x180120950 (_strupr_s.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *String, size_t MaxCount)
{
  const char *v5; // r8
  __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // cf
  const char *v9; // r8
  size_t v10; // r11
  size_t v11; // rdx
  __m128i *v12; // rdx
  size_t v13; // r11
  size_t v15; // r11
  size_t v16; // r11

  v5 = String;
  if ( (_isa_info & 0x10) != 0 )
  {
    v6 = (unsigned __int8)String & 0x1F;
    v7 = 32 - v6;
    v8 = v6 != 0;
    v9 = String;
    v10 = v7 & -(__int64)v8;
    if ( MaxCount < v10 )
      v10 = MaxCount;
    if ( String != &String[v10] )
    {
      do
      {
        if ( !*v9 )
          break;
        ++v9;
      }
      while ( v9 != &String[v10] );
    }
    v11 = v9 - String;
    if ( v9 - String == v10 )
    {
      v12 = (__m128i *)v9;
      v13 = (size_t)&v9[MaxCount - v10 - (((_BYTE)MaxCount - (_BYTE)v10) & 0x1F)];
      if ( v9 != (const char *)v13 )
      {
        do
        {
          __asm
          {
            vpxor   xmm1, xmm1, xmm1
            vpcmpeqb ymm1, ymm1, ymmword ptr [rdx]
            vpmovmskb eax, ymm1
          }
          __asm { vzeroupper }
          if ( _EAX )
            break;
          v12 += 2;
        }
        while ( v12 != (__m128i *)v13 );
      }
      while ( v12 != (__m128i *)&String[MaxCount] && v12->m128i_i8[0] )
        v12 = (__m128i *)((char *)v12 + 1);
      return (char *)v12 - String;
    }
  }
  else
  {
    v15 = (16LL - ((unsigned __int8)String & 0xF)) & -(__int64)(((unsigned __int8)String & 0xF) != 0LL);
    if ( MaxCount < v15 )
      v15 = MaxCount;
    if ( String != &String[v15] )
    {
      do
      {
        if ( !*v5 )
          break;
        ++v5;
      }
      while ( v5 != &String[v15] );
    }
    v11 = v5 - String;
    if ( v5 - String == v15 )
    {
      v12 = (__m128i *)v5;
      v16 = (size_t)&v5[MaxCount - v15 - (((_BYTE)MaxCount - (_BYTE)v15) & 0xF)];
      if ( v5 != (const char *)v16 )
      {
        do
        {
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *v12)) )
            break;
          ++v12;
        }
        while ( v12 != (__m128i *)v16 );
      }
      while ( v12 != (__m128i *)&String[MaxCount] && v12->m128i_i8[0] )
        v12 = (__m128i *)((char *)v12 + 1);
      return (char *)v12 - String;
    }
  }
  return v11;
}
