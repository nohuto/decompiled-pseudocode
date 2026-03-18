/*
 * XREFs of ?GetWholeMonitorDescriptor@KernelDriver@@UEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x14027DCA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetWholeMonitorDescriptor @ 0x14008D454 (DpiGetWholeMonitorDescriptor.c)
 */

__int64 __fastcall KernelDriver::GetWholeMonitorDescriptor(KernelDriver *this, struct _DXGK_MONITOR_DESCRIPTOR *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    return DpiGetWholeMonitorDescriptor(v2, (__int64)a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  result = 3221225664LL;
  WdLogGlobalForLineNumber = 39;
  return result;
}
