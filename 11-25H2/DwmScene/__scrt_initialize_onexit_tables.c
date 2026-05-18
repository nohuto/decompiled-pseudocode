/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x18000B58C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x18000B428 (__scrt_dllmain_before_initialize_c.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x18000C720 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     sub_18000B8E0 @ 0x18000B8E0 (sub_18000B8E0.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000BE44 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__initialize_onexit_table @ 0x18000BF4E (_o__initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  int v2; // eax

  if ( !byte_1801C2CD0 )
  {
    if ( a1 > 1 )
    {
      sub_18000B8E0(5LL);
      JUMPOUT(0x18000B616LL);
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      xmmword_1801C2CA0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1800F6B30);
      qword_1801C2CB0 = -1LL;
      xmmword_1801C2CB8 = xmmword_1801C2CA0;
      qword_1801C2CC8 = -1LL;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&xmmword_1801C2CA0)
           || (unsigned int)o__initialize_onexit_table(&xmmword_1801C2CB8) )
    {
      return 0;
    }
    byte_1801C2CD0 = 1;
  }
  return 1;
}
