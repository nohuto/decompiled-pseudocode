/*
 * XREFs of HvlQueryVsmProtectionInfo @ 0x140A7C660
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x1404A37E0 (HviGetHardwareFeatures.c)
 *     HvlpProcessIommu @ 0x1404D4A40 (HvlpProcessIommu.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall HvlQueryVsmProtectionInfo(void *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  char v7; // al
  _DWORD Src[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  v10 = a3;
  v11 = 0LL;
  v6 = 0;
  if ( a2 < 3 )
  {
    v6 = -1073741584;
    *a3 = 0;
    return v6;
  }
  if ( a2 >= 4 )
    v4 = 4;
  Src[1] = v4;
  Src[0] = 0;
  if ( !HvlHypervisorConnected )
    goto LABEL_8;
  if ( (HvlpFlags & 2) == 0 )
  {
    if ( (HvlpFlags & 0x40) != 0 || HvlpProcessIommu() )
      LOBYTE(Src[0]) = 1;
    BYTE1(Src[0]) = (HvlpFlags & 0x40) != 0;
    goto LABEL_10;
  }
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    HviGetHardwareFeatures((__int64)&v11);
    v7 = (unsigned __int8)v11 >> 7;
    BYTE1(Src[0]) = (unsigned __int8)v11 >> 7;
  }
  else
  {
LABEL_8:
    v7 = HvlpProcessIommu();
    BYTE1(Src[0]) = 0;
  }
  LOBYTE(Src[0]) = v7;
LABEL_10:
  BYTE2(Src[0]) = (HvlpFlags & 0x20000) != 0;
  HIBYTE(Src[0]) = HIBYTE(HvlpFlags) & 1;
  memmove(a1, Src, v4);
  *a3 = v4;
  return v6;
}
