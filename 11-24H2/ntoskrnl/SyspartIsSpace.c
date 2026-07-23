/*
 * XREFs of SyspartIsSpace @ 0x140816518
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x1404B1240 (BiMapEfiDeviceForSpaces.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140698AF0 (BiSpacesUpdatePhysicalDevicePath.c)
 * Callees:
 *     SiQueryProperty @ 0x140A48990 (SiQueryProperty.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SyspartIsSpace(__int64 a1, _BYTE *a2)
{
  int v3; // eax
  PVOID v4; // rcx
  unsigned int v5; // ebx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  *a2 = 0;
  v3 = SiQueryProperty(a1, 0LL, 8LL, &P);
  v4 = P;
  v5 = v3;
  if ( v3 >= 0 && *((_DWORD *)P + 7) == 16 )
    *a2 = 1;
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
