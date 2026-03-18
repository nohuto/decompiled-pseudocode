/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801390F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WakeMTForMidmanipulationUpdateIfNecessary@CManipulationManager@@QEAAXXZ @ 0x180139388 (-WakeMTForMidmanipulationUpdateIfNecessary@CManipulationManager@@QEAAXXZ.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x180139454 (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180139788 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(__int64 a1, int a2, int a3, unsigned __int8 a4, void *a5)
{
  __int64 v5; // rdi
  int v7; // r15d
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // r14
  int v14; // ebx
  int updated; // eax
  CManipulationManager *v16; // rcx
  int v17; // r8d
  int v18; // r9d
  unsigned int v19; // esi
  int v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  int v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+30h] BYREF

  v5 = *(_QWORD *)(a1 - 48);
  v25 = 0LL;
  v7 = a4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  v10 = *(_QWORD *)(v5 + 640);
  if ( v10 && ((*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10), (v12 = *(_QWORD *)(v5 + 640)) != 0) )
  {
    v13 = a1 - 72;
    v14 = (int)a5;
    updated = CManipulationManager::NotifyUpdateTemporaryConfiguration(v11, v13, a2, a3, v7, (_DWORD)a5);
    v19 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x2BBu, 0LL);
    }
    else
    {
      if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 )
      {
        v16 = (CManipulationManager *)(qword_180404D30 & 2);
        if ( v16 == (CManipulationManager *)qword_180404D30 )
        {
          LODWORD(v25) = v14;
          v21 = v7;
          v22 = a3;
          v23 = a2;
          v24 = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (_DWORD)v16,
            (unsigned int)&unk_1803D7D20,
            v17,
            v18,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v25);
        }
      }
      CManipulationManager::WakeMTForMidmanipulationUpdateIfNecessary(v16);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v19 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x2B4u, 0LL);
  }
  return v19;
}
