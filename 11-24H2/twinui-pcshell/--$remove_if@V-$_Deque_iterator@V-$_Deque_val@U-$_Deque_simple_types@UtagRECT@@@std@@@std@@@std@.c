/*
 * XREFs of ??$remove_if@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@0@V10@V10@V_lambda_f9bbe9b79fcb587def877da126a47fb9_@@@Z @ 0x1802AA81C
 * Callers:
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x18008D468 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::remove_if<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>,_lambda_f9bbe9b79fcb587def877da126a47fb9_>(
        __int64 **a1,
        __int64 **a2,
        __int64 a3)
{
  __int64 *v4; // r9
  __int64 v5; // r11
  __int64 *v6; // rbx
  _DWORD *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 **result; // rax

  v4 = a2[2];
  if ( *a2 )
    v5 = **a2;
  else
    v5 = 0LL;
  v6 = *(__int64 **)(a3 + 16);
  while ( v4 != v6 )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(v5 + 8) + 8 * ((unsigned __int64)v4 & (*(_QWORD *)(v5 + 16) - 1LL)));
    if ( (unsigned int)(v7[3] - v7[1]) < 0xC8 || (unsigned int)(v7[2] - *v7) < 0xC8 )
      break;
    v4 = (__int64 *)((char *)v4 + 1);
  }
  v8 = v4;
  if ( v4 != v6 )
  {
    while ( 1 )
    {
      v4 = (__int64 *)((char *)v4 + 1);
      if ( v4 == v6 )
        break;
      v9 = *(_QWORD *)(v5 + 8);
      v10 = *(_QWORD *)(v9 + 8 * ((unsigned __int64)v4 & (*(_QWORD *)(v5 + 16) - 1LL)));
      if ( (unsigned int)(*(_DWORD *)(v10 + 12) - *(_DWORD *)(v10 + 4)) >= 0xC8
        && (unsigned int)(*(_DWORD *)(v10 + 8) - *(_DWORD *)v10) >= 0xC8 )
      {
        v11 = (unsigned __int64)v8 & (*(_QWORD *)(v5 + 16) - 1LL);
        v8 = (__int64 *)((char *)v8 + 1);
        *(_OWORD *)*(_QWORD *)(v9 + 8 * v11) = *(_OWORD *)v10;
      }
    }
  }
  v12 = *a2;
  a1[1] = 0LL;
  *a1 = v12;
  result = a1;
  a2[2] = v8;
  a1[2] = v8;
  return result;
}
