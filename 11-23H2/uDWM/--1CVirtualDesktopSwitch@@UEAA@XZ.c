/*
 * XREFs of ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800D95C4
 * Callers:
 *     ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x1800D9890 (--_ECVirtualDesktopSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CVirtualDesktopSwitch::~CVirtualDesktopSwitch(CVirtualDesktopSwitch *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 16);
  CStoryboard::~CStoryboard(this);
}
