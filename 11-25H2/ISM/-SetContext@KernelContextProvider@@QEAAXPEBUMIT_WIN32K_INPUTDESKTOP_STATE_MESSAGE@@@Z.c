/*
 * XREFs of ?SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18000CF58
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18000CD80 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000B724 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1801086D0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KernelContextProvider::SetContext(
        KernelContextProvider *this,
        const struct MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE *a2)
{
  __int64 *i; // rbx
  __int64 v4[3]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  *((_OWORD *)this + 8) = *(_OWORD *)a2;
  *(_OWORD *)v4 = *(_OWORD *)a2;
  v5 = 4;
  for ( i = (__int64 *)*((_QWORD *)this + 4);
        ;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)i[2] + 24LL))(i[2], v4) )
  {
    i = (__int64 *)*i;
    if ( i == *((__int64 **)this + 4) )
      break;
  }
  if ( v5 != -1LL && v5 && v5 != 1LL )
  {
    if ( v5 == 2LL )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(v4);
    }
    else if ( v5 == 3LL )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v4);
    }
  }
}
