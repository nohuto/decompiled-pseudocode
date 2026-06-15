/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x14002A1E0
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140029CB8 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C454 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002A31C (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  void *v4; // rax
  void *v5; // rax
  __int64 result; // rax
  errno_t v7; // eax
  errno_t v8; // eax

  v2 = a2;
  if ( a2 < 0 || a2 >= dword_1400C47D8 )
    return 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((char *)SadMap + 8 * a2);
  v3 = dword_1400C47D8;
  if ( (_DWORD)v2 != dword_1400C47D8 - 1 )
  {
    v7 = memmove_s(
           (char *)SadMap + 8 * v2,
           8LL * (dword_1400C47D8 - (int)v2),
           (char *)SadMap + 8 * v2 + 8,
           8LL * (dword_1400C47D8 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v7);
    v8 = memmove_s(
           (char *)Block + 8 * v2,
           8LL * (dword_1400C47D8 - (int)v2),
           (char *)Block + 8 * v2 + 8,
           8LL * (dword_1400C47D8 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v8);
    v3 = dword_1400C47D8;
  }
  v4 = (void *)_o__recalloc(SadMap, v3 - 1, 8LL);
  if ( v4 || dword_1400C47D8 == 1 )
    SadMap = v4;
  v5 = (void *)_o__recalloc(Block, dword_1400C47D8 - 1, 8LL);
  if ( v5 || dword_1400C47D8 == 1 )
    Block = v5;
  result = 1LL;
  --dword_1400C47D8;
  return result;
}
