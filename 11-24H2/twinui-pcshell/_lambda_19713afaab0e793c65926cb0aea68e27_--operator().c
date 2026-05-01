/*
 * XREFs of _lambda_19713afaab0e793c65926cb0aea68e27_::operator() @ 0x18048E6B8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ee2025788965756f05953a4434f1e483___::Invoke @ 0x18048F8B0 (CAsyncCallbackWithLambda__lambda_ee2025788965756f05953a4434f1e483___--Invoke.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000A9D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180112FA4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180259074 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048FB74 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1804904A8 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_19713afaab0e793c65926cb0aea68e27_::operator()(
        int **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int *v4; // rax
  bool v6; // di
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rcx
  int v11; // edx
  int *v12; // rcx
  int *v13; // rax
  __int64 v14; // rcx
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h]
  const char *v18; // [rsp+70h] [rbp+18h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a1;
  v16 = 0;
  v6 = 0;
  if ( v4[118] > 0 )
  {
    SHRegGetBOOLWithREGSAM(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", a4, &v16);
    if ( v16 )
      v6 = 1;
  }
  v7 = GazeUITraceLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    v10 = *a1;
    LOBYTE(v16) = v6;
    v11 = v10[118];
    v18 = "AccessibilityExperienceManager::OnNotificationEvent";
    v17 = v11;
    v19 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v7,
      (__int64)&unk_18080520A,
      v8,
      v9,
      (__int64)&v19,
      &v18);
  }
  v12 = *a1;
  if ( v6 )
  {
    if ( !*((_BYTE *)v12 + 465)
      && (int)AccessibilityExperienceManager::_CreateModalExperienceAsync((AccessibilityExperienceManager *)v12) >= 0 )
    {
      v13 = *a1;
      *((_BYTE *)v13 + 465) = 1;
      v14 = *((_QWORD *)v13 + 47);
      if ( v14 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, 0LL);
    }
  }
  else
  {
    AccessibilityExperienceManager::_DismissView(
      (AccessibilityExperienceManager *)v12,
      (struct AccessibilityViewInfo *)(v12 + 92));
  }
  return 0LL;
}
