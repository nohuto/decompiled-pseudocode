/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180001768
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180001604 (__scrt_dllmain_before_initialize_c.c)
 * Callees:
 *     __scrt_fastfail @ 0x180001918 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180001E74 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x180001F06 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_18000A130 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x1800017F2LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_18000A118._first = *(_OWORD *)&Table._first;
      stru_18000A118._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_18000A118) )
    {
      return 0;
    }
    byte_18000A130 = 1;
  }
  return 1;
}
