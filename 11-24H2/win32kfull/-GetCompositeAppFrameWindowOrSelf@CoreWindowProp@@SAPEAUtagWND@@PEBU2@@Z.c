/*
 * XREFs of ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     PostIAMShellHookMessageEx @ 0x140087650 (PostIAMShellHookMessageEx.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1400F6BF4 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x1400F829C (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     NtUserGetForegroundWindow @ 0x140242440 (NtUserGetForegroundWindow.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140252698 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserNavigateFocus @ 0x140299E00 (NtUserNavigateFocus.c)
 *     _lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator() @ 0x1402A5240 (_lambda_f1f8f0736c0bde49f507539c36edf3c7_--operator().c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F63C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindowOrSelf(const struct tagWND *a1, __int64 a2)
{
  const struct tagWND *v2; // rdi
  const struct tagWND *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  const struct tagWND *Host; // rax
  __int64 v9; // rdx

  v2 = a1;
  v3 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1, a2) )
  {
    v3 = v2;
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
          {
            if ( v3 )
              return v3;
            return v2;
          }
        }
      }
      v3 = (const struct tagWND *)*((_QWORD *)v3 + 13);
    }
  }
  return v2;
}
