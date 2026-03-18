/*
 * XREFs of ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002060
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x1400022B8 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x140002358 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400024B0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002E78 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140003428 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400061C0 (IsDWMGhostHandleGhostMsgPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDwmAppHost::s_LpcCommandHandler(
        struct IPortMessage *a1,
        const struct PORT_CONTEXT *a2,
        int *a3,
        int *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  CDwmAppHost *v10; // rcx
  int v12; // eax
  unsigned int v13; // edi
  CDwmAppHost *v14; // rcx
  CDwmAppHost *v15; // rcx

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct IPortMessage *, const struct PORT_CONTEXT *))(*(_QWORD *)a1 + 16LL))(a1, a2);
  v9 = *(_WORD *)(v8 + 4) >> 15;
  *a3 = 1;
  *a4 = 0;
  if ( (*(_WORD *)(v8 + 4) & 0x7FFF) == 1 )
  {
    switch ( *(_DWORD *)(v8 + 40) )
    {
      case 0x20000001:
        if ( *(_DWORD *)(v8 + 8) == (_DWORD)qword_14001D5B0 )
        {
          (*(void (__fastcall **)(struct IPortMessage *, _QWORD, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0LL, v9);
          *a4 = 1;
          CDwmAppHost::Shutdown(v15, -805305602);
        }
        break;
      case 0x20000003:
        if ( *(_DWORD *)(v8 + 8) == (_DWORD)qword_14001D5B0 )
        {
          CSettingsManager::Cleanup((CSettingsManager *)qword_14001D5C8);
          AcquireSRWLockExclusive(&SRWLock);
          GetCurrentThreadId();
          byte_14001D5E8 = 1;
          dword_14001D600 = 0;
          ReleaseSRWLockExclusive(&SRWLock);
          CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)qword_14001D5C8);
          CDwmAppHost::LpcNotifySettingsChange(v14, 0x7D3u);
          (*(void (__fastcall **)(struct IPortMessage *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, 0LL);
          *a4 = 1;
        }
        break;
      case 0x40000034:
        if ( (_BYTE)v9 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
        {
          DWMGhostHandleGhostMsg(a1);
          *a4 = 1;
        }
        break;
      default:
        goto LABEL_6;
    }
  }
  else if ( (*(_WORD *)(v8 + 4) & 0x7FFF) == 3 )
  {
    if ( *(_DWORD *)(v8 + 40) == 536870914 )
    {
      if ( *(_DWORD *)(v8 + 8) == (_DWORD)qword_14001D5B0 )
        CSettingsManager::PropagateUserLogon(
          (CSettingsManager *)qword_14001D5C8,
          *(HKEY *)(v8 + 52),
          *(HKEY *)(v8 + 60),
          *(HKEY *)(v8 + 68),
          *(_DWORD *)(v8 + 76) != 0);
    }
    else
    {
      v10 = (CDwmAppHost *)(unsigned int)(*(_DWORD *)(v8 + 40) - 1073741876);
      if ( *(_DWORD *)(v8 + 40) == 1073741876 )
      {
        if ( (_BYTE)v9 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
          DWMGhostHandleGhostMsg(a1);
      }
      else
      {
        if ( *(_DWORD *)(v8 + 40) != 1073741878 )
        {
LABEL_6:
          *a3 = 0;
          return v7;
        }
        if ( (_BYTE)v9 )
        {
          *a3 = 0;
          v12 = CDwmAppHost::LpcNotifySettingsChange(v10, 0x21u);
          v13 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x21Cu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1BBu, 0LL);
          }
          return v13;
        }
      }
    }
  }
  return v7;
}
