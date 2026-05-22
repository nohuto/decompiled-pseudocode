/*
 * XREFs of ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18000C178
 * Callers:
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000BED4 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18000BFD0 (-OnInputConfigMessageReceived@InputConfigContextProvider@@AEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000BE80 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?OnInputConfigChanged@SystemContextManager@@QEAAXXZ @ 0x18000C2CC (-OnInputConfigChanged@SystemContextManager@@QEAAXXZ.c)
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18000C34C (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010A5E0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall InputConfigContextProvider::Broadcast(
        InputConfigContextProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *i; // rbx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  SystemContextManager *v9; // rdi
  char *v10; // rbx
  __int64 v11[3]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *((_QWORD *)this + 33);
  v6 = *((_QWORD *)this + 32);
  v11[0] = -1431655765 * (unsigned int)((v5 - v6) >> 3);
  if ( v6 == v5 )
    v6 = 0LL;
  v11[1] = v6;
  v12 = 1;
  for ( i = (__int64 *)*((_QWORD *)this + 4);
        ;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)i[2] + 24LL))(i[2], v11) )
  {
    i = (__int64 *)*i;
    if ( i == *((__int64 **)this + 4) )
      break;
  }
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
    v9 = (SystemContextManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                                  + 31)
                                                                                + 8LL)
                                                                    + 40LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                             + 31) + 8LL);
    v10 = (char *)v9 + 16;
    if ( v9 )
      (**(void (__fastcall ***)(char *))v10)(v10);
    SystemContextManager::OnInputConfigChanged(v9);
    if ( v9 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v12 != -1LL && v12 && v12 != 1LL )
  {
    if ( v12 == 2LL )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(v11);
    }
    else if ( v12 == 3LL )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Tidy(v11);
    }
  }
}
