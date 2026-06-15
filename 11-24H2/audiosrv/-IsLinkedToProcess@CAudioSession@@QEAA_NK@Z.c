/*
 * XREFs of ?IsLinkedToProcess@CAudioSession@@QEAA_NK@Z @ 0x180048000
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CAudioSession::IsLinkedToProcess(CAudioSession *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  v5 = (_QWORD *)*((_QWORD *)this + 88);
  v6 = (_QWORD *)*((_QWORD *)this + 89);
  while ( v5 != v6 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 40LL))(*v5) == a2 )
    {
      if ( v4 )
        LeaveCriticalSection(v4);
      return 1;
    }
    ++v5;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0;
}
