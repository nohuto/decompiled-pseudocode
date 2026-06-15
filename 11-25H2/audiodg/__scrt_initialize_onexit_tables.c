/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x140058FC4
 * Callers:
 *     pre_c_initialization @ 0x140058B40 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1400591F0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x140059700 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x140059F30 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x14005A0C6 (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( !byte_1400C3D90 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x14005904ELL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      *(__m128i *)&Table._first = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_1400C3D78._first = *(_OWORD *)&Table._first;
      stru_1400C3D78._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_1400C3D78) )
    {
      return 0;
    }
    byte_1400C3D90 = 1;
  }
  return 1;
}
