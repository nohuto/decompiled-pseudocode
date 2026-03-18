/*
 * XREFs of ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x14019CD70
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D000 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 UserSessionState; // rax
  struct tagKbdLayer *result; // rax

  v3 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x746B7355u);
  if ( v3 )
  {
    UserSessionState = W32GetUserSessionState(v2);
    *(_OWORD *)v3 = *(_OWORD *)(UserSessionState + 14080);
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(UserSessionState + 14096);
    *(_OWORD *)(v3 + 32) = *(_OWORD *)(UserSessionState + 14112);
    *(_OWORD *)(v3 + 48) = *(_OWORD *)(UserSessionState + 14128);
    *(_OWORD *)(v3 + 64) = *(_OWORD *)(UserSessionState + 14144);
    *(_OWORD *)(v3 + 80) = *(_OWORD *)(UserSessionState + 14160);
    *(_QWORD *)(v3 + 96) = *(_QWORD *)(UserSessionState + 14176);
  }
  *((_QWORD *)a1 + 6) = 0LL;
  result = (struct tagKbdLayer *)v3;
  *((_QWORD *)a1 + 3) = v3;
  return result;
}
