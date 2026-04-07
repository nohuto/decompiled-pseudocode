/*
 * XREFs of ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18007818C
 * Callers:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x18006EEF8 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x180098314 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x180098800 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DF464 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x1800E3168 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     memcpy_s_0 @ 0x180078260 (memcpy_s_0.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009DE70 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009E0E8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

bool __fastcall tson::write_buffer::reserve(tson::write_buffer *this, unsigned __int64 a2)
{
  rsize_t v3; // rbp
  char *v4; // rax
  char *v5; // rdi
  const void *v6; // r8
  rsize_t v7; // rsi
  void *v8; // r14
  bool result; // al
  char v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 260) - *((_QWORD *)this + 258) > a2 )
    a2 = *((_QWORD *)this + 260) - *((_QWORD *)this + 258);
  v3 = 2 * a2;
  v4 = (char *)CoTaskMemAlloc(2 * a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = (const void *)*((_QWORD *)this + 258);
    v7 = *((_QWORD *)this + 259) - (_QWORD)v6;
    memcpy_s_0(v4, v3, v6, v7);
    v8 = *(void **)this;
    if ( *(_QWORD *)this )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v10);
      CoTaskMemFree(v8);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v10);
    }
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 259) = &v5[v7];
    *((_QWORD *)this + 260) = &v5[v3];
    result = 1;
    *((_QWORD *)this + 258) = v5;
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
    return 0;
  }
  return result;
}
