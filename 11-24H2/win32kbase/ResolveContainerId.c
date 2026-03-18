/*
 * XREFs of ResolveContainerId @ 0x14019C88C
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1401053D0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetInputContainerId @ 0x1401BAB10 (NtUserGetInputContainerId.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

bool __fastcall ResolveContainerId(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  int v5; // eax

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(W32GetUserSessionState(a1) + 19616);
  if ( v4 )
    v5 = v4(a1, a2);
  else
    v5 = -1073741637;
  return v5 >= 0;
}
