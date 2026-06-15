/*
 * XREFs of ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002F670
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14002E2E8 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CPipeInstance::SetModulesManagerOnAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v4 = *((_QWORD *)this + 3);
  while ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_DWORD *)(v5 + 40) == 2 )
    {
      v6 = 0LL;
      v10 = 0LL;
      v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL);
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v6 = v10;
      }
      v3 = 0;
      if ( v6 != v7 )
      {
        v8 = v6;
        v6 = 0LL;
        v10 = 0LL;
        if ( v7 )
        {
          (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
            v7,
            &GUID_98f37dac_d0b6_49f5_896a_aa4d169a4c48,
            &v10);
          v6 = v10;
        }
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          v6 = v10;
        }
      }
      if ( v6 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64, struct Windows::Media::Devices::IAudioDeviceModulesManager *))(*(_QWORD *)v6 + 24LL))(
               v6,
               a2);
        if ( v3 < 0 )
        {
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::SetModulesManagerOnAPOs", 0xC37u, v3);
          return (unsigned int)v3;
        }
        v6 = v10;
      }
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v3;
}
