/*
 * XREFs of _lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator() @ 0x1801C3004
 * Callers:
 *     _lambda_9193c85b91a90ecd300d0af0c9084680_::operator() @ 0x1801C2E94 (_lambda_9193c85b91a90ecd300d0af0c9084680_--operator().c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801C4840 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058550 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$list@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@1@@Z @ 0x18009A49C (--0-$list@U-$pair@$$CBKPEAVInputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKPEAVInputInfoVali.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator()(__int64 **a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 *result; // rax
  _DWORD *v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]
  _DWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = operator new(0x48uLL);
  *(_OWORD *)v7 = 0LL;
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = &std::_Ref_count_obj2<HotKeyInfo>::`vftable';
  *((_OWORD *)v7 + 1) = 0LL;
  *((_OWORD *)v7 + 2) = 0LL;
  *((_OWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  *((_QWORD *)v7 + 2) = 0LL;
  v7[6] = 0;
  std::list<std::pair<unsigned long const,InputInfoValidator *>>::list<std::pair<unsigned long const,InputInfoValidator *>>((_QWORD *)v7 + 7);
  v5 = v7 + 4;
  v6 = (std::_Ref_count_base *)v7;
  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
    *a1,
    (__int64 *)&v5);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v2 = **a1;
  *(_OWORD *)v2 = *(_OWORD *)a1[1];
  *(_DWORD *)(v2 + 16) = *(_DWORD *)a1[2];
  *(_DWORD *)(v2 + 28) = *(_DWORD *)a1[3];
  v3 = a1[4];
  *(_DWORD *)(v2 + 20) = *(_DWORD *)v3 & 0xF;
  *(_WORD *)(v2 + 24) = *(_WORD *)v3 & 0x7A80;
  *(_BYTE *)(v2 + 32) = *(_BYTE *)a1[5];
  result = a1[6];
  *(_BYTE *)result = 1;
  return result;
}
