/*
 * XREFs of ??0?$vector@IV?$allocator@I@std@@@std@@QEAA@AEBV01@@Z @ 0x18013037C
 * Callers:
 *     ??0?$_Bt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x1801301E0 (--0-$_Bt_state_t@PEBG@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??1?$_Tidy_guard@V?$vector@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1801306A0 (--1-$_Tidy_guard@V-$vector@IV-$allocator@I@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_raw@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180139484 (-_Buy_raw@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

__int64 *__fastcall std::vector<unsigned int>::vector<unsigned int>(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  signed __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
    std::vector<unsigned int>::_Buy_raw();
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v6 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v5);
    v8 = 0LL;
    a1[1] = v6 + 4 * (v5 >> 2);
    std::_Tidy_guard<std::vector<unsigned int>>::~_Tidy_guard<std::vector<unsigned int>>(&v8);
  }
  return a1;
}
