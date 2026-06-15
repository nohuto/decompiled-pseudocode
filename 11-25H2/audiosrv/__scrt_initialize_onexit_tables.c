/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x1800A7D8C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x1800A7C28 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800A8210 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x1800A87FC (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800A89F8 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x1800A8AF2 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1801CE928 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x1800A7E16LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1801CE910._first = *(_OWORD *)&Table._first;
      stru_1801CE910._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_1801CE910) )
    {
      return 0;
    }
    byte_1801CE928 = 1;
  }
  return 1;
}
