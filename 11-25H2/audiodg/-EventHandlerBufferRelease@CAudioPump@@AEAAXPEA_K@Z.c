/*
 * XREFs of ?EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z @ 0x14001DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14001E0A4 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140021520 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x14006693C (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x140066968 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioPump::EventHandlerBufferRelease(CAudioPump *this, unsigned __int64 *a2)
{
  void *v4; // rax
  CAudioPump *v5; // rcx
  DWORD v6; // eax
  void *v7; // rdx
  unsigned int v8; // r8d
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 51) + 24LL))(*((_QWORD *)this + 51));
  ResetEvent(v4);
  if ( CAudioPump::InputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 27) )
  {
    v6 = WaitForSingleObject(*((HANDLE *)this + 39), 0);
    if ( v6 )
    {
      if ( v6 != 258 )
      {
        if ( v6 == -1 )
          wil::details::in1diag3::Log_GetLastError(retaddr, v7, v8, v9);
        else
          wil::details::in1diag3::Log_Hr(retaddr, v7, v8, (const char *)0x8000FFFFLL, v10);
      }
    }
    else
    {
      CAudioPump::EventHandlerBufferComplete(this, a2);
    }
    *((_BYTE *)this + 4681) = 0;
  }
  else
  {
    *((_BYTE *)this + 4681) = 0;
    *((_BYTE *)this + 272) = 0;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) )
      CAudioPump::CancelTimer(v5, *((void **)this + 37));
  }
}
