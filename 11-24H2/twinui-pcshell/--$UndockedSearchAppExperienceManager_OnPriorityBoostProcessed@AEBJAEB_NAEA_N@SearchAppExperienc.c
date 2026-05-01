/*
 * XREFs of ??$UndockedSearchAppExperienceManager_OnPriorityBoostProcessed@AEBJAEB_NAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEBJAEB_NAEA_N@Z @ 0x1800AD434
 * Callers:
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AD348 (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800ACB1C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

int __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityBoostProcessed<long const &,bool const &,bool &>(
        int *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // r8
  int v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 4u )
  {
    v8 = *a2;
    v9 = *a3;
    v12 = *a1;
    v11 = v8;
    v13 = 0x1000000LL;
    v14 = v9;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (__int64)v6,
                    byte_1807F1222,
                    v9,
                    v7,
                    (__int64)&v12,
                    (__int64)&v11,
                    (__int64)&v14,
                    (__int64)&v13);
  }
  return (int)v6;
}
