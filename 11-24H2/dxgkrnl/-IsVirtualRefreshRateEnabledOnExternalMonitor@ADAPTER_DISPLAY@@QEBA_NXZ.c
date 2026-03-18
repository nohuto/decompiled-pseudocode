/*
 * XREFs of ?IsVirtualRefreshRateEnabledOnExternalMonitor@ADAPTER_DISPLAY@@QEBA_NXZ @ 0x1402DBC18
 * Callers:
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402DBB50 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::IsVirtualRefreshRateEnabledOnExternalMonitor(ADAPTER_DISPLAY *this)
{
  bool result; // al

  if ( *(int *)(*((_QWORD *)this + 2) + 2736LL) >= 12544 )
    return 1;
  result = 0;
  if ( *((_DWORD *)this + 136) )
    return 1;
  return result;
}
