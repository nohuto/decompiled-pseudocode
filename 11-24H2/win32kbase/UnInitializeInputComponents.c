/*
 * XREFs of UnInitializeInputComponents @ 0x1400D0638
 * Callers:
 *     InputUnInitialize @ 0x1400D054C (InputUnInitialize.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1400D082C (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ?UnInitialize@CInputConfig@@SAXXZ @ 0x1400D089C (-UnInitialize@CInputConfig@@SAXXZ.c)
 *     ?UnInitialize@CTouchProcessor@@SAJXZ @ 0x1400D08EC (-UnInitialize@CTouchProcessor@@SAJXZ.c)
 *     ?UnInitialize@CCursorClip@@SAJXZ @ 0x1400D0A04 (-UnInitialize@CCursorClip@@SAJXZ.c)
 *     ?UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ @ 0x14019DE44 (-UnInitialize@RootSynthesizedMouseList@InputVirtualization@@SAXXZ.c)
 *     ?UnInitialize@CKernelSensorThread@@SAXXZ @ 0x14019F0E8 (-UnInitialize@CKernelSensorThread@@SAXXZ.c)
 *     ?UnInitialize@CMasterInputThread@@SAXXZ @ 0x14019F1AC (-UnInitialize@CMasterInputThread@@SAXXZ.c)
 *     ??1CActivationObjectManager@@AEAA@XZ @ 0x1401A6970 (--1CActivationObjectManager@@AEAA@XZ.c)
 *     ?UnInitialize@CDesktopInputSink@@SAXXZ @ 0x140210128 (-UnInitialize@CDesktopInputSink@@SAXXZ.c)
 *     ?UnInitialize@CFrameIdGenerator@@SAXXZ @ 0x140212300 (-UnInitialize@CFrameIdGenerator@@SAXXZ.c)
 */

void __fastcall UnInitializeInputComponents(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  char *v3; // rbx
  __int64 v4; // rcx
  char *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  char *v11; // rcx
  __int64 v12; // rcx
  char *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  char *v17; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(char **)(UserSessionState + 18920);
  if ( v3 )
  {
    CActivationObjectManager::~CActivationObjectManager(*(CActivationObjectManager **)(UserSessionState + 18920));
    GreDeleteFastMutex(v3);
  }
  *(_QWORD *)(W32GetUserSessionState(v2) + 18920) = 0LL;
  InputExtensibilityCallout::UnInitialize();
  v5 = *(char **)(W32GetUserSessionState(v4) + 3064);
  if ( v5 )
    GreDeleteFastMutex(v5);
  *(_QWORD *)(W32GetUserSessionState(v5) + 3064) = 0LL;
  v7 = W32GetUserSessionState(v6);
  v8 = *(char **)(v7 + 3056);
  if ( v8 )
    GreDeleteFastMutex(v8);
  *(_QWORD *)(v7 + 3056) = 0LL;
  CTouchProcessor::UnInitialize();
  CCursorClip::UnInitialize();
  CMasterInputThread::UnInitialize();
  CKernelSensorThread::UnInitialize();
  CInputConfig::UnInitialize();
  v10 = W32GetUserSessionState(v9);
  v11 = *(char **)(v10 + 19656);
  if ( v11 )
  {
    GreDeleteFastMutex(v11);
    *(_QWORD *)(v10 + 19656) = 0LL;
  }
  CFrameIdGenerator::UnInitialize();
  v13 = *(char **)(W32GetUserSessionState(v12) + 19008);
  if ( v13 )
    GreDeleteFastMutex(v13);
  *(_QWORD *)(W32GetUserSessionState(v13) + 19008) = 0LL;
  v14 = *(void **)(W32GetUserInputMgrSessionState() + 24);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  InputVirtualization::RootSynthesizedMouseList::UnInitialize();
  CDesktopInputSink::UnInitialize();
  v16 = W32GetUserSessionState(v15);
  v17 = *(char **)(v16 + 70968);
  if ( v17 )
  {
    GreDeleteFastMutex(v17);
    *(_QWORD *)(v16 + 70968) = 0LL;
  }
}
