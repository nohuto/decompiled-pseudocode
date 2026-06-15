/*
 * XREFs of ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x14001EE60
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001F050 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140020130 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14001E0A4 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001E110 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14001E9A8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140021794 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioPump::CheckForPause(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  DWORD LastError; // edi
  signed __int32 v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  CAudioPump *v9; // rcx
  void *v10; // rdx
  wil::details *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  const char *v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  if ( *((_BYTE *)this + 76) )
  {
    if ( v2 )
      LeaveCriticalSection(v2);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
    if ( v2 )
    {
      LastError = GetLastError();
      LeaveCriticalSection(v2);
      SetLastError(LastError);
    }
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
        *((_DWORD *)this + 85) = 40;
    }
    else
    {
      v5 = *((_DWORD *)this + 85);
      if ( v5 && (v6 = v5 - 1, (*((_DWORD *)this + 85) = v6) == 0)
        || CAudioPump::InputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 27)
        || *((_BYTE *)this + 4680) )
      {
        *((_DWORD *)this + 85) = 40;
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 40LL))(*((_QWORD *)this + 26));
        v8 = 0;
        if ( v7 != -2147418113 )
          v8 = v7;
        wil::details::in1diag3::Log_IfFailedMsg(
          retaddr,
          (void *)0x2D1,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
          (const char *)(unsigned int)v8,
          (__int64)"SetPinInactive failed",
          v14);
        if ( v8 >= 0 )
        {
          _InterlockedExchange((volatile __int32 *)this + 84, 0);
          CAudioPump::CancelTimer(v9, *((void **)this + 37));
          CAudioPump::CancelDeadline(this);
          v12 = *((_QWORD *)this + 41);
          if ( v12 )
          {
            v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x2E1,
                (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                (const char *)(unsigned int)v13);
          }
        }
        else
        {
          CAudioPump::CancelTimer(v9, *((void **)this + 37));
          CAudioPump::CancelDeadline(this);
        }
        v11 = (wil::details *)*((_QWORD *)this + 54);
        if ( v11 )
          wil::details::SetEvent(v11, v10);
      }
    }
    if ( this != (CAudioPump *)-128LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  }
}
