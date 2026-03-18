/*
 * XREFs of ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400671BC
 * Callers:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140066FA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1400F7D80 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F63C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindow(const struct tagWND *a1, __int64 a2)
{
  const struct tagWND *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  const struct tagWND *Host; // rax
  __int64 v9; // rdx

  v3 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1, a2) )
  {
    v3 = a1;
    do
    {
      Host = CoreWindowProp::GetHost(v3);
      v3 = Host;
    }
    while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host, v9) );
  }
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)v3 + 13);
      if ( !v4 )
        break;
      v6 = *((_QWORD *)v3 + 3);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
        {
          if ( v4 == *(_QWORD *)(v7 + 24) )
            return v3;
        }
      }
      v3 = (const struct tagWND *)*((_QWORD *)v3 + 13);
    }
    return 0LL;
  }
  return v3;
}
