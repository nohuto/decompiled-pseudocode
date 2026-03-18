/*
 * XREFs of HdevFromMonitor @ 0x140141C20
 * Callers:
 *     DestroyMonitorDCs @ 0x1400A2C70 (DestroyMonitorDCs.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HdevFromMonitor(__int64 a1)
{
  __int64 v2; // r8
  unsigned int i; // edx

  v2 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 57008) + 16LL);
  for ( i = 0; i < *(_DWORD *)(v2 + 20); ++i )
  {
    if ( *(_QWORD *)(56LL * i + v2 + 40) == *(_QWORD *)(a1 + 80) )
      return i;
  }
  return 0xFFFFFFFFLL;
}
