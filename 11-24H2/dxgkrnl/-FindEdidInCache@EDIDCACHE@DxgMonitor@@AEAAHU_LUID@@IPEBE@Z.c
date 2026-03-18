/*
 * XREFs of ?FindEdidInCache@EDIDCACHE@DxgMonitor@@AEAAHU_LUID@@IPEBE@Z @ 0x14026FF54
 * Callers:
 *     ?AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x14026FD10 (-AddEdid@EDIDCACHE@DxgMonitor@@UEAAXU_LUID@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     memcmp @ 0x1400A2520 (memcmp.c)
 */

__int64 __fastcall DxgMonitor::EDIDCACHE::FindEdidInCache(
        DxgMonitor::EDIDCACHE *this,
        struct _LUID a2,
        int a3,
        const unsigned __int8 *a4)
{
  DWORD LowPart; // ebx
  unsigned int i; // edi
  __int64 v9; // rcx
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  if ( a4 )
  {
    for ( i = 0; i < 4; ++i )
    {
      v9 = 152LL * i;
      if ( *(_DWORD *)((char *)this + v9 + 16) == LowPart
        && *(_DWORD *)((char *)this + v9 + 20) == HighPart
        && *(_DWORD *)((char *)this + v9 + 24) == a3
        && !memcmp((char *)this + v9 + 32, a4, 0x80uLL) )
      {
        return i;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
