/*
 * XREFs of ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140043C04
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1401AC1F0 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1401AC6E0 (DxgkNetDispStopMiracastDisplayDevice.c)
 *     ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1402707F8 (-AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x140043C3C (RtlStringLengthWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCchLengthW(const unsigned __int16 *a1, size_t a2, unsigned __int64 *a3)
{
  NTSTATUS result; // eax

  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    result = RtlStringLengthWorkerW(a1, a2, a3);
    if ( result >= 0 )
      return result;
  }
  else
  {
    result = -1073741811;
  }
  if ( a3 )
    *a3 = 0LL;
  return result;
}
