/*
 * XREFs of ?Pause@CAudioPump@@UEAAJXZ @ 0x1400216D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001DE10 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?IsOffload@CAudioPump@@QEAA_NXZ @ 0x140021510 (-IsOffload@CAudioPump@@QEAA_NXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140021B30 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CAudioPump::Pause(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  char v3; // bp
  void *v5; // rdx
  char v6; // r8
  wil::details **v7; // rsi
  void *v8; // rdx
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( ((*((_QWORD *)this + 15) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
    && _InterlockedCompareExchange((volatile signed __int32 *)this + 84, 1, 2) == 2 )
  {
    v7 = (wil::details **)((char *)this + 416);
    if ( CAudioPump::IsOffload((__int64 (__fastcall **)(CAudioPump *))this) && *v7 )
      v3 = v6;
    else
      *((_DWORD *)this + 85) = 40;
    if ( v1 )
      LeaveCriticalSection(v1);
    if ( v3 )
    {
      wil::details::ResetEvent(*((wil::details **)this + 54), v5);
      wil::details::SetEvent(*v7, v8);
      Handles[0] = *((HANDLE *)this + 35);
      Handles[1] = *((HANDLE *)this + 54);
      WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    }
  }
  else if ( v1 )
  {
    LeaveCriticalSection(v1);
  }
  return 0LL;
}
