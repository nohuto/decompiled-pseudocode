/*
 * XREFs of NvmeNamespaceGetInstanceId @ 0x1401045F8
 * Callers:
 *     NvmeNamespaceQueryIdIrp @ 0x1401A7394 (NvmeNamespaceQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x140039774 (RtlStringCchPrintfW.c)
 *     StorBuildNVMeSerialNumber @ 0x14008EC8C (StorBuildNVMeSerialNumber.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaFixupIds @ 0x1401BCFD0 (RaFixupIds.c)
 */

__int64 __fastcall NvmeNamespaceGetInstanceId(__int64 a1, wchar_t **a2)
{
  wchar_t *Pool; // rbx
  unsigned int v5; // r10d
  _BYTE v7[128]; // [rsp+20h] [rbp-98h] BYREF

  memset_0(v7, 0, sizeof(v7));
  Pool = (wchar_t *)RaidAllocatePool(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    if ( (unsigned int)StorBuildNVMeSerialNumber(a1, 0x80u, (__int64)v7) )
      RtlStringCchPrintfW(Pool, 0x40uLL, L"%hs", v7);
    RaFixupIds(Pool, 0LL, 64LL);
  }
  else
  {
    v5 = -1073741801;
  }
  *a2 = Pool;
  return v5;
}
