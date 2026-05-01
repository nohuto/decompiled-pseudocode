/*
 * XREFs of ??0?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UtagPOINTER_DEVICE_INFO@@@1@@Z @ 0x1804852E8
 * Callers:
 *     ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x18048596C (-GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA-AUDigitizerState@2@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??1?$_Tidy_guard@V?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x1804855CC (--1-$_Tidy_guard@V-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@.c)
 */

_QWORD *__fastcall std::vector<tagPOINTER_DEVICE_INFO>::vector<tagPOINTER_DEVICE_INFO>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
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
    if ( a2 > 0x3CAE759203CAE7LL )
      std::_Xlength_error("vector too long");
    v4 = 1080 * a2;
    v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(1080 * a2);
    *a1 = v5;
    v6 = v5;
    a1[2] = &v5[v4];
    memset_0(v5, 0, v4);
    v8 = 0LL;
    a1[1] = &v6[v4];
    std::_Tidy_guard<std::vector<tagPOINTER_DEVICE_INFO>>::~_Tidy_guard<std::vector<tagPOINTER_DEVICE_INFO>>(&v8);
  }
  return a1;
}
