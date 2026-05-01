/*
 * XREFs of ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x1805A5924
 * Callers:
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x1805A6A80 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAGV?$allocator@PEAG@std@@@std@@@std@@QEAA@XZ @ 0x180320B10 (--1-$_Tidy_guard@V-$vector@PEAGV-$allocator@PEAG@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_raw@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1805A7C08 (-_Buy_raw@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 *__fastcall std::vector<unsigned __int64>::vector<unsigned __int64>(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  signed __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<unsigned __int64>::_Buy_raw();
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v6 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v5);
    v8 = 0LL;
    a1[1] = v6 + 8 * (v5 >> 3);
    std::_Tidy_guard<std::vector<unsigned short *>>::~_Tidy_guard<std::vector<unsigned short *>>(&v8);
  }
  return a1;
}
