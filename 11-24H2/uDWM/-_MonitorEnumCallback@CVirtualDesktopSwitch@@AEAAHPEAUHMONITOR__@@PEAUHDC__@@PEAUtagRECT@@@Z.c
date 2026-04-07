/*
 * XREFs of ?_MonitorEnumCallback@CVirtualDesktopSwitch@@AEAAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@@Z @ 0x1800D5188
 * Callers:
 *     ?s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800D9220 (-s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

_BOOL8 __fastcall CVirtualDesktopSwitch::_MonitorEnumCallback(
        CVirtualDesktopSwitch *this,
        HMONITOR a2,
        HDC a3,
        struct tagRECT *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  int v7; // eax

  v4 = *((_DWORD *)this + 46);
  v5 = v4 + 1;
  if ( v4 + 1 >= v4 )
  {
    v6 = 0;
    if ( v5 > *((_DWORD *)this + 45) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 160, 16, 1, a4);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xBEu, 0LL);
    }
    else
    {
      *(struct tagRECT *)(*((_QWORD *)this + 20) + 16LL * *((unsigned int *)this + 46)) = *a4;
      *((_DWORD *)this + 46) = v5;
    }
  }
  else
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
  }
  return v6 >= 0;
}
