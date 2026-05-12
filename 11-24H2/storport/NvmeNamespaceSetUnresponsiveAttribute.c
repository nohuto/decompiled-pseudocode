/*
 * XREFs of NvmeNamespaceSetUnresponsiveAttribute @ 0x140112140
 * Callers:
 *     NvmeNamespaceAttributeManagementIoctl @ 0x1400FBA28 (NvmeNamespaceAttributeManagementIoctl.c)
 * Callees:
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     StorpTelemetryMarkNamespaceUnresponsive @ 0x1400B606C (StorpTelemetryMarkNamespaceUnresponsive.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 */

__int64 __fastcall NvmeNamespaceSetUnresponsiveAttribute(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdi
  wchar_t *Buffer; // rdx
  struct _UNICODE_STRING v6; // [rsp+A0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  if ( (v1 & 0x200) == 0 )
  {
    RtlStringFromGUID((const GUID *const)(a1 + 160), &v6);
    Buffer = (wchar_t *)&word_140150F48;
    if ( v6.Buffer )
      Buffer = v6.Buffer;
    StorEtwNvmeNamespaceEvent(
      a1,
      1,
      4,
      (__int64)L"NVMe namespace clear unresponsive",
      Buffer,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    StorpTelemetryMarkNamespaceUnresponsive(a1);
    *(_QWORD *)(a1 + 112) |= 0x200uLL;
    NvmeControllerResetRecovery(v2);
  }
  return 0LL;
}
