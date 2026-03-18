/*
 * XREFs of ?GetCurrentScanoutBuffer@CScribbleSwapChain@@UEAAPEAVISwapChainBuffer@@XZ @ 0x1802C6570
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct ISwapChainBuffer *__fastcall CScribbleSwapChain::GetCurrentScanoutBuffer(CScribbleSwapChain *this)
{
  __int64 v2; // rbp
  char *v3; // rdi
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // r15
  unsigned int v8; // eax
  _DWORD v10[20]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0LL;
  memset_0(v10, 0, sizeof(v10));
  v3 = (char *)this - 232;
  if ( (*(int (__fastcall **)(char *, _DWORD *))(*(_QWORD *)v3 + 328LL))(v3, v10) >= 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 88LL))(v3);
    if ( v6 )
    {
      do
      {
        v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v3 + 208LL))(v3, v5);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 136LL))(v7);
        if ( v8 && v8 <= v10[0] && v8 > v4 )
        {
          v2 = v7;
          v4 = v8;
        }
        ++v5;
      }
      while ( v5 < v6 );
    }
  }
  return (struct ISwapChainBuffer *)v2;
}
