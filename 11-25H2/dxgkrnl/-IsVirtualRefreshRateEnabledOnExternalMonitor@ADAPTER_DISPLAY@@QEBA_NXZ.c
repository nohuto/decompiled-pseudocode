/*
 * XREFs of ?IsVirtualRefreshRateEnabledOnExternalMonitor@ADAPTER_DISPLAY@@QEBA_NXZ @ 0x14037DE38
 * Callers:
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x14037DD70 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::IsVirtualRefreshRateEnabledOnExternalMonitor(ADAPTER_DISPLAY *this)
{
  bool result; // al

  if ( *(int *)(*((_QWORD *)this + 2) + 2736LL) >= 12544 )
    return 1;
  result = 0;
  if ( *((_DWORD *)this + 134) )
    return 1;
  return result;
}
