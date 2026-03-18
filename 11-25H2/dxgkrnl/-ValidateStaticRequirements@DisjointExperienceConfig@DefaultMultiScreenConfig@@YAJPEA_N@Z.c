/*
 * XREFs of ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x14006DF68
 * Callers:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x140061514 (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 * Callees:
 *     ?RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAK@Z @ 0x14006DA1C (-RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAK@Z.c)
 *     ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x14006DC78 (-RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateStaticRequirements(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        bool *a2)
{
  unsigned int *v3; // rdx
  NTSTATUS SoCName; // ebx
  unsigned int v5; // edi
  unsigned __int16 *v6; // rdx
  unsigned int *v7; // r9
  unsigned int i; // edi
  unsigned int v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD SystemInformation[16]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR String1[264]; // [rsp+80h] [rbp-80h] BYREF

  *(_BYTE *)this = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  SoCName = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( SoCName >= 0 )
  {
    v10[0] = 0;
    v5 = (((unsigned int)(SystemInformation[3] * SystemInformation[2]) >> 20) + 256) >> 10;
    if ( (int)DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryEnabledForTest(
                (DefaultMultiScreenConfig::DisjointExperienceConfig *)v10,
                v3) >= 0
      && v10[0] )
    {
      *(_BYTE *)this = 1;
    }
    if ( v5 >= 2 )
    {
      v10[0] = 0;
      SoCName = DefaultMultiScreenConfig::DisjointExperienceConfig::RegQuerySoCName(
                  (DefaultMultiScreenConfig::DisjointExperienceConfig *)String1,
                  v6,
                  v10,
                  v7);
      if ( SoCName >= 0 )
      {
        for ( i = 0; i < 8; ++i )
        {
          if ( !RtlCompareUnicodeStrings(
                  String1,
                  (int)v10[0],
                  (&off_1400A61C0)[2 * i],
                  *((int *)&off_1400A61C0 + 4 * i + 2),
                  1u) )
          {
            *(_BYTE *)this = 1;
            return (unsigned int)SoCName;
          }
        }
      }
    }
  }
  return (unsigned int)SoCName;
}
