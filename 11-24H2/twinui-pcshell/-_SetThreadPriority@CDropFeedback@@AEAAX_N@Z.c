/*
 * XREFs of ?_SetThreadPriority@CDropFeedback@@AEAAX_N@Z @ 0x180540910
 * Callers:
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18053F9B0 (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x1805400A0 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDropFeedback::_SetThreadPriority(CDropFeedback *this, char a2)
{
  HANDLE CurrentThread; // rsi
  int ThreadPriority; // eax
  int v6; // edx

  CurrentThread = GetCurrentThread();
  ThreadPriority = GetThreadPriority(CurrentThread);
  if ( a2 )
  {
    if ( ThreadPriority > 0 )
      return;
    v6 = 1;
    *((_DWORD *)this + 28) = ThreadPriority;
    goto LABEL_7;
  }
  v6 = *((_DWORD *)this + 28);
  if ( v6 != -3 && *((_DWORD *)this + 29) == ThreadPriority )
  {
    *((_DWORD *)this + 28) = -3;
LABEL_7:
    *((_DWORD *)this + 29) = v6;
    SetThreadPriority(CurrentThread, v6);
  }
}
