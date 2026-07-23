/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140C0B6E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     IopInitializeOfflineCrashDump @ 0x1405912D0 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x14059E4E4 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoInitializeCrashDump @ 0x140704968 (IoInitializeCrashDump.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140704D18 (IopDumpTraceForceDumpDisabled.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B3F70 (RtlQueryRegistryValuesEx.c)
 *     MmInitializeMemoryLimits @ 0x140C45210 (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(_QWORD *Context, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 i; // rax
  unsigned int v7; // ebx
  char v9; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[3]; // [rsp+40h] [rbp-C8h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v12[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v13; // [rsp+E6h] [rbp-22h]
  char v14; // [rsp+E8h] [rbp-20h]
  char v15; // [rsp+EDh] [rbp-1Bh]

  v4 = a2;
  v9 = 0;
  if ( !ForceDumpDisabled && (int)SecureDump_Init((__int64)Context, a2) < 0 && !SecureDmpCertProvisionFailedDuringBoot )
  {
    ForceDumpDisabled = 1;
    IopDumpTraceForceDumpDisabled();
  }
  if ( Context && !SpecialMemoryRanges )
  {
    for ( i = 0LL; (unsigned int)i < 0x2F; i = (unsigned int)(i + 1) )
      v12[i] = 0;
    v13 = 257;
    v12[6] = 1;
    v14 = 1;
    v15 = 1;
    SpecialMemoryRanges = MmInitializeMemoryLimits(Context, v12);
  }
  if ( !v4 )
  {
    if ( (*(_DWORD *)(Context[30] + 132LL) & 0x100000) != 0 )
    {
      LOBYTE(a2) = 1;
      IoConfigureCrashDump(0LL, a2, a3, a4);
    }
    memset_0(&QueryTable, 0, 0x70uLL);
    QueryTable.DefaultType = 0;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&IopInitCrashDumpRegCallback;
    QueryTable.Flags = 4;
    QueryTable.Name = L"ExistingPageFiles";
    QueryTable.EntryContext = &v9;
    RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", &QueryTable, Context, 0LL);
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
    IopInitializeOfflineCrashDump(Context[30]);
  return v7;
}
