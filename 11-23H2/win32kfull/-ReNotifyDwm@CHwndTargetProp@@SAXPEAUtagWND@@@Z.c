/*
 * XREFs of ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1C002327C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0023798 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1C008C318 (DwmAsyncCreateDCompositionHwndTarget.c)
 */

void __fastcall CHwndTargetProp::ReNotifyDwm(struct tagWND *a1)
{
  __int64 v1; // rbp
  unsigned int i; // ebx
  CompositionObject *v3; // rcx
  void *v4; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  void *v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v5) )
  {
    v6 = 0LL;
    v1 = v5;
    for ( i = 0; i < 3; ++i )
    {
      v3 = *(CompositionObject **)(v1 + 16LL * (int)i + 24);
      if ( v3 )
      {
        if ( (int)CompositionObject::OpenDwmHandle(v3, &v6) >= 0 )
        {
          v4 = (void *)ReferenceDwmApiPort();
          DwmAsyncCreateDCompositionHwndTarget(v4);
        }
      }
    }
  }
}
