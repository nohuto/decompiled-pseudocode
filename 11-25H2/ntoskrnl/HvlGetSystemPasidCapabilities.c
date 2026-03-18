/*
 * XREFs of HvlGetSystemPasidCapabilities @ 0x140583A60
 * Callers:
 *     HvlpInitializeSvmIommuSupport @ 0x140587878 (HvlpInitializeSvmIommuSupport.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404A3798 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x1404A37E0 (HviGetHardwareFeatures.c)
 *     HvlpGetRegister128 @ 0x140588120 (HvlpGetRegister128.c)
 *     HviGetHypervisorFeatures @ 0x1406577F0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlGetSystemPasidCapabilities(__int64 a1)
{
  __int64 result; // rax
  char v3; // cl
  int v4; // eax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _DWORD *v7; // rsi
  __m256i v8; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v10; // [rsp+60h] [rbp-A8h]
  __int128 v11; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v12; // [rsp+78h] [rbp-90h] BYREF
  __int128 v13; // [rsp+88h] [rbp-80h] BYREF
  __int128 v14; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v15[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v16[2064]; // [rsp+C8h] [rbp-40h] BYREF

  v9[3] = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  v10 = 0;
  LODWORD(v9[0]) = 0;
  result = HvlpRootFlags;
  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *(_OWORD *)&v9[1] = 0LL;
  memset(&v8.m256i_u64[1], 0, 24);
  v11 = 0LL;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = (unsigned int)HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v12);
      if ( (HIDWORD(v12) & 0x10000) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(&v13);
        if ( (unsigned int)v13 >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v11);
          v3 = v11;
          if ( (v11 & 3) != 0 )
          {
            *(_DWORD *)(a1 + 4) = (unsigned int)v11 >> 11;
            if ( (v3 & 2) != 0 )
              *(_DWORD *)a1 |= 4u;
            if ( (v3 & 1) != 0 )
            {
              v4 = DWORD1(v11);
              *(_DWORD *)a1 |= 1u;
              *(_DWORD *)(a1 + 8) = v4;
            }
            result = HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures((__int64)&v14);
              if ( (v14 & 0x80u) == 0LL )
                *(_DWORD *)a1 |= 2u;
              v5 = HvlpAcquireHypercallPage((__int64)&v9[1], 1, (__int64)v15, 16LL);
              v6 = HvlpAcquireHypercallPage((__int64)&v8.m256i_i64[1], 2, (__int64)v16, 1032LL);
              *(_OWORD *)v5 = 0LL;
              *(_DWORD *)v5 = 11;
              v7 = v6;
              if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
              {
                *(_DWORD *)(a1 + 12) = *v7;
                *(_DWORD *)(a1 + 16) = v7[1];
              }
              HvlpReleaseHypercallPage(&v8.m256i_u32[2]);
              return HvlpReleaseHypercallPage((unsigned int *)&v9[1]);
            }
          }
        }
      }
    }
  }
  return result;
}
