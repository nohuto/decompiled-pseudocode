/*
 * XREFs of WmipProcessLegacyEtwRegister @ 0x1407A57C4
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140A876B0 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 *     EtwRegisterClassicProvider @ 0x140A8AD80 (EtwRegisterClassicProvider.c)
 */

LONG __fastcall WmipProcessLegacyEtwRegister(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  REGHANDLE v5; // rbx
  LONG result; // eax
  int v7; // ebx
  LARGE_INTEGER v8; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 == a2 )
    *(_QWORD *)(a1 + 112) = -1LL;
  v5 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  v8.QuadPart = v5;
  result = KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( v5 )
    result = EtwUnregister(v5);
  if ( v4 == a2 )
  {
    v7 = EtwRegisterClassicProvider((int)a1 + 72, 0, (unsigned int)WmipLegacyEtwCallback, a1, (__int64)&v8);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( v7 < 0 )
      *(_QWORD *)(a1 + 112) = 0LL;
    else
      *(LARGE_INTEGER *)(a1 + 104) = v8;
    return KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  }
  return result;
}
