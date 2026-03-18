/*
 * XREFs of HvlQueryDetailInfo @ 0x14070E95C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404A36F8 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x1404A3740 (HviGetHardwareFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x140663A68 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x140663AB0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorInterface @ 0x140663AF8 (HviGetHypervisorInterface.c)
 *     HviGetHypervisorVersion @ 0x140663B40 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140663B88 (HviGetImplementationLimits.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HvlQueryDetailInfo(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-88h] BYREF
  __int128 v8; // [rsp+40h] [rbp-78h] BYREF
  __int128 v9; // [rsp+50h] [rbp-68h] BYREF
  __int128 v10; // [rsp+60h] [rbp-58h] BYREF
  __int128 v11; // [rsp+70h] [rbp-48h] BYREF
  __int128 v12; // [rsp+80h] [rbp-38h] BYREF
  __int128 v13; // [rsp+90h] [rbp-28h] BYREF

  if ( a2 == 112 )
  {
    memset_0(&v7, 0, 0x70uLL);
    HviGetHypervisorVendorAndMaxFunction(&v7);
    HviGetHypervisorInterface(&v8);
    HviGetHypervisorVersion(&v9);
    HviGetHypervisorFeatures(&v10);
    HviGetHardwareFeatures((__int64)&v11);
    HviGetEnlightenmentInformation(&v12);
    HviGetImplementationLimits(&v13);
    result = 0LL;
    *a1 = v7;
    a1[1] = v8;
    a1[2] = v9;
    a1[3] = v10;
    a1[4] = v11;
    a1[5] = v12;
    a1[6] = v13;
    *a4 = 112;
  }
  else
  {
    result = 3221225712LL;
    *a4 = 0;
  }
  return result;
}
