/*
 * XREFs of ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1800D1C04
 * Callers:
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x1800D0FF4 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??1?$_Tidy_guard@V?$vector@GV?$allocator@G@std@@@std@@@std@@QEAA@XZ @ 0x1800D20D0 (--1-$_Tidy_guard@V-$vector@GV-$allocator@G@std@@@std@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::vector<unsigned short>::vector<unsigned short>(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  size_t v4; // rdi
  char *v5; // rax
  char *v6; // rbx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v4 = 2 * a2;
    v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * a2);
    *a1 = v5;
    v6 = v5;
    a1[2] = &v5[v4];
    memset_0(v5, 0, v4);
    v8 = 0LL;
    a1[1] = &v6[v4];
    std::_Tidy_guard<std::vector<unsigned short>>::~_Tidy_guard<std::vector<unsigned short>>(&v8);
  }
  return a1;
}
