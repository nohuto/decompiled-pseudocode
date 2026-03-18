/*
 * XREFs of DxgkCheckGpuVirtualizationCaps @ 0x1401A0178
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1403FDFB4 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x14036B708 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DxgkCheckGpuVirtualizationCaps(__int64 a1, char a2, _BYTE *a3)
{
  __int64 v5; // rcx
  int v7; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v7) = a2;
  *a3 = 0;
  if ( (*(_DWORD *)(a1 + 2976) & 4) != 0 )
    *a3 = 1;
  v5 = *(_QWORD *)(a1 + 216);
  v7 = 0;
  if ( (int)DpiReadPnpRegistryValue(v5, L"DxgkVirtualGpuOnly", &v7, 4LL, 2) >= 0 )
  {
    *(_DWORD *)(a1 + 2976) |= 4u;
    *a3 = 1;
  }
  if ( g_VirtualGpuOnly )
  {
    *(_DWORD *)(a1 + 2976) |= 4u;
    *a3 = 1;
  }
  return 0LL;
}
