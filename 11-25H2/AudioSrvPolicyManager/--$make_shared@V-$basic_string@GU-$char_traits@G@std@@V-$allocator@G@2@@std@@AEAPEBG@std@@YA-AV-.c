/*
 * XREFs of ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000D098
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18000B110 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18003CEDC (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x18003D890 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x18003DEF0 (PbmReportApplicationState.c)
 * Callees:
 *     ??$_Construct_in_place@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAPEBG@Z @ 0x18000D130 (--$_Construct_in_place@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<std::wstring,unsigned short const * &>(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rbx

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v6 = v5;
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<std::wstring>::`vftable';
    std::_Construct_in_place<std::wstring,unsigned short const * &>(v5 + 4, a2);
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = v6 + 4;
  a1[1] = v6;
  return a1;
}
