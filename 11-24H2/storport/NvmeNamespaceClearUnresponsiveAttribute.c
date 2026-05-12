/*
 * XREFs of NvmeNamespaceClearUnresponsiveAttribute @ 0x1400FC704
 * Callers:
 *     NvmeNamespaceAttributeManagementIoctl @ 0x1400FBA28 (NvmeNamespaceAttributeManagementIoctl.c)
 * Callees:
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     StorpTelemetryMarkNamespaceResponsive @ 0x1400B5E48 (StorpTelemetryMarkNamespaceResponsive.c)
 */

__int64 __fastcall NvmeNamespaceClearUnresponsiveAttribute(const GUID *a1)
{
  unsigned int Data1; // eax
  wchar_t *Buffer; // rdx
  struct _UNICODE_STRING v5; // [rsp+A0h] [rbp-18h] BYREF

  Data1 = a1[7].Data1;
  v5 = 0LL;
  if ( (Data1 & 0x200) != 0 )
  {
    RtlStringFromGUID(a1 + 10, &v5);
    Buffer = (wchar_t *)&word_140150F48;
    if ( v5.Buffer )
      Buffer = v5.Buffer;
    StorEtwNvmeNamespaceEvent(
      (__int64)a1,
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
    StorpTelemetryMarkNamespaceResponsive((__int64)a1);
    *(_QWORD *)&a1[7].Data1 &= ~0x200uLL;
  }
  return 0LL;
}
