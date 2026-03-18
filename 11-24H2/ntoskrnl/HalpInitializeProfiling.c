/*
 * XREFs of HalpInitializeProfiling @ 0x140B4EAB8
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140B4C570 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A57AC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F6654 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140541F70 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x140542CB4 (HalpMmAllocateMemory.c)
 *     HalpHvCpuid @ 0x14054A8E0 (HalpHvCpuid.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     strncmp @ 0x1406BFB20 (strncmp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HalpLbrInitialize @ 0x140B50B28 (HalpLbrInitialize.c)
 */

__int64 __fastcall HalpInitializeProfiling(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rdi
  __int64 Memory; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 (__fastcall **v19)(); // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // [rsp+28h] [rbp-28h] BYREF
  char Str1[16]; // [rsp+38h] [rbp-18h] BYREF

  *(_OWORD *)Str1 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0LL;
  LODWORD(CurrentPrcb->HalReserved[3]) = 0;
  if ( a1 )
  {
    v20 = KiProcessorBlock[0];
    v21 = *(_QWORD *)(KiProcessorBlock[0] + 88) + 96LL * a1;
    CurrentPrcb->HalReserved[2] = v21;
  }
  else
  {
    v5 = 96 * (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
    Memory = HalpMmAllocateMemory(v5);
    CurrentPrcb->HalReserved[2] = Memory;
    if ( !Memory )
      return 3221225626LL;
    if ( (unsigned int)Feature_Test52061194__private_IsEnabledDeviceUsageNoInline() )
      memset_0((void *)CurrentPrcb->HalReserved[2], 0, (unsigned int)v5);
    if ( (HalpFeatureBits & 1) != 0 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      *(_DWORD *)&Str1[4] = _RBX;
      *(_DWORD *)&Str1[8] = _RDX;
      *(_DWORD *)&Str1[12] = _RCX;
      *(_DWORD *)Str1 = _RAX;
      if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
      {
        HalpProfileInterface = &Amd64ProfileInterface;
      }
      else if ( *(_DWORD *)Str1 >= 0xAu && !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
      {
        _RAX = 10LL;
        __asm { cpuid }
        *(_DWORD *)Str1 = _RAX;
        *(_DWORD *)&Str1[4] = _RBX;
        *(_DWORD *)&Str1[8] = _RCX;
        *(_DWORD *)&Str1[12] = _RDX;
        if ( (_BYTE)_RAX )
        {
          if ( (_RAX & 0xFF000000) != 0 && (_RBX & 1) == 0 )
          {
            IsEnabledDeviceUsageNoInline = Feature_Test52061194__private_IsEnabledDeviceUsageNoInline();
            v19 = &EmonProfileInterfaceEnhanced;
            if ( !IsEnabledDeviceUsageNoInline )
              v19 = &EmonProfileInterfaceOriginal;
            HalpProfileInterface = v19;
            if ( Str1[0] >= 4u )
              HalpProfileFeatures |= 1u;
          }
        }
      }
      HalpPerfInterruptHandler = 0LL;
      if ( HalpIsMicrosoftCompatibleHvLoaded() )
      {
        HalpHvCpuid(0x40000003u, &v22);
        if ( (BYTE12(v22) & 4) == 0 )
          HalpProfileInterface = &DefaultProfileInterface;
      }
    }
    HalpLbrInitialize();
  }
  guard_dispatch_icall_no_overrides(v21, v20, a3, a4);
  return 0LL;
}
