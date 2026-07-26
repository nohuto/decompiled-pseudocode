/*
 * XREFs of PktMonClientSetCompProperty @ 0x140086BB0
 * Callers:
 *     ndisPktMonOpenRegister @ 0x14016D210 (ndisPktMonOpenRegister.c)
 *     ndisPktMonFilterRegister @ 0x14016FF90 (ndisPktMonFilterRegister.c)
 *     ndisPktMonMiniportRegister @ 0x140173910 (ndisPktMonMiniportRegister.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PktMonClientSetCompProperty(__int64 a1, int a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v5; // ebx
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7[0] = 24;
  v7[1] = a2;
  v8 = a3;
  v9 = a4;
  if ( !ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
    return 3221225635LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*((_QWORD *)&xmmword_1401278D0 + 1) + 24LL))(
         xmmword_1401278D0,
         *(_QWORD *)(a1 + 40),
         v7);
  ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  return v5;
}
