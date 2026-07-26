/*
 * XREFs of ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x14015DAC0
 * Callers:
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x14015D9E0 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 * Callees:
 *     ??0?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@$$QEAV01@@Z @ 0x140060C30 (--0-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x140066AB0 (--$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x14015DBC0 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x14015DD40 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14015DF50 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x14015E2C0 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildFilterLink(void *a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rdi
  NDIS_BIND_LINK_BASE *v12; // rbx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = a1;
  ndisBindGetFilterDriver(v14, a3, 0LL);
  v8 = v14[0];
  if ( v14[0] )
  {
    wil::make_unique_nothrow<NDIS_BIND_FILTER_LINK,>(&P);
    v11 = P;
    if ( P )
    {
      if ( (char *)P + 80 != (char *)v14 )
        KRef<NDIS_BIND_FILTER_DRIVER>::reset((char *)P + 80, v8);
      v11[22] = a4;
      wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
        a2,
        (__int64 *)&P);
      v12 = (NDIS_BIND_LINK_BASE *)P;
      if ( P )
      {
        KRef<NDIS_BIND_FILTER_DRIVER>::unref((char *)P + 80, v9, v10);
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v12);
        ExFreePoolWithTag(v12, 0x4C6C4642u);
      }
    }
    else
    {
      *a2 = 0LL;
    }
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(v14, v9, v10);
    return a2;
  }
  else
  {
    *a2 = 0LL;
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(v14, v6, v7);
    return a2;
  }
}
