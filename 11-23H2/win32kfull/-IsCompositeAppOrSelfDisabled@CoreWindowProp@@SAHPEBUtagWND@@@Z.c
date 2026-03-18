/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0073520
 * Callers:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0072DBC (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121950 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionIsCompositeAppOrSelfDisabled @ 0x1C01555B0 (EditionIsCompositeAppOrSelfDisabled.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C5BAC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01E3580 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E4BE4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0073600 (IsMessageOnlyWindow.c)
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00AE7EC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00B5154 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C01226C0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0156B54 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(const struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CompositionInputWindowUIOwner = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0 )
    return 1LL;
  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1) && (unsigned int)IsMessageOnlyWindow(CompositionInputWindowUIOwner) )
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  if ( CompositionInputWindowUIOwner )
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)CompositionInputWindowUIOwner + 13);
      if ( !v3 )
        break;
      v4 = *((_QWORD *)CompositionInputWindowUIOwner + 3);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( v3 == *(_QWORD *)(v5 + 24) )
          {
            if ( CompositionInputWindowUIOwner )
            {
              if ( (*((_DWORD *)CompositionInputWindowUIOwner + 80) & 0x1000) == 0
                || (v8 = 0LL, !(unsigned int)CWindowProp::GetProp<CoreWindowProp>(CompositionInputWindowUIOwner, &v8))
                || !*(_DWORD *)(v8 + 28)
                || (TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(CompositionInputWindowUIOwner),
                    (CompositionInputWindowUIOwner = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent)) != 0LL) )
              {
                if ( (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 31LL) & 8) != 0 )
                  return 1;
              }
            }
            return v2;
          }
        }
      }
      CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)CompositionInputWindowUIOwner + 13);
    }
  }
  return v2;
}
