/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1C01D8100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01FDB90 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall NtUserProcessInkFeedbackCommand(__int64 a1, void *Src, __int64 a3)
{
  SIZE_T v3; // rsi
  unsigned int v5; // r12d
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rax
  void *v12; // rdi

  v3 = (unsigned int)a3;
  v5 = a1;
  v6 = 0;
  EnterSharedCrit(a1, Src, a3);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v11 = (void *)Win32AllocPoolWithQuotaZInit(v3, 1768452949LL);
    v12 = v11;
    if ( v11 )
    {
      memmove(v11, Src, v3);
      LOBYTE(v6) = (int)InkProcessorProcessInkFeedbackCommand(v5, v12, v3) >= 0;
      Win32FreePool(v12);
    }
    else
    {
      UserSetLastError(8);
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
