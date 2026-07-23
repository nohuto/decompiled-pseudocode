/*
 * XREFs of HalSocRequestConfigurationData @ 0x14055F0DC
 * Callers:
 *     HalpApicSetupRegisterAccess @ 0x140554EF8 (HalpApicSetupRegisterAccess.c)
 *     HalpHvDiscover @ 0x14055CC50 (HalpHvDiscover.c)
 *     HalpHpetDiscover @ 0x14055E498 (HalpHpetDiscover.c)
 *     HalpTscGetAttributes @ 0x14055EE70 (HalpTscGetAttributes.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404A04A0 (HalpIsHvPresent.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x1404F52CC (HalpIsPartitionCpuManager.c)
 *     HalpInterruptGetX2ApicPolicy @ 0x14053FD44 (HalpInterruptGetX2ApicPolicy.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HalSocRequestConfigurationData(int a1, __int64 a2, char *a3)
{
  unsigned int v3; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  char *p_X2ApicPolicy; // rcx
  bool v19; // cf
  char v20; // al
  __int64 v26; // rax
  bool v27; // r11
  bool v33; // al
  bool v35; // [rsp+20h] [rbp-30h] BYREF
  char IsPartitionCpuManager; // [rsp+21h] [rbp-2Fh] BYREF
  char IsHvPresent; // [rsp+22h] [rbp-2Eh] BYREF
  bool IsMicrosoftCompatibleHvLoaded; // [rsp+23h] [rbp-2Dh] BYREF
  char v39; // [rsp+24h] [rbp-2Ch] BYREF
  char v40; // [rsp+25h] [rbp-2Bh] BYREF
  bool X2ApicPolicy; // [rsp+26h] [rbp-2Ah] BYREF
  char v42; // [rsp+27h] [rbp-29h] BYREF
  char v43; // [rsp+28h] [rbp-28h] BYREF
  int v44; // [rsp+30h] [rbp-20h]
  int v45; // [rsp+34h] [rbp-1Ch]
  __int64 v46; // [rsp+38h] [rbp-18h]

  v3 = 0;
  IsPartitionCpuManager = 0;
  v42 = 0;
  IsHvPresent = 0;
  IsMicrosoftCompatibleHvLoaded = 0;
  v43 = 0;
  v35 = 0;
  v39 = 0;
  X2ApicPolicy = 0;
  v40 = 0;
  v5 = a1 - 1;
  if ( !v5 )
  {
    v42 = HalpTimerPlatformSourceForced;
    p_X2ApicPolicy = &v42;
    goto LABEL_29;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    p_X2ApicPolicy = &v43;
    goto LABEL_29;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( HalpIsMicrosoftCompatibleHvLoaded() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v46 = 0LL;
      v44 = _RAX;
      v45 = _RBX;
      v26 = _RAX & 0xE;
      v35 = v26 == 14;
      if ( v26 == 14 )
      {
        if ( HalpIsPartitionCpuManager() )
        {
          _RAX = 1073741830LL;
          __asm { cpuid }
          v19 = (_RAX & 0x200) != 0;
          v33 = v27;
          if ( v19 )
            v33 = 0;
          v35 = v33;
        }
      }
    }
    p_X2ApicPolicy = (char *)&v35;
    goto LABEL_29;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    X2ApicPolicy = HalpInterruptGetX2ApicPolicy();
    p_X2ApicPolicy = (char *)&X2ApicPolicy;
    goto LABEL_29;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    p_X2ApicPolicy = &v40;
    v40 = HalpIommuX2ApicSupport;
    goto LABEL_29;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( !HalpIsMicrosoftCompatibleHvLoaded() )
      goto LABEL_16;
    _RAX = 1073741828LL;
    __asm { cpuid }
    v19 = (_RAX & 0x100) != 0;
    v20 = 1;
    if ( !v19 )
LABEL_16:
      v20 = 0;
    v39 = v20;
    p_X2ApicPolicy = &v39;
    goto LABEL_29;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded();
    p_X2ApicPolicy = (char *)&IsMicrosoftCompatibleHvLoaded;
    goto LABEL_29;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    IsHvPresent = HalpIsHvPresent();
    p_X2ApicPolicy = &IsHvPresent;
    goto LABEL_29;
  }
  if ( v12 == 1 )
  {
    IsPartitionCpuManager = HalpIsPartitionCpuManager();
    p_X2ApicPolicy = &IsPartitionCpuManager;
LABEL_29:
    *a3 = *p_X2ApicPolicy;
    return v3;
  }
  v3 = -1073741811;
  HalpTimerLastProblem = 30;
  return v3;
}
