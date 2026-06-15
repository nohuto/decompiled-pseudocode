/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180014560
 * Callers:
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x180013F3C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180019404 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, const unsigned __int16 *a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  const unsigned __int16 *v6; // r11
  unsigned __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  signed __int64 v10; // r11
  unsigned __int64 v11; // r8
  unsigned __int16 *v12; // r9
  __int64 v13; // rdi
  unsigned __int16 v14; // ax
  unsigned __int16 *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx

  if ( (a1 || !a2) && a2 <= 0x7FFFFFFF && a4 < 0x7FFFFFFF )
  {
    v6 = (const unsigned __int16 *)&unk_1800537F0;
    if ( a3 )
      v6 = a3;
    v7 = 0LL;
    if ( a3 )
      v7 = a4;
    if ( a2 )
    {
      v9 = v7 - a2;
      v10 = (char *)v6 - a1;
      v11 = a2;
      v12 = (unsigned __int16 *)a1;
      v13 = 0LL;
      do
      {
        if ( !(v9 + v11) )
          break;
        v14 = *(unsigned __int16 *)((char *)v12 + v10);
        if ( !v14 )
          break;
        *v12 = v14;
        ++v13;
        ++v12;
        --v11;
      }
      while ( v11 );
      v15 = v12 - 1;
      v4 = -2147024774;
      if ( v11 )
      {
        v15 = v12;
        v4 = 0;
      }
      *v15 = 0;
      v16 = v13 - 1;
      if ( v11 )
        v16 = v13;
      v17 = a2 - v16;
      if ( v11 && v17 > 1 && 2 * v17 > 2 )
        memset_0(&a1[2 * v16 + 2], 0, 2 * v17 - 2);
    }
    else if ( v7 && *v6 )
    {
      v8 = -2147024774;
      if ( !a1 )
        return (unsigned int)-2147024809;
      return v8;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4 = -2147024809;
    if ( a2 )
    {
      result = 2147942487LL;
      *(_WORD *)a1 = 0;
      return result;
    }
  }
  return v4;
}
