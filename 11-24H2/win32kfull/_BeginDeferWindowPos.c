/*
 * XREFs of _BeginDeferWindowPos @ 0x1400F4C38
 * Callers:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4310 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserBeginDeferWindowPos @ 0x1400F4BF0 (NtUserBeginDeferWindowPos.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     AllocateCvr @ 0x1400F4CB0 (AllocateCvr.c)
 */

__int64 __fastcall BeginDeferWindowPos(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  LOBYTE(v4) = 4;
  v5 = HMAllocObject(v3, 0LL, v4, 48LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = 8LL;
    if ( v2 )
      v7 = v2;
    if ( (unsigned int)AllocateCvr(v5, v7) )
    {
      *(_DWORD *)(v6 + 24) |= 2u;
      return v6;
    }
    HMFreeObject(v6);
  }
  return 0LL;
}
