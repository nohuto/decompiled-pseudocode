/*
 * XREFs of ??$_Construct_in_place@VCPlaybackReference@@PEAVCPlaybackNotifier@@AEAPEBG@std@@YAXAEAVCPlaybackReference@@$$QEAPEAVCPlaybackNotifier@@AEAPEBG@Z @ 0x180016200
 * Callers:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x1800175D4 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<CPlaybackReference,CPlaybackNotifier *,unsigned short const * &>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // r8

  v3 = *a3;
  *(_QWORD *)(a1 + 112) = *a2;
  return _o_wcscpy_s(a1, 56LL, v3);
}
