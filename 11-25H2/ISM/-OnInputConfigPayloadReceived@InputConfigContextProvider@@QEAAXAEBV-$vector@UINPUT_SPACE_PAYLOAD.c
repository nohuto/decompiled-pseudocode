/*
 * XREFs of ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000B778
 * Callers:
 *     ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AC700 (-OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamo.c)
 * Callees:
 *     ?ClearConfigs@InputConfigContextProvider@@AEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000B81C (-ClearConfigs@InputConfigContextProvider@@AEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18000BA1C (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@$$QEAU2@@Z @ 0x180054E14 (--$_Emplace_reallocate@UINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT.c)
 *     ?CopyConfig@InputConfigContextProvider@@AEAA?AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z @ 0x180099E98 (-CopyConfig@InputConfigContextProvider@@AEAA-AUINPUT_SPACE_PAYLOAD@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall InputConfigContextProvider::OnInputConfigPayloadReceived(InputConfigContextProvider *this, __int64 *a2)
{
  char *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE v10[24]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (char *)this + 256;
  InputConfigContextProvider::ClearConfigs(this, (char *)this + 256);
  v6 = a2[1];
  for ( i = *a2; i != v6; i += 24LL )
  {
    v8 = InputConfigContextProvider::CopyConfig(v5, v10, i);
    v9 = *((_QWORD *)v2 + 1);
    if ( v9 == *((_QWORD *)v2 + 2) )
    {
      std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD>(v2, v9, v8);
    }
    else
    {
      *(_OWORD *)v9 = *(_OWORD *)v8;
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(v8 + 16);
      *((_QWORD *)v2 + 1) += 24LL;
    }
  }
  InputConfigContextProvider::Broadcast(this);
}
