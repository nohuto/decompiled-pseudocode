/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180250AD4
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180250970 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180251080 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x1802516FC (__scrt_is_ucrt_dll_in_use.c)
 *     __scrt_fastfail @ 0x180251720 (__scrt_fastfail.c)
 *     _initialize_onexit_table_0 @ 0x180251A6A (_initialize_onexit_table_0.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1803F9910 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x180250B5ELL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1803F98F8._first = *(_OWORD *)&Table._first;
      stru_1803F98F8._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table_0(&Table) || initialize_onexit_table_0(&stru_1803F98F8) )
    {
      return 0;
    }
    byte_1803F9910 = 1;
  }
  return 1;
}
