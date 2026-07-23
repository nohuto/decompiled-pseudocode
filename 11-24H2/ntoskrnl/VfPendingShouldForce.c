/*
 * XREFs of VfPendingShouldForce @ 0x140B93BC8
 * Callers:
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 * Callees:
 *     VfRandomGetNumber @ 0x140B850DC (VfRandomGetNumber.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA9ECC (VfDriverIsKernelImageAddress.c)
 *     VfTargetDriversIsEnabled @ 0x140BA9F30 (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall VfPendingShouldForce(
        __int16 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf

  v6 = 0;
  if ( (a1 & 0x200) != 0
    && (unsigned __int8)a2 < 2u
    && !*(_QWORD *)(a5 + 216)
    && !(unsigned int)VfDriverIsKernelImageAddress(a6, a2, a3, a4)
    && (unsigned int)VfTargetDriversIsEnabled(v9)
    && (*(_DWORD *)(a3 + 16) & 0xC0) == 0
    && !*(_BYTE *)(a3 + 65)
    && VfRandomGetNumber(0, 0x64u) < ViPendingProbability )
  {
    v10 = *a4;
    if ( v10 == 13 )
    {
      v11 = *((_DWORD *)a4 + 6);
    }
    else
    {
      v11 = a4[1];
      v13 = v10 - 12;
      if ( !v13 )
        return v11 != 2;
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 4;
        if ( v15 )
        {
          if ( v15 != 10 )
            return 1;
          v16 = v11 == 2;
        }
        else
        {
          v16 = v11 == 1;
        }
        LOBYTE(v6) = !v16;
        return v6;
      }
    }
    if ( v11 != 589916 && v11 != 589904 )
    {
      if ( (unsigned int)(v11 - 589824) > 0x14 || (v12 = 1118481, !_bittest(&v12, v11 - 589824)) )
      {
        if ( v11 != 590400 )
          return 1;
      }
    }
  }
  return v6;
}
