/*
 * XREFs of ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800FCDE8
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180127840 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

__int64 CThreadContext::InitializeObjectCaches(void)
{
  int Current; // eax
  unsigned int v1; // ebx
  struct CThreadContext *v2; // rcx
  struct CThreadContext *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  Current = CThreadContext::GetCurrent(&v4);
  v1 = Current;
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Current, 0xB6u, 0LL);
  }
  else
  {
    v2 = v4;
    *((_DWORD *)v4 + 12) = 32;
    *((_DWORD *)v2 + 16) = 32;
    *((_DWORD *)v2 + 44) = 16;
    *((_DWORD *)v2 + 20) = 32;
    *((_DWORD *)v2 + 28) = 2;
    *((_DWORD *)v2 + 32) = 2;
    *((_DWORD *)v2 + 36) = 32;
    *((_DWORD *)v2 + 40) = 32;
    *((_DWORD *)v2 + 48) = 32;
    *((_DWORD *)v2 + 52) = 32;
    *((_DWORD *)v2 + 56) = 32;
    *((_DWORD *)v2 + 60) = 32;
    *((_DWORD *)v2 + 64) = 32;
    *((_DWORD *)v2 + 68) = 32;
    *((_DWORD *)v2 + 72) = 32;
    *((_DWORD *)v2 + 76) = 32;
    *((_DWORD *)v2 + 80) = 8;
    *((_DWORD *)v2 + 84) = 8;
    *((_DWORD *)v2 + 88) = 8;
    *((_DWORD *)v2 + 92) = 8;
    *((_DWORD *)v2 + 96) = 8;
    *((_DWORD *)v2 + 100) = 8;
    *((_DWORD *)v2 + 104) = 1;
    *((_DWORD *)v2 + 108) = 2;
  }
  return v1;
}
