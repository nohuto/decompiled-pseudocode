/*
 * XREFs of HvlpTryConfigureInterface @ 0x140588B0C
 * Callers:
 *     HvlRestoreEnlightenment @ 0x14058040C (HvlRestoreEnlightenment.c)
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 *     HvlEnableVsmCalls @ 0x140C1B930 (HvlEnableVsmCalls.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HvlpAllocateEarlyPages @ 0x14058942C (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x140589554 (HvlpMapEarlyPages.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x140662638 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpTryConfigureInterface(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 (__fastcall *v4)(); // r8
  bool v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 result; // rax
  unsigned __int64 QuadPart; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF

  QuadPart = 0LL;
  v11 = 0LL;
  HviGetHypervisorFeatures(&v11);
  v2 = ((unsigned __int64)v11 >> 44) & 1;
  if ( (unsigned __int8)HviIsHypervisorMicrosoftCompatible()
    && (v12 = 0LL, HviGetHypervisorFeatures(&v12), (v12 & 0x20) != 0) )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 240);
      v4 = *(__int64 (__fastcall **)())(v3 + 2952);
      v5 = (*(_DWORD *)(v3 + 132) & 0x200) != 0;
      if ( v4 )
      {
LABEL_15:
        HvcallCodeVa = v4;
        result = 0LL;
        _InterlockedExchange64((volatile __int64 *)&HvlpHypercallCodeVa, (__int64)v4);
        return result;
      }
    }
    else
    {
      v5 = 0;
    }
    __writemsr(0x40000000u, (unsigned __int16)NtBuildNumber | ((BYTE1(CmNtCSDVersion) | 0x1040A0000LL) << 16));
    v6 = __readmsr(0x40000001u);
    v7 = v6 | 1;
    if ( (_BYTE)v2 || v5 )
    {
      QuadPart = v6 & 0xFFFFFFFFFFFFF000uLL;
      v4 = (__int64 (__fastcall *)())HvlpMapEarlyPages(
                                       v6 & 0xFFFFFFFFFFFFF000uLL,
                                       (unsigned __int64)HIDWORD(v6) << 32,
                                       32LL);
      if ( v4 )
        goto LABEL_14;
    }
    else
    {
      if ( !a1 )
      {
        PhysicalAddress = MmGetPhysicalAddress(HvlpHypercallCodeVa);
        v4 = (__int64 (__fastcall *)())HvlpHypercallCodeVa;
        QuadPart = PhysicalAddress.QuadPart;
        goto LABEL_13;
      }
      v4 = (__int64 (__fastcall *)())HvlpAllocateEarlyPages(a1, 1LL, &QuadPart, 32LL);
      if ( v4 )
      {
        PhysicalAddress.QuadPart = QuadPart;
LABEL_13:
        v7 = PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFF000uLL | v7 & 0xFFF;
LABEL_14:
        __writemsr(0x40000001u, v7);
        goto LABEL_15;
      }
    }
    return 3221225626LL;
  }
  else
  {
    HvlpHypercallCodeVa = 0LL;
    return 3224702976LL;
  }
}
