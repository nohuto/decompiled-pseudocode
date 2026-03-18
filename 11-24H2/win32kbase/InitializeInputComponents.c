/*
 * XREFs of InitializeInputComponents @ 0x1401895D0
 * Callers:
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x14014037C (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CActivationObjectManager@@SAJXZ @ 0x140140414 (-Initialize@CActivationObjectManager@@SAJXZ.c)
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x140145D80 (-Initialize@CInputGlobals@@SAJXZ.c)
 *     ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x1401553E8 (-Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x14015691C (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x1401587A0 (-GetInstance@CContentRects@@CAPEAV1@XZ.c)
 *     ?Initialize@CDesktopInputSink@@SAJXZ @ 0x1401890C8 (-Initialize@CDesktopInputSink@@SAJXZ.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x140189444 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 *     ?Initialize@LastWokenThread@@YAJXZ @ 0x1401A72C0 (-Initialize@LastWokenThread@@YAJXZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x14020B3FC (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     InitializeContext @ 0x140212970 (InitializeContext.c)
 *     ?Initialize@CKernelSensorThread@@SAJXZ @ 0x14021FC9C (-Initialize@CKernelSensorThread@@SAJXZ.c)
 *     ?Initialize@CMasterInputThread@@SAJXZ @ 0x14021FD80 (-Initialize@CMasterInputThread@@SAJXZ.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x14022012C (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 */

__int64 InitializeInputComponents()
{
  __int64 v0; // rcx
  int v1; // ebx
  LastWokenThread *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 UserInputMgrSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v1 = InputExtensibilityCallout::Initialize();
  if ( v1 >= 0 )
  {
    v1 = CActivationObjectManager::Initialize(v0);
    if ( v1 >= 0 )
    {
      v1 = LastWokenThread::Initialize(v2);
      if ( v1 >= 0 )
      {
        v1 = CInputGlobals::Initialize();
        if ( v1 >= 0 )
        {
          v1 = CCursorClip::Initialize();
          if ( v1 >= 0 )
          {
            v1 = CMasterInputThread::Initialize();
            if ( v1 >= 0 )
            {
              v1 = CKernelSensorThread::Initialize();
              if ( v1 >= 0 )
              {
                v1 = CInputConfig::Initialize(v3);
                if ( v1 >= 0 )
                {
                  v5 = Win32AllocPoolZInitImpl(256LL, 0x14uLL, 0x6B747455u);
                  if ( !v5 )
                    return (unsigned int)-1073741801;
                  *(_QWORD *)(W32GetUserSessionState(v4) + 19656) = v5;
                  v1 = CFrameIdGenerator::Initialize(v6);
                  if ( v1 >= 0 )
                  {
                    v1 = CInputSystemMetrics::Initialize();
                    if ( v1 >= 0 )
                    {
                      v1 = InputVirtualization::RootSynthesizedMouseList::Initialize(v7);
                      if ( v1 >= 0 )
                      {
                        UserInputMgrSessionState = W32GetUserInputMgrSessionState();
                        *(_DWORD *)(UserInputMgrSessionState + 16) = 0;
                        *(_QWORD *)(UserInputMgrSessionState + 24) = 0LL;
                        *(_DWORD *)(UserInputMgrSessionState + 20) = 0;
                        *(_QWORD *)(W32GetUserInputMgrSessionState() + 8) = 0LL;
                        *(_QWORD *)(W32GetUserSessionState(v9) + 3344) = 0LL;
                        v1 = CDesktopInputSink::Initialize(v10);
                        if ( v1 >= 0 )
                        {
                          if ( CContentRects::GetInstance(v11) )
                          {
                            v1 = 0;
                            InitializeContext();
                            return (unsigned int)v1;
                          }
                          return (unsigned int)-1073741801;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
