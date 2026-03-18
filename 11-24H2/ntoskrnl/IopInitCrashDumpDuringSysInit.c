/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140C1C8B4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IopInitializeOfflineCrashDump @ 0x140594AD0 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x1405A1CC4 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoInitializeCrashDump @ 0x140710A68 (IoInitializeCrashDump.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140710E18 (IopDumpTraceForceDumpDisabled.c)
 *     RtlQueryRegistryValuesEx @ 0x1409CC2F0 (RtlQueryRegistryValuesEx.c)
 *     MmInitializeMemoryLimits @ 0x140C564F0 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 i; // rax
  unsigned int v7; // ebx
  char v9; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-C8h]
  void *v11; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A8h]
  const wchar_t *v13; // [rsp+68h] [rbp-A0h]
  char *v14; // [rsp+70h] [rbp-98h]
  int v15; // [rsp+78h] [rbp-90h]
  _BYTE v16[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v17; // [rsp+E6h] [rbp-22h]
  char v18; // [rsp+E8h] [rbp-20h]
  char v19; // [rsp+EDh] [rbp-1Bh]

  v4 = a2;
  v9 = 0;
  if ( !ForceDumpDisabled && (int)SecureDump_Init(a1, a2) < 0 && !SecureDmpCertProvisionFailedDuringBoot )
  {
    ForceDumpDisabled = 1;
    IopDumpTraceForceDumpDisabled();
  }
  if ( a1 && !SpecialMemoryRanges )
  {
    for ( i = 0LL; (unsigned int)i < 0x2F; i = (unsigned int)(i + 1) )
      v16[i] = 0;
    v17 = 257;
    v16[6] = 1;
    v18 = 1;
    v19 = 1;
    SpecialMemoryRanges = MmInitializeMemoryLimits(a1, v16);
  }
  if ( !v4 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x100000) != 0 )
    {
      LOBYTE(a2) = 1;
      IoConfigureCrashDump(0LL, a2, a3, a4);
    }
    memset_0(&v11, 0, 0x70uLL);
    v15 = 0;
    v11 = &IopInitCrashDumpRegCallback;
    LODWORD(v12) = 4;
    v13 = L"ExistingPageFiles";
    v14 = &v9;
    RtlQueryRegistryValuesEx(2, (int)L"Session Manager\\Memory Management", (int)&v11, a1);
  }
  if ( v9 )
  {
    v7 = 0;
  }
  else
  {
    *(_OWORD *)&v10[1] = 0LL;
    v7 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  }
  if ( !v4 )
    IopInitializeOfflineCrashDump(*(_QWORD *)(a1 + 240));
  return v7;
}
