/*
 * XREFs of bFntCacheDisabled @ 0x140115F68
 * Callers:
 *     InitFNTCache @ 0x140115854 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1401161F4 (bQueryFntCacheReg.c)
 */

__int64 __fastcall bFntCacheDisabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  Gre::Base *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rax

  SessionState = W32GetSessionState(a1, a2, a3);
  bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL));
  v8 = 0;
  if ( !*((_DWORD *)Gre::Base::Globals(v4) + 712) )
  {
    v9 = W32GetSessionState(v6, v5, v7);
    return (unsigned int)bQueryFntCacheReg(*(HANDLE *)(*(_QWORD *)(v9 + 96) + 19616LL)) == 0;
  }
  return v8;
}
