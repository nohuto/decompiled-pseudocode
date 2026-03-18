/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x140004F84
 * Callers:
 *     pre_c_initialization @ 0x140004C40 (pre_c_initialization.c)
 * Callees:
 *     __scrt_fastfail @ 0x1400054B0 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x14000597C (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x140005CC0 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_140019390 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x14000500ELL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_140019378._first = *(_OWORD *)&Table._first;
      stru_140019378._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_140019378) )
    {
      return 0;
    }
    byte_140019390 = 1;
  }
  return 1;
}
