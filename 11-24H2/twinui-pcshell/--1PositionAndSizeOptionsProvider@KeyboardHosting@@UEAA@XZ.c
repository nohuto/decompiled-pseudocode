/*
 * XREFs of ??1PositionAndSizeOptionsProvider@KeyboardHosting@@UEAA@XZ @ 0x180208BEC
 * Callers:
 *     ??_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x180208BB0 (--_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x180208C14 (--1-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U-$less@PEAUHMONIT.c)
 */

void __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::~PositionAndSizeOptionsProvider(
        KeyboardHosting::PositionAndSizeOptionsProvider *this)
{
  std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::~_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>((char *)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
