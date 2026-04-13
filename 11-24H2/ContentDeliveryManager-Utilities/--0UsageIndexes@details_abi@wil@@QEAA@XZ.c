/*
 * XREFs of ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18002987C
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180035104 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180035D8C (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800377D0 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18002950C (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 */

__int64 __fastcall wil::details_abi::UsageIndexes::UsageIndexes(wil::details_abi::UsageIndexes *this)
{
  __int64 v1; // r11
  char v2; // r9
  __int64 v3; // r11
  char v4; // r9
  __int64 v5; // r11

  wil::details_abi::RawUsageIndex::RawUsageIndex((__int64)this, 0, 4, 1, 4, 0);
  wil::details_abi::RawUsageIndex::RawUsageIndex(v1 + 64, 0, 4, v2, 4, 2);
  wil::details_abi::RawUsageIndex::RawUsageIndex(v3 + 128, 0, 4, v4, 0, v4);
  return v5;
}
