/*
 * XREFs of HalpLbrInitialize @ 0x140B52B78
 * Callers:
 *     HalpInitializeProfiling @ 0x140B50B08 (HalpInitializeProfiling.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     HalpIsHvPresent @ 0x1404A04A0 (HalpIsHvPresent.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpLbrInitializeIntel @ 0x140B52CEC (HalpLbrInitializeIntel.c)
 */

char HalpLbrInitialize()
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int8 v12; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int8 v13; // [rsp+21h] [rbp-1Fh] BYREF
  char v14[6]; // [rsp+22h] [rbp-1Eh] BYREF
  __int128 v15; // [rsp+28h] [rbp-18h] BYREF

  LOBYTE(_RAX) = HalpFeatureBits;
  v14[0] = 0;
  v13 = 0;
  v12 = 0;
  HalpLbrIsInitialized = 0;
  v15 = 0LL;
  if ( (HalpFeatureBits & 1) != 0 )
  {
    if ( !HalpIsHvPresent() || (LOBYTE(_RAX) = HviGetHypervisorFeatures(&v15), (HIDWORD(v15) & 0x4000000) != 0) )
    {
      LOBYTE(_RAX) = HalpGetCpuInfo(v14, 0LL, &v13, &v12);
      if ( (_BYTE)_RAX )
      {
        LOBYTE(_RAX) = v12;
        if ( v12 == 2 )
        {
          LOBYTE(v1) = v13;
          LOBYTE(v2) = v14[0];
          LOBYTE(_RAX) = HalpLbrInitializeIntel(v2, v1);
          if ( (_BYTE)_RAX )
            goto LABEL_13;
        }
        else if ( v12 == 1 )
        {
          _RAX = 0x80000000LL;
          __asm { cpuid }
          if ( (unsigned int)_RAX >= 0x80000022 )
          {
            _RAX = 2147483682LL;
            __asm { cpuid }
            if ( ((unsigned __int8)_RAX & 2) != 0 )
            {
              HalpLbrType = 3;
              HalpLbrStackSize = ((unsigned int)_RBX >> 4) & 0x3F;
              if ( HalpLbrStackSize )
              {
                HalpLbrMostSignificantFromAddrBit = 62;
                HalpLbrMostSignificantToAddrBit = 60;
LABEL_13:
                HalpLbrIsInitialized = 1;
                off_140E00BC8[0] = (__int64 (__fastcall *)())HalpLbrCaptureStack;
                off_140E00BD0[0] = (__int64 (__fastcall *)())HalpLbrClearStack;
                off_140E00BD8[0] = (__int64 (__fastcall *)())HalpLbrConfigureRecording;
                off_140E00BE0[0] = (__int64 (__fastcall *)())HalpLbrGetInformation;
                off_140E00BE8[0] = (__int64 (__fastcall *)())HalpLbrResumeRecording;
                off_140E00BF0[0] = (__int64 (__fastcall *)())HalpLbrStartRecording;
                _RAX = HalpLbrStopRecording;
                off_140E00BF8[0] = (__int64 (__fastcall *)())HalpLbrStopRecording;
              }
            }
          }
        }
      }
    }
  }
  return (char)_RAX;
}
