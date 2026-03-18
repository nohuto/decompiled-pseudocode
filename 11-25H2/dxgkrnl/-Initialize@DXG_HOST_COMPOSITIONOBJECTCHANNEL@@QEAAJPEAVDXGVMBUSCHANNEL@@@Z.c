/*
 * XREFs of ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401B3904
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402000D0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006BD3C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x140205AF4 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402E7614 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(struct _EPROCESS **this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  __int64 v6; // rcx
  int v7; // ebx
  struct _EPROCESS *CurrentProcess; // rax
  int v9; // eax

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGSESSIONMGR::GetSessionData(*((DXGSESSIONMGR **)Global + 118));
  if ( SessionData )
  {
    v7 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, this + 3);
    if ( v7 >= 0 )
    {
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6);
      this[4] = CurrentProcess;
      ObfReferenceObject(CurrentProcess);
      v9 = DXGVMBUSCHANNEL::RegisterSubscriber(a2, 0x706D6F63u, (struct IDXGCHANNELSUBSCRIBER *)this, this + 1);
      v7 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(3LL, v9);
        WdLogGlobalForLineNumber = 54;
      }
    }
  }
  else
  {
    v7 = -1073741790;
    WdLogSingleEntry1(3LL, -1073741790LL);
    WdLogGlobalForLineNumber = 43;
  }
  return (unsigned int)v7;
}
