/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140C1E8F4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IopInitializeOfflineCrashDump @ 0x140591AF4 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x14059EC04 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoInitializeCrashDump @ 0x14070E5F8 (IoInitializeCrashDump.c)
 *     IopDumpTraceForceDumpDisabled @ 0x14070E9A8 (IopDumpTraceForceDumpDisabled.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B4D70 (RtlQueryRegistryValuesEx.c)
 *     MmInitializeMemoryLimits @ 0x140C58680 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(_QWORD *Context, char a2)
{
  __int64 i; // rax
  unsigned int v5; // ebx
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-C8h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v10[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v11; // [rsp+E6h] [rbp-22h]
  char v12; // [rsp+E8h] [rbp-20h]
  char v13; // [rsp+EDh] [rbp-1Bh]

  v7 = 0;
  if ( !ForceDumpDisabled && (int)SecureDump_Init((__int64)Context, a2) < 0 && !SecureDmpCertProvisionFailedDuringBoot )
  {
    ForceDumpDisabled = 1;
    IopDumpTraceForceDumpDisabled();
  }
  if ( Context && !SpecialMemoryRanges )
  {
    for ( i = 0LL; (unsigned int)i < 0x2F; i = (unsigned int)(i + 1) )
      v10[i] = 0;
    v11 = 257;
    v10[6] = 1;
    v12 = 1;
    v13 = 1;
    SpecialMemoryRanges = MmInitializeMemoryLimits(Context, v10);
  }
  if ( !a2 )
  {
    if ( (*(_DWORD *)(Context[30] + 132LL) & 0x100000) != 0 )
      IoConfigureCrashDump(0LL, 1);
    memset_0(&QueryTable, 0, 0x70uLL);
    QueryTable.DefaultType = 0;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&IopInitCrashDumpRegCallback;
    QueryTable.Flags = 4;
    QueryTable.Name = L"ExistingPageFiles";
    QueryTable.EntryContext = &v7;
    RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", &QueryTable, Context, 0LL);
  }
  if ( v7 )
  {
    v5 = 0;
  }
  else
  {
    *(_OWORD *)&v8[1] = 0LL;
    v5 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  }
  if ( !a2 )
    IopInitializeOfflineCrashDump(Context[30]);
  return v5;
}
