/*
 * XREFs of ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x180377F18
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18037D1C0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803AB7E0 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800F2B3C (-Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180164DB8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

int __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
        __int64 a1,
        const WCHAR **a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  const WCHAR *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = CortanaProactiveLogging::Provider(a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = *(_QWORD *)(a1 + 272);
    v8 = *a2;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (__int64)v4,
                    byte_1807EAA7A,
                    (const GUID *)(v6 + 8),
                    v5,
                    &v8);
  }
  return (int)v4;
}
