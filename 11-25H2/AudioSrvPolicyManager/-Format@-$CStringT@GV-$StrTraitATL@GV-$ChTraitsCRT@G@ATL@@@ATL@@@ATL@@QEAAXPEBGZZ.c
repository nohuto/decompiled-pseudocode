/*
 * XREFs of ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001B570
 * Callers:
 *     ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x18000F7E0 (-OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?FormatV@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z @ 0x18001B598 (-FormatV@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGPEAD@Z.c)
 */

__int64 ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        __int64 a1,
        __int64 a2,
        ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::FormatV(
           a1,
           a2,
           (__int64 *)va);
}
