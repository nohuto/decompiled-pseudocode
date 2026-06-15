/*
 * XREFs of ?UIntToUShort@@YAJIPEAG@Z @ 0x180115660
 * Callers:
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x180085DC0 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x1801138A8 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z @ 0x180113B48 (-Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UIntToUShort(unsigned int a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8

  if ( a1 > 0xFFFF )
    v2 = -1;
  else
    v2 = a1;
  *a2 = v2;
  return a1 > 0xFFFF ? 0x80070216 : 0;
}
