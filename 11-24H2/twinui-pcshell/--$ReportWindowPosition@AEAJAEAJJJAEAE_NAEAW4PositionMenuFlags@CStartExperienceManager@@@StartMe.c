/*
 * XREFs of ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x1800B6BA4
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5D74 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     ?Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B67AC (-Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x1801F8744 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

const struct _tlgProvider_t *__fastcall StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        int *a8)
{
  const struct _tlgProvider_t *result; // rax
  int v13; // edx
  int v14; // r11d
  int v15; // r8d
  int v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h] BYREF
  int v20; // [rsp+70h] [rbp-10h] BYREF
  _DWORD v21[3]; // [rsp+74h] [rbp-Ch] BYREF
  int v22; // [rsp+A0h] [rbp+20h] BYREF

  result = StartMenuExperienceLogging::Provider(a1);
  if ( *(_DWORD *)result > 4u )
  {
    v13 = *a6;
    v14 = *a8;
    v16 = *a7;
    v15 = *(_QWORD *)(a1 + 272) + 8;
    v18 = *a5;
    v19 = *a4;
    v20 = *a3;
    v21[0] = *a2;
    v17 = v13;
    v22 = v14;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807ED76E,
                                            v15,
                                            (_DWORD)a7,
                                            (__int64)v21,
                                            (__int64)&v20,
                                            (__int64)&v19,
                                            (__int64)&v18,
                                            (__int64)&v17,
                                            (__int64)&v16,
                                            (__int64)&v22);
  }
  return result;
}
