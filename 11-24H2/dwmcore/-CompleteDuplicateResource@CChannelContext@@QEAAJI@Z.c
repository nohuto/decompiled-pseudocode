/*
 * XREFs of ?CompleteDuplicateResource@CChannelContext@@QEAAJI@Z @ 0x180191758
 * Callers:
 *     ?Channel_CompleteDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_COMPLETEDUPLICATERESOURCE@@@Z @ 0x180202DB0 (-Channel_CompleteDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x180191880 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180191950 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     McTemplateU0qqxqx_EventWriteTransfer @ 0x180191A54 (McTemplateU0qqxqx_EventWriteTransfer.c)
 */

__int64 __fastcall CChannelContext::CompleteDuplicateResource(CChannelContext *this, unsigned int a2)
{
  __int64 *v2; // rbx
  __int64 v4; // r14
  unsigned int v6; // r15d
  __int64 v7; // r12
  int v8; // eax
  unsigned int v9; // esi
  __int64 *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (__int64 *)*((_QWORD *)this + 10);
  v4 = *((_QWORD *)this + 6);
  v6 = *((_DWORD *)v2 + 2);
  v7 = *v2;
  v8 = HANDLE_TABLE::AssignEntry((HANDLE_TABLE *)(v4 + 16), a2, v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x22u, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\channelcontext.cpp",
      (const char *)v9);
    return v9;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v4 + 40) + *(_DWORD *)(v4 + 24) * a2 + 8LL) = v7;
    CResourceTable::CountResource(v4, v6);
    v10 = (__int64 *)*((_QWORD *)this + 11);
    while ( 1 )
    {
      v2 += 2;
      if ( v2 == v10 )
        break;
      *(v2 - 2) = *v2;
      *((_DWORD *)v2 - 2) = *((_DWORD *)v2 + 2);
    }
    *((_QWORD *)this + 11) -= 16LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000000) != 0 )
      McTemplateU0qqxqx_EventWriteTransfer(
        a2,
        (unsigned int)&EVTDESC_DCOMPEVENT_COMPLETE_DUPLICATE,
        *((_DWORD *)this + 6),
        a2,
        a2,
        v6,
        v7);
    return 0LL;
  }
}
