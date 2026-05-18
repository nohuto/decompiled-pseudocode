/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x18000B95C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x18000B7F8 (__scrt_dllmain_before_initialize_c.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x18000C890 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     sub_18000BEEC @ 0x18000BEEC (sub_18000BEEC.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000C2A0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__initialize_onexit_table @ 0x18000C3AE (_o__initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  int v2; // eax

  if ( !byte_1801C3CF0 )
  {
    if ( a1 > 1 )
    {
      sub_18000BEEC(5LL);
      JUMPOUT(0x18000B9E6LL);
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      xmmword_1801C3CC0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1800F7B50);
      qword_1801C3CD0 = -1LL;
      xmmword_1801C3CD8 = xmmword_1801C3CC0;
      qword_1801C3CE8 = -1LL;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&xmmword_1801C3CC0)
           || (unsigned int)o__initialize_onexit_table(&xmmword_1801C3CD8) )
    {
      return 0;
    }
    byte_1801C3CF0 = 1;
  }
  return 1;
}
