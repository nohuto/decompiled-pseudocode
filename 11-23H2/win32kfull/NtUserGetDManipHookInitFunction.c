/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C003B400
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v5; // r11d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterSharedCrit(a1, a2, a3);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  RtlStringCchCopyW(a1, 0x104uLL, &gszModuleDManipHook);
  RtlStringCchCopyW(a2, v5, L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return 1LL;
}
