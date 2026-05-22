/*
 * XREFs of ?NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180174DAC
 * Callers:
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180175BEC (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x180007E44 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017070 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180039B30 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::ControllerNavigationManager::NavigationResumed(struct tagRECT *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 right; // [rsp+50h] [rbp-20h] BYREF
  __int64 bottom; // [rsp+58h] [rbp-18h] BYREF
  __int64 left; // [rsp+60h] [rbp-10h] BYREF
  __int64 top; // [rsp+68h] [rbp-8h] BYREF
  LONG y; // [rsp+9Ch] [rbp+2Ch]
  __int64 v12; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+38h] BYREF

  y = a2.y;
  x = a2.x;
  if ( InputETW::IsEnabled() )
  {
    v4 = InputETW::Provider();
    if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 1LL) )
    {
      right = a1->right;
      bottom = a1->bottom;
      left = a1->left;
      top = a1->top;
      v12 = y;
      v13 = x;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v5,
        (__int64)&unk_180219A85,
        v5,
        v6,
        (__int64)&top,
        (__int64)&left,
        (__int64)&bottom,
        (__int64)&right,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
