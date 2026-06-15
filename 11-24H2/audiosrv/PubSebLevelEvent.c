/*
 * XREFs of PubSebLevelEvent @ 0x1800606F8
 * Callers:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x1800605B0 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180167ED0 (_alloca_probe.c)
 */

__int64 __fastcall PubSebLevelEvent(__int64 a1, unsigned __int8 a2)
{
  _DWORD v3[1024]; // [rsp+30h] [rbp-1018h] BYREF

  v3[1] = -1;
  if ( a2 <= 1u )
    v3[0] = a2 != 0 ? 3 : 1;
  else
    v3[0] = (a2 != 0 ? 3 : 1) | (a2 << 14);
  return RtlPublishWnfStateData(a1, 0LL, v3, 8LL, 0LL);
}
