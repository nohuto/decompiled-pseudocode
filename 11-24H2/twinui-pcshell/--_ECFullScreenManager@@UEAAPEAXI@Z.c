/*
 * XREFs of ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x180326CFC
 * Callers:
 *     ??_ECFullScreenManager@@WBI@EAAPEAXI@Z @ 0x180326BF0 (--_ECFullScreenManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1CFullScreenManager@@UEAA@XZ @ 0x180326908 (--1CFullScreenManager@@UEAA@XZ.c)
 */

CFullScreenManager *__fastcall CFullScreenManager::`vector deleting destructor'(CFullScreenManager *this, char a2)
{
  CFullScreenManager::~CFullScreenManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
