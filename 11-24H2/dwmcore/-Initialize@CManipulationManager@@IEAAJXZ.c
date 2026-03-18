/*
 * XREFs of ?Initialize@CManipulationManager@@IEAAJXZ @ 0x1800ECABC
 * Callers:
 *     ?Create@CGlobalManipulationManager@@SAJPEAVCComposition@@PEAPEAVCManipulationManager@@@Z @ 0x1800EF94C (-Create@CGlobalManipulationManager@@SAJPEAVCComposition@@PEAPEAVCManipulationManager@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800EC6C8 (-SetupMessageCallThreadInfo@CManipulationManager@@IEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?CreateManipulationThread@CManipulationManager@@IEAAJXZ @ 0x1800ECC20 (-CreateManipulationThread@CManipulationManager@@IEAAJXZ.c)
 *     ?ClearWaitHandles@CManipulationManager@@KAXXZ @ 0x18025656C (-ClearWaitHandles@CManipulationManager@@KAXXZ.c)
 */

__int64 __fastcall CManipulationManager::Initialize(CManipulationManager *this)
{
  signed int ManipulationThread; // ebx
  HANDLE EventW; // rax
  signed int LastError; // eax
  unsigned int v5; // eax
  int v6; // r9d
  signed int v7; // eax

  ManipulationThread = 0;
  if ( !_InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 1, 0) )
  {
    while ( 1 )
    {
      SetLastError(0);
      EventW = CreateEventW(0LL, 0, 0, 0LL);
      if ( (unsigned int)ManipulationThread >= 3 )
        break;
      *(&CManipulationManager::s_rghWaitEvents + (unsigned int)ManipulationThread) = EventW;
      if ( !EventW )
      {
        LastError = GetLastError();
        ManipulationThread = LastError;
        if ( LastError > 0 )
          ManipulationThread = (unsigned __int16)LastError | 0x80070000;
        if ( ManipulationThread >= 0 )
          ManipulationThread = -2003304445;
        v5 = 115;
LABEL_20:
        v6 = ManipulationThread;
        goto LABEL_21;
      }
      ++ManipulationThread;
    }
    CManipulationManager::s_hManipThreadInitializedWaitEvent = EventW;
    if ( !EventW )
    {
      v7 = GetLastError();
      ManipulationThread = v7;
      if ( v7 > 0 )
        ManipulationThread = (unsigned __int16)v7 | 0x80070000;
      if ( ManipulationThread >= 0 )
        ManipulationThread = -2003304445;
      v5 = 122;
      goto LABEL_20;
    }
    ManipulationThread = CManipulationManager::SetupMessageCallThreadInfo(
                           this,
                           *(struct IMessageSession **)(*((_QWORD *)this + 2) + 5688LL),
                           (int (*)(void *, const void *, int))CManipulationManager::s_RenderThreadEndpointProc,
                           (CManipulationManager *)((char *)this + 56));
    v6 = ManipulationThread;
    if ( ManipulationThread < 0 )
    {
      v5 = 131;
    }
    else
    {
      ManipulationThread = CManipulationManager::CreateManipulationThread(this);
      v6 = ManipulationThread;
      if ( ManipulationThread >= 0 )
        return (unsigned int)ManipulationThread;
      v5 = 136;
    }
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v5, 0LL);
    if ( ManipulationThread < 0 )
    {
      CManipulationManager::ClearWaitHandles();
      _InterlockedCompareExchange(&CManipulationManager::s_bManipThreadInitialized, 0, 1);
    }
  }
  return (unsigned int)ManipulationThread;
}
