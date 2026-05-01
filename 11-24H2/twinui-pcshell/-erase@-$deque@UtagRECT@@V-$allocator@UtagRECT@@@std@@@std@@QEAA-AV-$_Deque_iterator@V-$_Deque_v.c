/*
 * XREFs of ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x18008D790
 * Callers:
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x18008D468 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 * Callees:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@0@V10@00@Z @ 0x18008D8CC (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UtagRECT@@@std@@@std@@@.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@0@V10@00@Z @ 0x1802C7C44 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V.c)
 */

__int64 **__fastcall std::deque<tagRECT>::erase(__int64 *a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // r8
  __int64 v8; // r9
  __int64 *v9; // r10
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 *v13; // r11
  __int64 v14; // r15
  bool v15; // zf
  __int64 *v17; // rax
  _QWORD v18[3]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-38h]
  _QWORD v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v22; // [rsp+60h] [rbp-20h]
  _BYTE v23[24]; // [rsp+68h] [rbp-18h] BYREF

  v5 = *(__int64 **)(a3 + 16);
  v6 = a1;
  if ( a1 )
    a1 = (__int64 *)*a1;
  v7 = *(__int64 **)(a4 + 16);
  if ( v6 )
    v8 = *v6;
  else
    v8 = 0LL;
  v9 = (__int64 *)v6[3];
  v10 = (char *)v5 - (char *)v9;
  v11 = (char *)v7 - (char *)v5;
  if ( v7 == v5 )
  {
    a2[1] = 0LL;
    *a2 = a1;
    a2[2] = v5;
  }
  else
  {
    v12 = v6[4];
    v18[1] = 0LL;
    v13 = (__int64 *)((char *)v9 + v12);
    v19[1] = 0LL;
    v21[1] = 0LL;
    v14 = *v6;
    v18[2] = v7;
    v18[0] = v8;
    if ( v10 >= (char *)v13 - (char *)v7 )
    {
      v21[0] = a1;
      v22 = v5;
      v20 = v13;
      v19[0] = v14;
      ((void (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, _QWORD *))std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>>)(
        v23,
        v18,
        v19,
        v21);
      do
      {
        v15 = v6[4]-- == 1;
        if ( v15 )
          v6[3] = 0LL;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v19[0] = a1;
      v20 = v5;
      v22 = v9;
      v21[0] = v14;
      ((void (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, _QWORD *))std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>>)(
        v23,
        v21,
        v19,
        v18);
      do
      {
        v15 = v6[4]-- == 1;
        if ( v15 )
          v6[3] = 0LL;
        else
          ++v6[3];
        --v11;
      }
      while ( v11 );
    }
    a2[1] = 0LL;
    v17 = (__int64 *)*v6;
    a2[2] = (__int64 *)(v10 + v6[3]);
    *a2 = v17;
  }
  return a2;
}
