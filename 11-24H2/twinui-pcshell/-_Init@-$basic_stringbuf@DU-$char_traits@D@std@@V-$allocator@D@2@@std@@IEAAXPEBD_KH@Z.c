/*
 * XREFs of ?_Init@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXPEBD_KH@Z @ 0x180508120
 * Callers:
 *     ??0?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x1804F8250 (--0-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV-$basic_string@D.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

void __fastcall std::stringbuf::_Init(__int64 a1, const void *a2, size_t a3, int a4)
{
  unsigned int v5; // ebx
  char *v8; // rsi
  __int64 v9; // rdx
  char *v10; // rcx

  v5 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( !a3 || (v5 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a3);
    memcpy_0(v8, a2, a3);
    *(_QWORD *)(a1 + 104) = &v8[a3];
    if ( (v5 & 4) == 0 )
    {
      **(_QWORD **)(a1 + 24) = v8;
      **(_QWORD **)(a1 + 56) = v8;
      **(_DWORD **)(a1 + 80) = a3;
    }
    if ( (v5 & 2) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 104);
      v10 = v8;
      if ( (v5 & 0x18) != 0 )
        v10 = *(char **)(a1 + 104);
      **(_QWORD **)(a1 + 32) = v8;
      **(_QWORD **)(a1 + 64) = v10;
      **(_DWORD **)(a1 + 88) = v9 - (_DWORD)v10;
      if ( (v5 & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v8;
        **(_QWORD **)(a1 + 56) = v8;
        **(_DWORD **)(a1 + 80) = 0;
      }
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
}
