/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x140004A44
 * Callers:
 *     pre_c_initialization @ 0x140004700 (pre_c_initialization.c)
 * Callees:
 *     __scrt_fastfail @ 0x140004F70 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x14000543C (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x140005780 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_140018310 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x140004ACELL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1400182F8._first = *(_OWORD *)&Table._first;
      stru_1400182F8._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_1400182F8) )
    {
      return 0;
    }
    byte_140018310 = 1;
  }
  return 1;
}
