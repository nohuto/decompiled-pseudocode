/*
 * XREFs of sub_18001CF74 @ 0x18001CF74
 * Callers:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D318 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     sub_18001E97C @ 0x18001E97C (sub_18001E97C.c)
 *     sub_1800B80AC @ 0x1800B80AC (sub_1800B80AC.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_18001300C @ 0x18001300C (sub_18001300C.c)
 */

__int64 __fastcall sub_18001CF74(char **a1, const void *a2, unsigned __int64 a3)
{
  __int64 v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  char *v10; // rax
  char *v11; // rdi

  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    sub_180011BA0();
  v6 = 2 * a3;
  a1[3] = (char *)7;
  if ( a3 > 7 )
  {
    v8 = sub_18001300C(a3, 7uLL, 0x7FFFFFFFFFFFFFFEuLL);
    v9 = sub_180012270(v8 + 1);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    *a1 = v10;
    a1[2] = (char *)a3;
    a1[3] = (char *)v8;
    v11 = v10;
    memcpy(v10, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)&v11[v6] = 0;
  }
  else
  {
    a1[2] = (char *)a3;
    memcpy(a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v6) = 0;
  }
  return result;
}
