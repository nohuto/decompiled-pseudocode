/*
 * XREFs of ?_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z @ 0x1800DDDA0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEB20 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF690 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x1800D9CAC (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

bool __fastcall CAppArrangementBase::_IsOnAnimatingMonitor(CAppArrangementBase *this, const struct tagRECT *a2)
{
  HMONITOR v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = MonitorFromRect(a2, 0);
  return (unsigned int)DynArray<HMONITOR__ *,0>::Find((__int64)this + 152, &v4) != 0;
}
