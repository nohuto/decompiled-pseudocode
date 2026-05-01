/*
 * XREFs of ??_EAppList@GamingAudio@@UEAAPEAXI@Z @ 0x18034B480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1AppList@GamingAudio@@UEAA@XZ @ 0x180347F94 (--1AppList@GamingAudio@@UEAA@XZ.c)
 */

GamingAudio::AppList *__fastcall GamingAudio::AppList::`vector deleting destructor'(
        GamingAudio::AppList *this,
        char a2)
{
  GamingAudio::AppList::~AppList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
