/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x1801C6B1C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x1801C69A0 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1801C8FC0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x1801C6E6C (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1801C7264 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x1801C73DE (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_18098CA60 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x1801C6BA6LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_18098CA48._first = *(_OWORD *)&Table._first;
      stru_18098CA48._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_18098CA48) )
    {
      return 0;
    }
    byte_18098CA60 = 1;
  }
  return 1;
}
