/*
 * XREFs of ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x1401695E8
 * Callers:
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x140169698 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     DwmAsyncCreateDCompositionHwndTarget @ 0x1401CDFB8 (DwmAsyncCreateDCompositionHwndTarget.c)
 */

void __fastcall CHwndTargetProp::ReNotifyDwm(struct tagWND *a1)
{
  __int64 v1; // rbp
  unsigned int i; // ebx
  CompositionObject *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v7) )
  {
    v8 = 0LL;
    v1 = v7;
    for ( i = 0; i < 3; ++i )
    {
      v3 = *(CompositionObject **)(v1 + 16LL * (int)i + 24);
      if ( v3 )
      {
        if ( (int)CompositionObject::OpenDwmHandle(v3, &v8) >= 0 )
        {
          v6 = (void *)ReferenceDwmApiPort(v5, v4);
          DwmAsyncCreateDCompositionHwndTarget(v6);
        }
      }
    }
  }
}
