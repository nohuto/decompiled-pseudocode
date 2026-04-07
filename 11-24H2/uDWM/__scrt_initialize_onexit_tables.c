/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x18009B7A4
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x18009B640 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18009BAB0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x18009C1DC (__scrt_is_ucrt_dll_in_use.c)
 *     __scrt_fastfail @ 0x18009C200 (__scrt_fastfail.c)
 *     _initialize_onexit_table @ 0x18009C3FE (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_180125DD0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x18009B82ELL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_180125DB8._first = *(_OWORD *)&Table._first;
      stru_180125DB8._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_180125DB8) )
    {
      return 0;
    }
    byte_180125DD0 = 1;
  }
  return 1;
}
