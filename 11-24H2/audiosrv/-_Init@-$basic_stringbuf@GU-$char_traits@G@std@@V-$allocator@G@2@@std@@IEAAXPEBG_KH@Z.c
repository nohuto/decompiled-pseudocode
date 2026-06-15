/*
 * XREFs of ?_Init@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXPEBG_KH@Z @ 0x180162A80
 * Callers:
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18015FD4C (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180053E30 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 */

void __fastcall std::basic_stringbuf<unsigned short>::_Init(__int64 a1, const void *a2, unsigned __int64 a3, int a4)
{
  unsigned int v5; // ebx
  SIZE_T size_of; // rax
  signed __int64 v9; // r14
  char *v10; // rsi
  __int64 v11; // rdx
  char *v12; // rcx

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
    size_of = std::_Get_size_of_n<2>(a3);
    v9 = 2 * a3;
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    memcpy_0(v10, a2, v9);
    *(_QWORD *)(a1 + 104) = &v10[v9];
    if ( (v5 & 4) == 0 )
    {
      **(_QWORD **)(a1 + 24) = v10;
      **(_QWORD **)(a1 + 56) = v10;
      **(_DWORD **)(a1 + 80) = v9 >> 1;
    }
    if ( (v5 & 2) == 0 )
    {
      v11 = *(_QWORD *)(a1 + 104);
      v12 = v10;
      if ( (v5 & 0x18) != 0 )
        v12 = *(char **)(a1 + 104);
      **(_QWORD **)(a1 + 32) = v10;
      **(_QWORD **)(a1 + 64) = v12;
      **(_DWORD **)(a1 + 88) = (v11 - (__int64)v12) >> 1;
      if ( (v5 & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v10;
        **(_QWORD **)(a1 + 56) = v10;
        **(_DWORD **)(a1 + 80) = 0;
      }
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
}
