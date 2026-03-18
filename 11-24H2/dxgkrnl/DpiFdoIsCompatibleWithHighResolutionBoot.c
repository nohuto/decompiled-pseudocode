/*
 * XREFs of DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1402441F8
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 */

char __fastcall DpiFdoIsCompatibleWithHighResolutionBoot(__int64 a1)
{
  __int64 v1; // rax
  char result; // al
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 )
    return 1;
  v3 = 0;
  if ( (int)DpiReadPnpRegistryValue(a1, L"HighResBootCompatible", &v3, 4LL, 2) < 0 )
  {
    WdLogSingleEntry1(4LL, 1LL);
    WdLogGlobalForLineNumber = 13650;
    return 1;
  }
  if ( v3 )
  {
    WdLogSingleEntry1(4LL, v3);
    WdLogGlobalForLineNumber = 13659;
    return 1;
  }
  WdLogSingleEntry1(4LL, 0LL);
  result = 0;
  WdLogGlobalForLineNumber = 13667;
  return result;
}
