/*
 * XREFs of ??0?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@QEAA@_KAEBV?$allocator@U_PROCESSOR_POWER_INFORMATION@@@1@@Z @ 0x180347198
 * Callers:
 *     ?GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z @ 0x18034E51C (-GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800489AC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@YAPEAU_PROCESSOR_POWER_INFORMATION@@PEAU1@_KAEAV?$allocator@U_PROCESSOR_POWER_INFORMATION@@@0@@Z @ 0x180344860 (--$_Uninitialized_value_construct_n@V-$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@YAPE.c)
 *     ??1?$_Tidy_guard@V?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@@std@@QEAA@XZ @ 0x1803479C0 (--1-$_Tidy_guard@V-$vector@U_PROCESSOR_POWER_INFORMATION@@V-$allocator@U_PROCESSOR_POWER_INFORMA.c)
 */

char **__fastcall std::vector<_PROCESSOR_POWER_INFORMATION>::vector<_PROCESSOR_POWER_INFORMATION>(
        char **a1,
        unsigned __int64 a2)
{
  size_t size_of; // rax
  char *v5; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<24>(a2);
    v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v5;
    a1[2] = &v5[24 * a2];
    v7[0] = 0LL;
    a1[1] = std::_Uninitialized_value_construct_n<std::allocator<_PROCESSOR_POWER_INFORMATION>>(v5, a2);
    std::_Tidy_guard<std::vector<_PROCESSOR_POWER_INFORMATION>>::~_Tidy_guard<std::vector<_PROCESSOR_POWER_INFORMATION>>(v7);
  }
  return a1;
}
