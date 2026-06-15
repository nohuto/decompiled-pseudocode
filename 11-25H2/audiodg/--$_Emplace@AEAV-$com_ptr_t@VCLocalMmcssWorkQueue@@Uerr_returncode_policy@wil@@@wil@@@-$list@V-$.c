/*
 * XREFs of ??$_Emplace@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@?$list@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@1@QEAU21@AEAV?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x14006DA5C
 * Callers:
 *     ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x14004BBB4 (-GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x14006C450 (--0-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14006DBD4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@VCLocalMmcssWorkQueue@@Uerr_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>>::_Emplace<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy> &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v9 = a1;
  v10 = 0LL;
  v6 = operator new(0x18uLL);
  wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>(
    v6 + 2,
    a3);
  ++*(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  *v6 = a2;
  v6[1] = v7;
  v10 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v7 = v6;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CLocalMmcssWorkQueue,wil::err_returncode_policy>,void *>>>(&v9);
  return v6;
}
