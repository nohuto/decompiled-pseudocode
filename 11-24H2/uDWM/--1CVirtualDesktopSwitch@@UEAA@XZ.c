/*
 * XREFs of ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800D1838
 * Callers:
 *     ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x1800D19D0 (--_ECVirtualDesktopSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CVirtualDesktopSwitch::~CVirtualDesktopSwitch(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 16);
  CStoryboard::~CStoryboard((CStoryboard *)this);
}
