/*
 * XREFs of ?GetDriverColorimetryOverride@KernelDriver@@UEBAJAEAU_DXGK_COLORIMETRY@@@Z @ 0x140276650
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetMonitorColorimetryOverride @ 0x14024DD24 (DpiGetMonitorColorimetryOverride.c)
 */

__int64 __fastcall KernelDriver::GetDriverColorimetryOverride(KernelDriver *this, struct _DXGK_COLORIMETRY *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return DpiGetMonitorColorimetryOverride(
             *(_QWORD *)(*(_QWORD *)(v2 + 16) + 216LL),
             *((_DWORD *)this + 8),
             (__int64)a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  result = 3221225664LL;
  WdLogGlobalForLineNumber = 53;
  return result;
}
