/*
 * XREFs of ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5A70
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5B40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800D3CFC (-_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D7B30 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppArrangementBase::_WindowEnumCallback(CAppArrangementBase *a1, __int64 a2, char a3, _DWORD *a4)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx

  CGroupingStoryboard::_WindowEnumCallback();
  v8 = *(_DWORD *)(a2 + 744) & 0xFFF;
  if ( (a3 & 4) != 0 )
  {
    if ( (unsigned int)v8 > 0x34 || (v9 = 0x10080000400000LL, !_bittest64(&v9, v8)) )
    {
      if ( (*(_DWORD *)(a2 + 744) & 0x1000000) != 0 )
        CAppArrangementBase::_AddToAnimatingMonitors(a1, (const struct tagRECT *)(a2 + 764));
      if ( (*(_DWORD *)(a2 + 744) & 0x800000) != 0 )
        CAppArrangementBase::_AddToAnimatingMonitors(a1, (const struct tagRECT *)(a2 + 796));
      if ( (*(_DWORD *)(a2 + 744) & 0x1800000) == 0 && *(_DWORD *)(a2 + 128) != 1 && (_DWORD)v8 != 68 )
        CAppArrangementBase::_AddToAnimatingMonitors(a1, (const struct tagRECT *)(a2 + 48));
    }
  }
  *a4 = 0;
  return 1;
}
