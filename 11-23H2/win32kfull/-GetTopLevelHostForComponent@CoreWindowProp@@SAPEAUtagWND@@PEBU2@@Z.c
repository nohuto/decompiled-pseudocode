/*
 * XREFs of ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00AE7EC
 * Callers:
 *     xxxSetWindowPos @ 0x1C0045448 (xxxSetWindowPos.c)
 *     NtUserSetWindowPos @ 0x1C0045B40 (NtUserSetWindowPos.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0073520 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00A3D80 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00A52DC (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00A6318 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00AE784 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01BF960 (-RequestModernAppClose@@YAHXZ.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C021FA54 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0045408 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00B5154 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C021F9B0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetTopLevelHostForComponent(const struct tagWND *a1)
{
  const struct tagWND *v1; // rbx
  const struct tagWND *Host; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 80) & 0x1000) != 0 )
    {
      v5 = 0LL;
      if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v5) )
      {
        if ( *(_DWORD *)(v5 + 28) )
        {
          v1 = a1;
          do
          {
            Host = CoreWindowProp::GetHost(v1);
            v1 = Host;
          }
          while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host) );
        }
      }
    }
  }
  return v1;
}
