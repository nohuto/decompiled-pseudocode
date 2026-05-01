/*
 * XREFs of ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x180011C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(
        struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a1,
        __int64 a2,
        __int64 a3)
{
  bool v3; // cc
  __int64 *v4; // rcx

  v3 = *((_DWORD *)a1 + 1) <= *(_DWORD *)a1;
  v4 = &Windows::System::CMemoryManager::s_levelIncreasedEvent;
  if ( v3 )
    v4 = &Windows::System::CMemoryManager::s_levelDecreasedEvent;
  Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,std::nullptr_t>(
    (__int64)v4,
    a2,
    a3);
}
