/*
 * XREFs of _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401C660C
 * Callers:
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401C852C (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     GreUpdateSharedDevCaps @ 0x14011F320 (GreUpdateSharedDevCaps.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140159430 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator()(
        __int64 a1,
        __int64 a2,
        struct D3DKMT_GETPATHSMODALITY *a3)
{
  unsigned int updated; // edi
  _DWORD *v5; // r8
  __int64 v6; // rcx

  updated = DrvUpdateDisplayModeInPdev(*(HDEV *)(a2 + 40), a3);
  if ( updated )
  {
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 40) + 2584LL);
    *(_DWORD *)(a2 + 56) = v5[19];
    *(_DWORD *)(a2 + 60) = v5[20];
    *(_DWORD *)(a2 + 64) = v5[19] + v5[43];
    v6 = *(_QWORD *)a2;
    *(_DWORD *)(a2 + 68) = v5[20] + v5[44];
    GreUpdateSharedDevCaps(v6);
  }
  else
  {
    WdLogSingleEntry1(4LL, 6LL);
    WdLogGlobalForLineNumber = 29147;
  }
  return updated;
}
