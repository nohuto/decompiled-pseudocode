/*
 * XREFs of xxxClientThreadSetup @ 0x1C0078480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxClientThreadSetup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rax
  ULONG_PTR v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
  {
    v4 = *(unsigned int *)(CurrentThreadWin32Thread + 48);
    if ( (_DWORD)v4 )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, v4, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  EtwTraceBeginCallback(84LL);
  v8 = KeUserModeCallback(84LL, 0LL, 0LL, &v11, &v10);
  EtwTraceEndCallback(84LL);
  EnterCrit(1LL, 0LL);
  return v8;
}
