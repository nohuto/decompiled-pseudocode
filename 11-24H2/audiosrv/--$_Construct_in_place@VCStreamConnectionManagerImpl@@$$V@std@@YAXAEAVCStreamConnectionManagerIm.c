/*
 * XREFs of ??$_Construct_in_place@VCStreamConnectionManagerImpl@@$$V@std@@YAXAEAVCStreamConnectionManagerImpl@@@Z @ 0x180116DD4
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180118DE0 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x180117010 (--0CMonitorManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CMonitorManager *__fastcall std::_Construct_in_place<CStreamConnectionManagerImpl,>(_QWORD *a1)
{
  CMonitorManager *v2; // rbx
  CMonitorManager *result; // rax
  CMonitorManager *v4; // rdi

  *a1 = &CStreamConnectionManagerImpl::`vftable';
  v2 = 0LL;
  a1[1] = 0LL;
  result = (CMonitorManager *)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = result;
  if ( result )
  {
    memset_0(result, 0, 0x178uLL);
    result = CMonitorManager::CMonitorManager(v4);
    v2 = result;
  }
  a1[1] = v2;
  return result;
}
