/*
 * XREFs of ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180018A10
 * Callers:
 *     <none>
 * Callees:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180019D10 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A280 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001C1B4 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001CE1C (-UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180034568 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall CProcess::UnregisterSession(CApplication **this, struct IAudioSessionInfo *a2)
{
  unsigned int v2; // ebx
  CWindowsPolicyManager *v5; // r13
  struct _RTL_CRITICAL_SECTION *v6; // r14
  CApplicationManager *v7; // r15
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  CApplication *v9; // rcx
  CDuckingManager *v10; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = g_PolicyManager;
    v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v7 = g_ApplicationManager;
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    CProcess::RemoveSession((CProcess *)this, a2);
    EnterCriticalSection(v8);
    if ( this && (unsigned int)CProcess::CanBeRemoved((CProcess *)this) )
    {
      v9 = this[28];
      if ( v9 )
        CApplication::DelinkProcess(v9, (struct CProcess *)this);
      CApplicationManager::RemoveProcess(v7, (struct CProcess *)this);
    }
    if ( v8 )
    {
      LeaveCriticalSection(v8);
      LeaveCriticalSection(v8);
    }
    v10 = (CDuckingManager *)*((_QWORD *)v5 + 5);
    if ( v10 )
      CDuckingManager::UnregisterSession(v10, a2);
    if ( v6 )
      LeaveCriticalSection(v6);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
